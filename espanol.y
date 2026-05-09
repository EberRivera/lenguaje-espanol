
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla.h"
#include "ast.h"
#include "eval.h"
#include "funciones.h"

extern int num_linea;
extern FILE *yyin;

void yyerror(const char *s);
void sugerencia_error(const char* contexto);
int yylex();

TipoDato tipo_actual;
int num_errores = 0;
char param_nombres[10][50];
int num_params_actual = 0;
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
%token INGRESAR IMPRIMIR AND OR NOT
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
%type <nodo> expresion termino factor condicion cond_simple
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
    tipo ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C
    {
        registrar_funcion($<cadena>2, param_nombres, num_params_actual, $7);
        num_params_actual = 0;
        $$ = NULL;
    }
    | tipo ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C
    {
        registrar_funcion($<cadena>2, param_nombres, 0, $6);
        $$ = NULL;
    }
    | ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C
    {
        registrar_funcion($1, param_nombres, num_params_actual, $6);
        num_params_actual = 0;
        $$ = NULL;
    }
    | ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C
    {
        registrar_funcion($1, param_nombres, 0, $5);
        $$ = NULL;
    }
;

lista_parametros:
    lista_parametros COMA parametro
    | parametro
;

parametro:
    tipo ID
    {
        strcpy(param_nombres[num_params_actual++], $<cadena>2);
    }
;

programa:
    PROGRAMA ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C
    {
        Nodo* n = crear_nodo(NODO_PROGRAMA);
        n->izq = $6;
        $$ = n;
    }
    | PROGRAMA LPAREN RPAREN LLAVE_A sentencias LLAVE_C
    {
        printf("[1;33mSugerencia: 'Programa' necesita un nombre. Ejemplo: Programa miPrograma()[0m\n");
        num_errores++;
        $$ = NULL;
    }
    | PROGRAMA error LLAVE_A sentencias LLAVE_C
    {
        printf("[1;33mSugerencia: verifica la declaracion de 'Programa nombre()'[0m\n");
        $$ = NULL;
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
    | tipo ID CORCHETE_A NUM_ENTERO CORCHETE_C PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_DECL);
        n->valor_cadena = strdup($2);
        n->izq = nodo_entero($4);
        $$ = n;
    }
    | tipo ID CORCHETE_A NUM_ENTERO COMA NUM_ENTERO CORCHETE_C PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_DECL);
        n->valor_cadena = strdup($2);
        n->izq = nodo_entero($4 * $6);
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



asignacion:
    ID ASIGN expresion PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup($1);
        n->der = $3;
        $$ = n;
    }
    | ID ASIGN ID LPAREN argumentos RPAREN PUNTOCOMA
    {
        Nodo* call = crear_nodo(NODO_LLAMADA);
        call->valor_cadena = strdup($3);
        call->izq = $5;
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup($1);
        n->der = call;
        $$ = n;
    }
    | ID ASIGN ID LPAREN RPAREN PUNTOCOMA
    {
        Nodo* call = crear_nodo(NODO_LLAMADA);
        call->valor_cadena = strdup($3);
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup($1);
        n->der = call;
        $$ = n;
    }
    | ID ASIGN expresion error
    {
        printf("\033[1;33mSugerencia: falta ; despues de la asignacion de %s\033[0m\n", $1);
        num_errores++;
        $$ = NULL;
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
    | ID CORCHETE_A expresion CORCHETE_C ASIGN expresion PUNTOCOMA
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_ASIGN);
        n->valor_cadena = strdup($1);
        n->izq = $3;
        n->der = $6;
        $$ = n;
    }
    | ID CORCHETE_A expresion CORCHETE_C ASIGN INGRESAR LPAREN CADENA RPAREN PUNTOCOMA
    {
        Nodo* ing = crear_nodo(NODO_INGRESAR);
        ing->izq = nodo_cadena($8);
        Nodo* n = crear_nodo(NODO_ARREGLO_ASIGN);
        n->valor_cadena = strdup($1);
        n->izq = $3;
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
    | ID CORCHETE_A expresion CORCHETE_C
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_ACCESO);
        n->valor_cadena = strdup($1);
        n->izq = $3;
        $$ = n;
    }
    | LPAREN expresion RPAREN { $$ = $2; }
    | llamada_funcion   { $$ = $1; }
    | CADENA            { $$ = nodo_cadena($1); }
;

cond_simple:
    expresion MAYOR expresion        { $$ = nodo_op(NODO_MAYOR, $1, $3); }
    | expresion MENOR expresion      { $$ = nodo_op(NODO_MENOR, $1, $3); }
    | expresion MAYORIGUAL expresion { $$ = nodo_op(NODO_MAYORIGUAL, $1, $3); }
    | expresion MENORIGUAL expresion { $$ = nodo_op(NODO_MENORIGUAL, $1, $3); }
    | expresion IGUAL expresion      { $$ = nodo_op(NODO_IGUAL, $1, $3); }
    | expresion DIFERENTE expresion  { $$ = nodo_op(NODO_DIFERENTE, $1, $3); }
;

