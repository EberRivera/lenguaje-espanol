
#ifndef TABLA_H
#define TABLA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VARS 100

typedef enum {
    TIPO_ENTERO, TIPO_DECIMAL, TIPO_BOLEANO, TIPO_CARACTER, TIPO_CADENA
} TipoDato;

typedef struct {
    char nombre[50];
    TipoDato tipo;
    union {
        int entero;
        double decimal;
        int boleano;
        char caracter;
        char cadena[200];
    } valor;
    int inicializado;
} Variable;

extern Variable tabla[MAX_VARS];
extern int num_vars;

Variable* buscar_variable(const char* nombre);
Variable* crear_variable(const char* nombre, TipoDato tipo);
void asignar_entero(const char* nombre, int valor);
void asignar_decimal(const char* nombre, double valor);
int obtener_entero(const char* nombre);
double obtener_decimal(const char* nombre);

#endif
