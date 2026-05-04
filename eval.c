
#include "eval.h"
#include <math.h>

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
        if (v && v->tipo == TIPO_DECIMAL) {
            printf("%.2f", v->valor.decimal);
        } else {
            printf("%d", evaluar(n));
        }
    } else {
        printf("%d", evaluar(n));
    }
}

double evaluar_decimal(Nodo* n) {
    if (!n) return 0;
    switch(n->tipo) {
        case NODO_NUM_ENTERO:  return (double)n->valor_entero;
        case NODO_NUM_DECIMAL: return n->valor_decimal;
        case NODO_ID: {
            Variable* v = buscar_variable(n->valor_cadena);
            if (!v) return 0;
            if (v->tipo == TIPO_DECIMAL) return v->valor.decimal;
            return (double)v->valor.entero;
        }
        case NODO_SUMA:  return evaluar_decimal(n->izq) + evaluar_decimal(n->der);
        case NODO_RESTA: return evaluar_decimal(n->izq) - evaluar_decimal(n->der);
        case NODO_MULT:  return evaluar_decimal(n->izq) * evaluar_decimal(n->der);
        case NODO_DIV: {
            double d = evaluar_decimal(n->der);
            if (d == 0) { printf("\033[1;31mError: division por cero\033[0m\n"); return 0; }
            return evaluar_decimal(n->izq) / d;
        }
        default: return (double)evaluar(n);
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
        case NODO_NEGATIVO:   return -evaluar(n->izq);
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
            crear_variable(n->valor_cadena, tipo_desde_nodo(n));
            break;
        }
        case NODO_ASIGNACION: {
            if (n->der && n->der->tipo == NODO_INGRESAR) {
                Variable* v = buscar_variable(n->valor_cadena);
                if (n->der->izq) imprimir_valor(n->der->izq);
                printf(": ");
                fflush(stdout);
                if (v && v->tipo == TIPO_DECIMAL) {
                    double val;
                    scanf("%lf", &val);
                    asignar_decimal(n->valor_cadena, val);
                } else {
                    int val;
                    scanf("%d", &val);
                    asignar_entero(n->valor_cadena, val);
                }
            } else if (n->der && n->der->tipo == NODO_NUM_DECIMAL) {
                asignar_decimal(n->valor_cadena, n->der->valor_decimal);
            } else {
                Variable* v = buscar_variable(n->valor_cadena);
                if (v && v->tipo == TIPO_DECIMAL) {
                    asignar_decimal(n->valor_cadena, evaluar_decimal(n->der));
                } else {
                    asignar_entero(n->valor_cadena, evaluar(n->der));
                }
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

TipoDato tipo_desde_nodo(Nodo* n) {
    if (!n) return TIPO_ENTERO;
    return n->valor_entero == TIPO_DECIMAL ? TIPO_DECIMAL : TIPO_ENTERO;
}
