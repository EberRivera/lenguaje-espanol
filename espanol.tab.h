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
     SUMA = 281,
     RESTA = 282,
     MULT = 283,
     DIV = 284,
     PUNTO = 285,
     ASIGN = 286,
     IGUAL = 287,
     DIFERENTE = 288,
     MAYOR = 289,
     MENOR = 290,
     MAYORIGUAL = 291,
     MENORIGUAL = 292,
     LPAREN = 293,
     RPAREN = 294,
     LLAVE_A = 295,
     LLAVE_C = 296,
     CORCHETE_A = 297,
     CORCHETE_C = 298,
     COMA = 299,
     PUNTOCOMA = 300,
     DOSPUNTOS = 301,
     NUM_ENTERO = 302,
     NUM_DECIMAL = 303,
     CADENA = 304,
     CARACTER_LIT = 305,
     ID = 306
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
#define SUMA 281
#define RESTA 282
#define MULT 283
#define DIV 284
#define PUNTO 285
#define ASIGN 286
#define IGUAL 287
#define DIFERENTE 288
#define MAYOR 289
#define MENOR 290
#define MAYORIGUAL 291
#define MENORIGUAL 292
#define LPAREN 293
#define RPAREN 294
#define LLAVE_A 295
#define LLAVE_C 296
#define CORCHETE_A 297
#define CORCHETE_C 298
#define COMA 299
#define PUNTOCOMA 300
#define DOSPUNTOS 301
#define NUM_ENTERO 302
#define NUM_DECIMAL 303
#define CADENA 304
#define CARACTER_LIT 305
#define ID 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

