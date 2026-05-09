
#ifndef CODEGEN_H
#define CODEGEN_H

#include "ast.h"
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generar_codigo(Nodo* ast, const char* archivo_salida);
void gen_nodo(Nodo* n, FILE* f, int indent);
void gen_expresion(Nodo* n, FILE* f);
void gen_lista(Nodo* n, FILE* f, int indent);
void imprimir_indent(FILE* f, int indent);

#endif
