
#include "tabla.h"

Variable tabla[MAX_VARS];
int num_vars = 0;

Variable* buscar_variable(const char* nombre) {
    for (int i = 0; i < num_vars; i++) {
        if (strcmp(tabla[i].nombre, nombre) == 0)
            return &tabla[i];
    }
    return NULL;
}

Variable* crear_variable(const char* nombre, TipoDato tipo) {
    Variable* v = buscar_variable(nombre);
    if (v) return v;
    strcpy(tabla[num_vars].nombre, nombre);
    tabla[num_vars].tipo = tipo;
    tabla[num_vars].inicializado = 0;
    tabla[num_vars].valor.decimal = 0;
    tabla[num_vars].valor.entero = 0;
    return &tabla[num_vars++];
}

void asignar_entero(const char* nombre, int valor) {
    Variable* v = buscar_variable(nombre);
    if (!v) { printf("\033[1;31mError: variable '%s' no declarada\033[0m\n", nombre); return; }
    v->valor.entero = valor;
    v->tipo = TIPO_ENTERO;
    v->inicializado = 1;
}

void asignar_decimal(const char* nombre, double valor) {
    Variable* v = buscar_variable(nombre);
    if (!v) { printf("\033[1;31mError: variable '%s' no declarada\033[0m\n", nombre); return; }
    v->valor.decimal = valor;
    v->tipo = TIPO_DECIMAL;
    v->inicializado = 1;
}

int obtener_entero(const char* nombre) {
    Variable* v = buscar_variable(nombre);
    if (!v || !v->inicializado) {
        printf("\033[1;31mError: variable '%s' no inicializada\033[0m\n", nombre);
        return 0;
    }
    if (v->tipo == TIPO_DECIMAL) return (int)v->valor.decimal;
    return v->valor.entero;
}

double obtener_decimal(const char* nombre) {
    Variable* v = buscar_variable(nombre);
    if (!v || !v->inicializado) {
        printf("\033[1;31mError: variable '%s' no inicializada\033[0m\n", nombre);
        return 0.0;
    }
    if (v->tipo == TIPO_ENTERO) return (double)v->valor.entero;
    return v->valor.decimal;
}
