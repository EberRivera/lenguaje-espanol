
%{
#include <stdio.h>
#include <stdlib.h>

extern int num_linea;
extern FILE *yyin;

void yyerror(const char *s);
int yylex();
%}

%token BOLEANO DECIMAL VERDADERO FALSO CARACTER ENTERO DOBLE CONSTANTE
%token CASOS DEFECTO CASO PARAR PARA HACER MIENTRAS RETORNAR
%token SI DELOCONTRARIO FUNCION PROCEDIMIENTO PROGRAMA
%token INGRESAR IMPRIMIR
%token SUMA RESTA MULT DIV PUNTO ASIGN IGUAL DIFERENTE
%token MAYOR MENOR MAYORIGUAL MENORIGUAL
%token LPAREN RPAREN LLAVE_A LLAVE_C CORCHETE_A CORCHETE_C
%token COMA PUNTOCOMA DOSPUNTOS
%token NUM_ENTERO NUM_DECIMAL CADENA CARACTER_LIT ID

%%

inicio:
    lista_funciones programa
    | programa
;

lista_funciones:
    lista_funciones definicion_funcion
    | definicion_funcion
;

definicion_funcion:
    tipo ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C
    | tipo ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C
    | ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C
    | ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C
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
;

sentencias:
    sentencias sentencia
    | sentencia
;

sentencia:
    declaracion
    | asignacion
    | sentencia_si
    | sentencia_mientras
    | sentencia_hacer
    | sentencia_casos
    | sentencia_para
    | sentencia_imprimir
    | sentencia_retornar
    | llamada_funcion PUNTOCOMA
;

declaracion:
    tipo ID PUNTOCOMA
    | tipo ID CORCHETE_A dimensiones CORCHETE_C PUNTOCOMA
    | CONSTANTE tipo ID ASIGN expresion PUNTOCOMA
;

tipo:
    ENTERO
    | DECIMAL
    | BOLEANO
    | CARACTER
    | DOBLE
;

dimensiones:
    NUM_ENTERO
    | dimensiones COMA NUM_ENTERO
;

asignacion:
    ID ASIGN expresion PUNTOCOMA
    | ID ASIGN INGRESAR LPAREN CADENA RPAREN PUNTOCOMA
    | ID CORCHETE_A expresion CORCHETE_C ASIGN expresion PUNTOCOMA
    | ID CORCHETE_A expresion CORCHETE_C ASIGN INGRESAR LPAREN CADENA RPAREN PUNTOCOMA
;

expresion:
    expresion SUMA termino
    | expresion RESTA termino
    | expresion PUNTO expresion
    | termino
;

termino:
    termino MULT factor
    | termino DIV factor
    | factor
;

factor:
    NUM_ENTERO
    | NUM_DECIMAL
    | CADENA
    | VERDADERO
    | FALSO
    | ID
    | ID CORCHETE_A expresion CORCHETE_C
    | LPAREN expresion RPAREN
    | llamada_funcion
;

condicion:
    expresion MAYOR expresion
    | expresion MENOR expresion
    | expresion MAYORIGUAL expresion
    | expresion MENORIGUAL expresion
    | expresion IGUAL expresion
    | expresion DIFERENTE expresion
;

sentencia_si:
    SI LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C
    | SI LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C DELOCONTRARIO LLAVE_A sentencias LLAVE_C
;

sentencia_mientras:
    MIENTRAS LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C
;

sentencia_hacer:
    HACER LLAVE_A sentencias LLAVE_C MIENTRAS LPAREN condicion RPAREN PUNTOCOMA
;

sentencia_para:
    PARA LPAREN asignacion condicion PUNTOCOMA asignacion_simple RPAREN LLAVE_A sentencias LLAVE_C
;

asignacion_simple:
    ID ASIGN expresion
;

sentencia_casos:
    CASOS ID LLAVE_A lista_casos LLAVE_C
    | CASOS ID LLAVE_A lista_casos defecto LLAVE_C
;

lista_casos:
    lista_casos un_caso
    | un_caso
;

un_caso:
    CASO NUM_ENTERO DOSPUNTOS sentencias PARAR PUNTOCOMA
;

defecto:
    DEFECTO DOSPUNTOS sentencias
;

sentencia_imprimir:
    IMPRIMIR LPAREN lista_params RPAREN PUNTOCOMA
;

lista_params:
    lista_params PUNTO expresion
    | expresion
;

sentencia_retornar:
    RETORNAR LPAREN expresion RPAREN PUNTOCOMA
;

llamada_funcion:
    ID LPAREN argumentos RPAREN
    | ID LPAREN RPAREN
;

argumentos:
    argumentos COMA expresion
    | expresion
;

%%

void yyerror(const char *s) {
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

    if (yyparse() == 0) {
        printf("\n\033[1;32mCompilacion exitosa. Sin errores.\033[0m\n");
    }

    if (argc >= 2) fclose(yyin);
    return 0;
}
