
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
    return &tabla[num_vars++];
}

void asignar_entero(const char* nombre, int valor) {
    Variable* v = buscar_variable(nombre);
    if (!v) { printf("Error: variable '%s' no declarada\n", nombre); return; }
    v->valor.entero = valor;
    v->inicializado = 1;
}

void asignar_decimal(const char* nombre, double valor) {
    Variable* v = buscar_variable(nombre);
    if (!v) { printf("Error: variable '%s' no declarada\n", nombre); return; }
    v->valor.decimal = valor;
    v->inicializado = 1;
}

int obtener_entero(const char* nombre) {
    Variable* v = buscar_variable(nombre);
    if (!v || !v->inicializado) { printf("Error: variable '%s' no inicializada\n", nombre); return 0; }
    return v->valor.entero;
}

double obtener_decimal(const char* nombre) {
    Variable* v = buscar_variable(nombre);
    if (!v || !v->inicializado) { printf("Error: variable '%s' no inicializada\n", nombre); return 0.0; }
    return v->valor.decimal;
}
