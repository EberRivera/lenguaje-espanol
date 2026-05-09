/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BOLEANO = 258,
     DECIMAL = 259,
     VERDADERO = 260,
     FALSO = 261,
     CARACTER = 262,
     ENTERO = 263,
     DOBLE = 264,
     CONSTANTE = 265,
     CASOS = 266,
     DEFECTO = 267,
     CASO = 268,
     PARAR = 269,
     PARA = 270,
     HACER = 271,
     MIENTRAS = 272,
     RETORNAR = 273,
     SI = 274,
     DELOCONTRARIO = 275,
     FUNCION = 276,
     PROCEDIMIENTO = 277,
     PROGRAMA = 278,
     INGRESAR = 279,
     IMPRIMIR = 280,
     AND = 281,
     OR = 282,
     NOT = 283,
     SUMA = 284,
     RESTA = 285,
     MULT = 286,
     DIV = 287,
     PUNTO = 288,
     ASIGN = 289,
     IGUAL = 290,
     DIFERENTE = 291,
     MAYOR = 292,
     MENOR = 293,
     MAYORIGUAL = 294,
     MENORIGUAL = 295,
     LPAREN = 296,
     RPAREN = 297,
     LLAVE_A = 298,
     LLAVE_C = 299,
     CORCHETE_A = 300,
     CORCHETE_C = 301,
     COMA = 302,
     PUNTOCOMA = 303,
     DOSPUNTOS = 304,
     NUM_ENTERO = 305,
     NUM_DECIMAL = 306,
     CADENA = 307,
     CARACTER_LIT = 308,
     ID = 309
   };
#endif
/* Tokens.  */
#define BOLEANO 258
#define DECIMAL 259
#define VERDADERO 260
#define FALSO 261
#define CARACTER 262
#define ENTERO 263
#define DOBLE 264
#define CONSTANTE 265
#define CASOS 266
#define DEFECTO 267
#define CASO 268
#define PARAR 269
#define PARA 270
#define HACER 271
#define MIENTRAS 272
#define RETORNAR 273
#define SI 274
#define DELOCONTRARIO 275
#define FUNCION 276
#define PROCEDIMIENTO 277
#define PROGRAMA 278
#define INGRESAR 279
#define IMPRIMIR 280
#define AND 281
#define OR 282
#define NOT 283
#define SUMA 284
#define RESTA 285
#define MULT 286
#define DIV 287
#define PUNTO 288
#define ASIGN 289
#define IGUAL 290
#define DIFERENTE 291
#define MAYOR 292
#define MENOR 293
#define MAYORIGUAL 294
#define MENORIGUAL 295
#define LPAREN 296
#define RPAREN 297
#define LLAVE_A 298
#define LLAVE_C 299
#define CORCHETE_A 300
#define CORCHETE_C 301
#define COMA 302
#define PUNTOCOMA 303
#define DOSPUNTOS 304
#define NUM_ENTERO 305
#define NUM_DECIMAL 306
#define CADENA 307
#define CARACTER_LIT 308
#define ID 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "espanol.y"
{
    int entero;
    double decimal;
    char* cadena;
    Nodo* nodo;
}
/* Line 1529 of yacc.c.  */
#line 164 "espanol.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

