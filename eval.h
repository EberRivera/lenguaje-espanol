
#ifndef EVAL_H
#define EVAL_H

#include "ast.h"
#include "tabla.h"

void imprimir_valor(Nodo* n);
int evaluar(Nodo* n);
double evaluar_decimal(Nodo* n);
void ejecutar(Nodo* n);
void ejecutar_lista(Nodo* n);
TipoDato tipo_desde_nodo(Nodo* n);

#endif
