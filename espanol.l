
%{
#include "ast.h"
#include "espanol.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num_linea = 1;
%}

%%

"boleano"       { return BOLEANO; }
"decimal"       { return DECIMAL; }
"verdadero"     { return VERDADERO; }
"falso"         { return FALSO; }
"caracter"      { return CARACTER; }
"entero"        { return ENTERO; }
"doble"         { return DOBLE; }
"constante"     { return CONSTANTE; }
"casos"         { return CASOS; }
"defecto"       { return DEFECTO; }
"caso"          { return CASO; }
"Caso"          { return CASO; }
"parar"         { return PARAR; }
"para"          { return PARA; }
"hacer"         { return HACER; }
"mientras"      { return MIENTRAS; }
"retornar"      { return RETORNAR; }
"si"            { return SI; }
"delocontrario" { return DELOCONTRARIO; }
"funcion"       { return FUNCION; }
"procedimiento" { return PROCEDIMIENTO; }
"Programa"      { return PROGRAMA; }
"Ingresar"      { return INGRESAR; }
"Imprimir"      { return IMPRIMIR; }
"y"             { return AND; }
"o"             { return OR; }
"no"            { return NOT; }
"&&"            { return AND; }
"||"            { return OR; }

"+"   { return SUMA; }
"-"   { return RESTA; }
"*"   { return MULT; }
"/"   { return DIV; }
"."   { return PUNTO; }
"="   { return ASIGN; }
"=="  { return IGUAL; }
"!="  { return DIFERENTE; }
">="  { return MAYORIGUAL; }
"<="  { return MENORIGUAL; }
">"   { return MAYOR; }
"<"   { return MENOR; }

"("   { return LPAREN; }
")"   { return RPAREN; }
"{"   { return LLAVE_A; }
"}"   { return LLAVE_C; }
"["   { return CORCHETE_A; }
"]"   { return CORCHETE_C; }
","   { return COMA; }
";"   { return PUNTOCOMA; }
":"   { return DOSPUNTOS; }

[0-9]+\.[0-9]+  { yylval.decimal = atof(yytext); return NUM_DECIMAL; }
"-"[0-9]+       { yylval.entero = atoi(yytext); return NUM_ENTERO; }
[0-9]+          { yylval.entero = atoi(yytext); return NUM_ENTERO; }
\"[^\"]*\"      { yylval.cadena = strdup(yytext); return CADENA; }
\'[^\']*\'      { yylval.cadena = strdup(yytext); return CARACTER_LIT; }

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.cadena = strdup(yytext); return ID; }

\n        { num_linea++; }
[ \t\r]   { }

.  { printf("\033[1;31mError lexico en linea %d: caracter no reconocido '%s'\033[0m\n", num_linea, yytext); }

%%

int yywrap() { return 1; }
