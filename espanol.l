%{
#include "espanol.tab.h"
#include <stdio.h>

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

"+"   { return SUMA; }
"-"   { return RESTA; }
"*"   { return MULT; }
"/"   { return DIV; }
"."   { return PUNTO; }
"="   { return ASIGN; }
"=="  { return IGUAL; }
"!="  { return DIFERENTE; }
">"   { return MAYOR; }
"<"   { return MENOR; }
">="  { return MAYORIGUAL; }
"<="  { return MENORIGUAL; }

"("   { return LPAREN; }
")"   { return RPAREN; }
"{"   { return LLAVE_A; }
"}"   { return LLAVE_C; }
"["   { return CORCHETE_A; }
"]"   { return CORCHETE_C; }
","   { return COMA; }
";"   { return PUNTOCOMA; }
":"   { return DOSPUNTOS; }

[0-9]+\.[0-9]+         { return NUM_DECIMAL; }
[0-9]+                 { return NUM_ENTERO; }
\"[^\"]*\"             { return CADENA; }
\'[^\']*\'             { return CARACTER_LIT; }

[a-zA-Z_][a-zA-Z0-9_]* { return ID; }

\n        { num_linea++; }
[ \t\r]   { /* ignorar espacios */ }

.  { printf("Error lexico en linea %d: caracter no reconocido '%s'\n", num_linea, yytext); }

%%

int yywrap() { return 1; }