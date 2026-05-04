
#ifndef AST_H
#define AST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    NODO_PROGRAMA, NODO_SENTENCIAS, NODO_DECLARACION, NODO_ASIGNACION,
    NODO_IMPRIMIR, NODO_SI, NODO_MIENTRAS, NODO_HACER, NODO_PARA,
    NODO_RETORNAR, NODO_SUMA, NODO_RESTA, NODO_MULT, NODO_DIV,
    NODO_MAYOR, NODO_MENOR, NODO_MAYORIGUAL, NODO_MENORIGUAL,
    NODO_IGUAL, NODO_DIFERENTE, NODO_NUM_ENTERO, NODO_NUM_DECIMAL,
    NODO_CADENA, NODO_ID, NODO_CONCAT, NODO_INGRESAR, NODO_LLAMADA
} TipoNodo;

typedef struct Nodo {
    TipoNodo tipo;
    int valor_entero;
    double valor_decimal;
    char* valor_cadena;
    struct Nodo* izq;
    struct Nodo* der;
    struct Nodo* extra;
    struct Nodo* siguiente;
} Nodo;

Nodo* crear_nodo(TipoNodo tipo);
Nodo* nodo_entero(int val);
Nodo* nodo_cadena(char* val);
Nodo* nodo_id(char* nombre);
Nodo* nodo_op(TipoNodo tipo, Nodo* izq, Nodo* der);
Nodo* agregar_sentencia(Nodo* lista, Nodo* nueva);

#endif
