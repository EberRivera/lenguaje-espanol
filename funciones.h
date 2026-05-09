
#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "ast.h"
#include <string.h>

#define MAX_FUNCIONES 50
#define MAX_PARAMS 10

typedef struct {
    char nombre[50];
    char params[MAX_PARAMS][50];
    int num_params;
    Nodo* cuerpo;
} Funcion;

extern Funcion tabla_funciones[MAX_FUNCIONES];
extern int num_funciones;
extern int retorno_activo;
extern int valor_retorno;

void registrar_funcion(const char* nombre, char params[][50], int num_params, Nodo* cuerpo);
Funcion* buscar_funcion(const char* nombre);

#endif
