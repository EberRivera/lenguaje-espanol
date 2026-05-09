
#include "funciones.h"
#include <string.h>
#include <stdlib.h>

Funcion tabla_funciones[MAX_FUNCIONES];
int num_funciones = 0;
int retorno_activo = 0;
int valor_retorno = 0;

void registrar_funcion(const char* nombre, char params[][50], int num_params, Nodo* cuerpo) {
    strcpy(tabla_funciones[num_funciones].nombre, nombre);
    tabla_funciones[num_funciones].num_params = num_params;
    for (int i = 0; i < num_params; i++)
        strcpy(tabla_funciones[num_funciones].params[i], params[i]);
    tabla_funciones[num_funciones].cuerpo = cuerpo;
    num_funciones++;
}

Funcion* buscar_funcion(const char* nombre) {
    for (int i = 0; i < num_funciones; i++)
        if (strcmp(tabla_funciones[i].nombre, nombre) == 0)
            return &tabla_funciones[i];
    return NULL;
}
