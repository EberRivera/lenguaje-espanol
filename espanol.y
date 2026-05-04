
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla.h"
#include "ast.h"
#include "eval.h"

extern int num_linea;
extern FILE *yyin;

void yyerror(const char *s);
int yylex();

TipoDato tipo_actual;
int num_errores = 0;
%}

%union {
    int entero;
    double decimal;
    char* cadena;
    Nodo* nodo;
}

%token BOLEANO DECIMAL VERDADERO FALSO CARACTER ENTERO DOBLE CONSTANTE
%token CASOS DEFECTO CASO PARAR PARA HACER MIENTRAS RETORNAR
%token SI DELOCONTRARIO FUNCION PROCEDIMIENTO PROGRAMA
%token INGRESAR IMPRIMIR
%token SUMA RESTA MULT DIV PUNTO ASIGN IGUAL DIFERENTE
%token MAYOR MENOR MAYORIGUAL MENORIGUAL
%token LPAREN RPAREN LLAVE_A LLAVE_C CORCHETE_A CORCHETE_C
%token COMA PUNTOCOMA DOSPUNTOS
%token <entero> NUM_ENTERO
%token <decimal> NUM_DECIMAL
%token <cadena> CADENA CARACTER_LIT ID

%type <nodo> programa sentencias sentencia
%type <nodo> declaracion asignacion
%type <nodo> sentencia_si sentencia_mientras sentencia_hacer
%type <nodo> sentencia_imprimir sentencia_retornar
%type <nodo> expresion termino factor condicion
%type <nodo> params_imprimir llamada_funcion argumentos
%type <nodo> inicio lista_funciones definicion_funcion

%%

inicio:
    lista_funciones programa
    {
        ejecutar($2);
    }
    | programa
    {
        ejecutar($1);
    }
;

lista_funciones:
    lista_funciones definicion_funcion  { $$ = $1; }
    | definicion_funcion                { $$ = $1; }
;

definicion_funcion:
    tipo ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C  { $$ = NULL; }
    | tipo ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C                 { $$ = NULL; }
    | ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C     { $$ = NULL; }
    | ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C                      { $$ = NULL; }
;

lista_parametros:
    lista_parametros COMA parametro
    | parametro
;

parametro:
    tipo ID
;

programa:
    PROGRAMA ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C
    {
        Nodo* n = crear_nodo(NODO_PROGRAMA);
        n->izq = $6;
        $$ = n;
    }
;

sentencias:
    sentencias sentencia
    {
        $$ = agregar_sentencia($1, $2);
    }
    | sentencia
    {
        $$ = $1;
    }
;

sentencia:
    declaracion        { $$ = $1; }
    | asignacion       { $$ = $1; }
    | sentencia_si     { $$ = $1; }
    | sentencia_mientras { $$ = $1; }
    | sentencia_hacer  { $$ = $1; }
    | sentencia_imprimir { $$ = $1; }
    | sentencia_retornar { $$ = $1; }
    | llamada_funcion PUNTOCOMA { $$ = $1; }
;

declaracion:
    tipo ID PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_DECLARACION);
        n->valor_cadena = strdup($2);
        $$ = n;
    }
    | tipo ID CORCHETE_A dimensiones CORCHETE_C PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_DECLARACION);
        n->valor_cadena = strdup($2);
        $$ = n;
    }
    | CONSTANTE tipo ID ASIGN expresion PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup($3);
        n->der = $5;
        $$ = n;
    }
;

tipo:
    ENTERO      { tipo_actual = TIPO_ENTERO; }
    | DECIMAL   { tipo_actual = TIPO_DECIMAL; }
    | BOLEANO   { tipo_actual = TIPO_BOLEANO; }
    | CARACTER  { tipo_actual = TIPO_CARACTER; }
    | DOBLE     { tipo_actual = TIPO_DECIMAL; }
;

dimensiones:
    NUM_ENTERO
    | dimensiones COMA NUM_ENTERO
;

asignacion:
    ID ASIGN expresion PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup($1);
        n->der = $3;
        $$ = n;
    }
    | ID ASIGN INGRESAR LPAREN CADENA RPAREN PUNTOCOMA
    {
        Nodo* ing = crear_nodo(NODO_INGRESAR);
        ing->izq = nodo_cadena($5);
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup($1);
        n->der = ing;
        $$ = n;
    }
;

expresion:
    expresion SUMA termino
    {
        $$ = nodo_op(NODO_SUMA, $1, $3);
    }
    | expresion RESTA termino
    {
        $$ = nodo_op(NODO_RESTA, $1, $3);
    }
    | termino { $$ = $1; }