condicion:
    cond_simple                      { $$ = $1; }
    | condicion AND cond_simple      { $$ = nodo_op(NODO_AND, $1, $3); }
    | condicion OR cond_simple       { $$ = nodo_op(NODO_OR, $1, $3); }
    | NOT cond_simple                { $$ = nodo_op(NODO_NOT, $2, NULL); }
    | LPAREN condicion RPAREN        { $$ = $2; }
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
    | SI error
    {
        sugerencia_error("si");
        num_errores++;
        $$ = NULL;
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
    | MIENTRAS error
    {
        sugerencia_error("mientras");
        num_errores++;
        $$ = NULL;
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
    | IMPRIMIR error
    {
        sugerencia_error("imprimir");
        num_errores++;
        $$ = NULL;
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

    switch(yychar) {
        case IMPRIMIR:
            printf("\033[1;33mSugerencia: falta ; al final de la sentencia anterior\033[0m\n");
            break;
        case ENTERO: case DECIMAL: case BOLEANO: case CARACTER: case DOBLE:
            printf("\033[1;33mSugerencia: falta ; al final de la declaracion anterior\033[0m\n");
            printf("\033[1;33m            Formato correcto: tipo nombre;\033[0m\n");
            break;
        case SI:
            printf("\033[1;33mSugerencia: falta ; antes del si, o verifica: si (condicion){ ... }\033[0m\n");
            break;
        case MIENTRAS:
            printf("\033[1;33mSugerencia: falta ; antes del mientras, o verifica: mientras (condicion){ ... }\033[0m\n");
            break;
        case HACER:
            printf("\033[1;33mSugerencia: verifica: hacer{ ... }mientras (condicion);\033[0m\n");
            break;
        case LLAVE_C:
            printf("\033[1;33mSugerencia: falta ; al final de alguna sentencia dentro del bloque\033[0m\n");
            break;
        case LLAVE_A:
            printf("\033[1;33mSugerencia: verifica que la condicion este entre parentesis: si (condicion){\033[0m\n");
            break;
        case LPAREN:
            printf("\033[1;33mSugerencia: Programa necesita un nombre. Formato: Programa nombre()\033[0m\n");
            break;
        case ASIGN:
            printf("\033[1;33mSugerencia: solo una variable puede estar a la izquierda del =\033[0m\n");
            printf("\033[1;33m            Formato correcto: variable = expresion;\033[0m\n");
            printf("\033[1;33m            Ejemplo: c = a+b;  (NO a+b = c)\033[0m\n");
            break;
        case RPAREN:
            printf("\033[1;33mSugerencia: verifica que los parentesis esten balanceados\033[0m\n");
            break;
        case PUNTOCOMA:
            printf("\033[1;33mSugerencia: falta ; al final de la sentencia\033[0m\n");
            break;
        case RETORNAR:
            printf("\033[1;33mSugerencia: verifica: retornar(valor);\033[0m\n");
            break;
        case CASOS:
            printf("\033[1;33mSugerencia: verifica: casos variable { caso 1: ...; parar; }\033[0m\n");
            break;
        case -1:
            printf("\033[1;33mSugerencia: el programa esta incompleto, verifica que cierre con }\033[0m\n");
            break;
        default:
            printf("\033[1;33mSugerencia: revisa la sintaxis en la linea %d\033[0m\n", num_linea);
            printf("\033[1;33m            Verifica: punto y coma, parentesis y llaves balanceados\033[0m\n");
            break;
    }
}

void sugerencia_error(const char* contexto) {
    if (strcmp(contexto, "declaracion") == 0)
        printf("\033[1;33mSugerencia: falta ; al final de la declaracion\033[0m\n");
    else if (strcmp(contexto, "asignacion") == 0)
        printf("\033[1;33mSugerencia: falta ; al final de la asignacion\033[0m\n");
    else if (strcmp(contexto, "imprimir") == 0)
        printf("\033[1;33mSugerencia: verifica Imprimir(\"texto\". variable);\033[0m\n");
    else if (strcmp(contexto, "si") == 0)
        printf("\033[1;33mSugerencia: verifica si (condicion){ ... }delocontrario{ ... }\033[0m\n");
    else if (strcmp(contexto, "mientras") == 0)
        printf("\033[1;33mSugerencia: verifica mientras (condicion){ ... }\033[0m\n");
    else if (strcmp(contexto, "programa") == 0)
        printf("\033[1;33mSugerencia: verifica Programa nombre(){ ... }\033[0m\n");
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

        /* Leer todo el input en un buffer antes de parsear */
        char buffer[65536];
        int total = 0;
        int c;
        while ((c = getchar()) != EOF && total < 65535) {
            buffer[total++] = (char)c;
        }
        buffer[total] = '\0';

        /* Crear archivo temporal con el contenido */
        FILE* tmp = tmpfile();
        if (!tmp) {
            printf("Error: no se pudo crear archivo temporal\n");
            return 1;
        }
        fwrite(buffer, 1, total, tmp);
        rewind(tmp);
        yyin = tmp;
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

    fclose(yyin);
    return 0;
}
