
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
            return v->valor.entero;
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
        default: return 0;
    }
}

void ejecutar_lista(Nodo* n) {
    while (n) {
        ejecutar(n);
        n = n->siguiente;
    }
}

void ejecutar(Nodo* n) {
    if (!n) return;
    switch(n->tipo) {
        case NODO_PROGRAMA: {
            ejecutar_lista(n->izq);
            break;
        }
        case NODO_DECLARACION: {
            crear_variable(n->valor_cadena, TIPO_ENTERO);
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
        case NODO_IMPRIMIR: {
            imprimir_valor(n->izq);
            printf("\n");
            break;
        }
        case NODO_SI: {
            int cond = evaluar(n->izq);
            if (cond) {
                ejecutar_lista(n->der);
            } else if (n->extra) {
                ejecutar_lista(n->extra);
            }
            break;
        }
        case NODO_MIENTRAS: {
            while (evaluar(n->izq)) {
                ejecutar_lista(n->der);
            }
            break;
        }
        case NODO_HACER: {
            do {
                ejecutar_lista(n->izq);
            } while (evaluar(n->der));
            break;
        }
        case NODO_RETORNAR: break;
        default: break;
    }
}