;

termino:
    termino MULT factor
    {
        $$ = nodo_op(NODO_MULT, $1, $3);
    }
    | termino DIV factor
    {
        $$ = nodo_op(NODO_DIV, $1, $3);
    }
    | factor { $$ = $1; }
;

factor:
    NUM_ENTERO          { $$ = nodo_entero($1); }
    | NUM_DECIMAL       { Nodo* n = crear_nodo(NODO_NUM_DECIMAL); n->valor_decimal = $1; $$ = n; }
    | VERDADERO         { $$ = nodo_entero(1); }
    | FALSO             { $$ = nodo_entero(0); }
    | ID                { $$ = nodo_id($1); }
    | ID CORCHETE_A expresion CORCHETE_C { $$ = nodo_id($1); }
    | LPAREN expresion RPAREN { $$ = $2; }
    | llamada_funcion   { $$ = $1; }
    | CADENA            { $$ = nodo_cadena($1); }
;

condicion:
    expresion MAYOR expresion       { $$ = nodo_op(NODO_MAYOR, $1, $3); }
    | expresion MENOR expresion     { $$ = nodo_op(NODO_MENOR, $1, $3); }
    | expresion MAYORIGUAL expresion { $$ = nodo_op(NODO_MAYORIGUAL, $1, $3); }
    | expresion MENORIGUAL expresion { $$ = nodo_op(NODO_MENORIGUAL, $1, $3); }
    | expresion IGUAL expresion     { $$ = nodo_op(NODO_IGUAL, $1, $3); }
    | expresion DIFERENTE expresion { $$ = nodo_op(NODO_DIFERENTE, $1, $3); }
;

sentencia_si:
    SI LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = $3;
        n->der = $6;
        n->extra = NULL;
        $$ = n;
    }
    | SI LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C DELOCONTRARIO LLAVE_A sentencias LLAVE_C
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = $3;
        n->der = $6;
        n->extra = $10;
        $$ = n;
    }
;

sentencia_mientras:
    MIENTRAS LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C
    {
        Nodo* n = crear_nodo(NODO_MIENTRAS);
        n->izq = $3;
        n->der = $6;
        $$ = n;
    }
;

sentencia_hacer:
    HACER LLAVE_A sentencias LLAVE_C MIENTRAS LPAREN condicion RPAREN PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_HACER);
        n->izq = $3;
        n->der = $7;
        $$ = n;
    }
;

sentencia_imprimir:
    IMPRIMIR LPAREN params_imprimir RPAREN PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_IMPRIMIR);
        n->izq = $3;
        $$ = n;
    }
;

params_imprimir:
    params_imprimir PUNTO factor
    {
        Nodo* n = crear_nodo(NODO_CONCAT);
        n->izq = $1;
        n->der = $3;
        $$ = n;
    }
    | factor { $$ = $1; }
;

sentencia_retornar:
    RETORNAR LPAREN expresion RPAREN PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_RETORNAR);
        n->izq = $3;
        $$ = n;
    }
;

llamada_funcion:
    ID LPAREN argumentos RPAREN
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup($1);
        n->izq = $3;
        $$ = n;
    }
    | ID LPAREN RPAREN
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup($1);
        $$ = n;
    }
;

argumentos:
    argumentos COMA expresion
    {
        $$ = agregar_sentencia($1, $3);
    }
    | expresion { $$ = $1; }
;

%%

void yyerror(const char *s) {
    num_errores++;
    printf("\033[1;31mError sintactico en linea %d: %s\033[0m\n", num_linea, s);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("=================================\n");
        printf("  Compilador Lenguaje Espanol\n");
        printf("=================================\n");
        printf("Modo interactivo activado.\n");
        printf("Escribe tu programa y presiona\n");
        printf("Ctrl+D cuando termines.\n");
        printf("---------------------------------\n");
        yyin = stdin;
    } else {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            printf("Error: no se pudo abrir el archivo '%s'\n", argv[1]);
            return 1;
        }
    }

    if (yyparse() == 0 && num_errores == 0) {
        printf("\n\033[1;32mCompilacion exitosa. Sin errores.\033[0m\n");
    } else if (num_errores > 0) {
        printf("\n\033[1;31mCompilacion fallida. Se encontraron %d error(es).\033[0m\n", num_errores);
    }

    if (argc >= 2) fclose(yyin);
    return 0;
}
