
#include "eval.h"

void imprimir_valor(Nodo* n) {
    if (!n) return;
    if (n->tipo == NODO_CADENA) {
        char* s = n->valor_cadena;
        if (s[0] == '"') s++;
        char buf[200];
        strncpy(buf, s, sizeof(buf));
        int len = strlen(buf);
        if (len > 0 && buf[len-1] == '"') buf[len-1] = '\0';
        printf("%s", buf);
    } else if (n->tipo == NODO_CONCAT) {
        imprimir_valor(n->izq);
        imprimir_valor(n->der);
    } else if (n->tipo == NODO_NUM_DECIMAL) {
        printf("%.2f", n->valor_decimal);
    } else if (n->tipo == NODO_ID) {
        Variable* v = buscar_variable(n->valor_cadena);
        if (v && v->tipo == TIPO_DECIMAL && !v->es_arreglo)
            printf("%.2f", v->valor.decimal);
        else
            printf("%d", evaluar(n));
    } else if (n->tipo == NODO_ARREGLO_ACCESO) {
        printf("%d", evaluar(n));
    } else {
        printf("%d", evaluar(n));
    }
}

int evaluar(Nodo* n) {
    if (!n) return 0;
    switch(n->tipo) {
        case NODO_NUM_ENTERO:  return n->valor_entero;
        case NODO_NUM_DECIMAL: return (int)n->valor_decimal;
        case NODO_ID: {
            Variable* v = buscar_variable(n->valor_cadena);
            if (!v) {
                printf("\033[1;31mError: variable '%s' no declarada\033[0m\n", n->valor_cadena);
                return 0;
            }
            if (v->tipo == TIPO_DECIMAL) return (int)v->valor.decimal;
            return v->valor.entero;
        }
        case NODO_ARREGLO_ACCESO: {
            int idx = evaluar(n->izq);
            return obtener_arreglo_entero(n->valor_cadena, idx);
        }
        case NODO_SUMA:       return evaluar(n->izq) + evaluar(n->der);
        case NODO_RESTA:      return evaluar(n->izq) - evaluar(n->der);
        case NODO_MULT:       return evaluar(n->izq) * evaluar(n->der);
        case NODO_DIV: {
            int d = evaluar(n->der);
            if (d == 0) { printf("\033[1;31mError: division por cero\033[0m\n"); return 0; }
            return evaluar(n->izq) / d;
        }
        case NODO_MAYOR:      return evaluar(n->izq) > evaluar(n->der);
        case NODO_MENOR:      return evaluar(n->izq) < evaluar(n->der);
        case NODO_MAYORIGUAL: return evaluar(n->izq) >= evaluar(n->der);
        case NODO_MENORIGUAL: return evaluar(n->izq) <= evaluar(n->der);
        case NODO_IGUAL:      return evaluar(n->izq) == evaluar(n->der);
        case NODO_DIFERENTE:  return evaluar(n->izq) != evaluar(n->der);
        case NODO_AND:        return evaluar(n->izq) && evaluar(n->der);
        case NODO_OR:         return evaluar(n->izq) || evaluar(n->der);
        case NODO_NOT:        return !evaluar(n->izq);
        case NODO_NEGATIVO:   return -evaluar(n->izq);
        case NODO_LLAMADA: {
            Funcion* f = buscar_funcion(n->valor_cadena);
            if (!f) return 0;

            /* Evaluar argumentos */
            int args[MAX_PARAMS];
            int nargs = 0;
            Nodo* arg = n->izq;
            while (arg && nargs < MAX_PARAMS) {
                args[nargs++] = evaluar(arg);
                arg = arg->siguiente;
            }

            /* Guardar variables actuales */
            Variable backup[MAX_VARS];
            int backup_n = num_vars;
            memcpy(backup, tabla, sizeof(Variable) * num_vars);

            /* Crear variables de parametros */
            for (int i = 0; i < f->num_params && i < nargs; i++) {
                Variable* v = crear_variable(f->params[i], TIPO_ENTERO);
                v->valor.entero = args[i];
                v->inicializado = 1;
            }

            /* Ejecutar cuerpo */
            retorno_activo = 0;
            valor_retorno = 0;
            ejecutar_lista(f->cuerpo);
            int resultado = valor_retorno;

            /* Restaurar variables */
            num_vars = backup_n;
            memcpy(tabla, backup, sizeof(Variable) * num_vars);

            retorno_activo = 0;
            return resultado;
        }
        default: return 0;
    }
}

void ejecutar_lista(Nodo* n) {
    while (n && !retorno_activo) {
        ejecutar(n);
        n = n->siguiente;
    }
}

void ejecutar(Nodo* n) {
    if (!n || retorno_activo) return;
    switch(n->tipo) {
        case NODO_PROGRAMA: {
            ejecutar_lista(n->izq);
            break;
        }
        case NODO_DECLARACION: {
            crear_variable(n->valor_cadena, TIPO_ENTERO);
            break;
        }
        case NODO_ARREGLO_DECL: {
            int tamano = evaluar(n->izq);
            crear_arreglo(n->valor_cadena, TIPO_ENTERO, tamano);
            break;
        }
        case NODO_ASIGNACION: {
            if (n->der && n->der->tipo == NODO_INGRESAR) {
                int val;
                if (n->der->izq) imprimir_valor(n->der->izq);
                printf(": ");
                fflush(stdout);
                scanf("%d", &val);
                asignar_entero(n->valor_cadena, val);
            } else {
                asignar_entero(n->valor_cadena, evaluar(n->der));
            }
            break;
        }
        case NODO_ARREGLO_ASIGN: {
            int idx = evaluar(n->izq);
            if (n->der && n->der->tipo == NODO_INGRESAR) {
                int val;
                if (n->der->izq) imprimir_valor(n->der->izq);
                printf(": ");
                fflush(stdout);
                scanf("%d", &val);
                asignar_arreglo_entero(n->valor_cadena, idx, val);
            } else {
                asignar_arreglo_entero(n->valor_cadena, idx, evaluar(n->der));
            }
            break;
        }
        case NODO_IMPRIMIR: {
            imprimir_valor(n->izq);
            printf("\n");
            break;
        }
        case NODO_SI: {
            int cond = evaluar(n->izq);
            if (cond)
                ejecutar_lista(n->der);
            else if (n->extra)
                ejecutar_lista(n->extra);
            break;
        }
        case NODO_MIENTRAS: {
            while (!retorno_activo && evaluar(n->izq))
                ejecutar_lista(n->der);
            break;
        }
        case NODO_HACER: {
            do {
                ejecutar_lista(n->izq);
            } while (!retorno_activo && evaluar(n->der));
            break;
        }
        case NODO_RETORNAR: {
            valor_retorno = evaluar(n->izq);
            retorno_activo = 1;
            break;
        }
        case NODO_LLAMADA: {
            evaluar(n);
            break;
        }
        default: break;
    }
}

TipoDato tipo_desde_nodo(Nodo* n) {
    if (!n) return TIPO_ENTERO;
    return n->valor_entero == TIPO_DECIMAL ? TIPO_DECIMAL : TIPO_ENTERO;
}
