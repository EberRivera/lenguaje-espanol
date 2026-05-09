/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ESPANOL_TAB_H_INCLUDED
# define YY_YY_ESPANOL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BOLEANO = 258,                 /* BOLEANO  */
    DECIMAL = 259,                 /* DECIMAL  */
    VERDADERO = 260,               /* VERDADERO  */
    FALSO = 261,                   /* FALSO  */
    CARACTER = 262,                /* CARACTER  */
    ENTERO = 263,                  /* ENTERO  */
    DOBLE = 264,                   /* DOBLE  */
    CONSTANTE = 265,               /* CONSTANTE  */
    CASOS = 266,                   /* CASOS  */
    DEFECTO = 267,                 /* DEFECTO  */
    CASO = 268,                    /* CASO  */
    PARAR = 269,                   /* PARAR  */
    PARA = 270,                    /* PARA  */
    HACER = 271,                   /* HACER  */
    MIENTRAS = 272,                /* MIENTRAS  */
    RETORNAR = 273,                /* RETORNAR  */
    SI = 274,                      /* SI  */
    DELOCONTRARIO = 275,           /* DELOCONTRARIO  */
    FUNCION = 276,                 /* FUNCION  */
    PROCEDIMIENTO = 277,           /* PROCEDIMIENTO  */
    PROGRAMA = 278,                /* PROGRAMA  */
    INGRESAR = 279,                /* INGRESAR  */
    IMPRIMIR = 280,                /* IMPRIMIR  */
    AND = 281,                     /* AND  */
    OR = 282,                      /* OR  */
    NOT = 283,                     /* NOT  */
    SUMA = 284,                    /* SUMA  */
    RESTA = 285,                   /* RESTA  */
    MULT = 286,                    /* MULT  */
    DIV = 287,                     /* DIV  */
    PUNTO = 288,                   /* PUNTO  */
    ASIGN = 289,                   /* ASIGN  */
    IGUAL = 290,                   /* IGUAL  */
    DIFERENTE = 291,               /* DIFERENTE  */
    MAYOR = 292,                   /* MAYOR  */
    MENOR = 293,                   /* MENOR  */
    MAYORIGUAL = 294,              /* MAYORIGUAL  */
    MENORIGUAL = 295,              /* MENORIGUAL  */
    LPAREN = 296,                  /* LPAREN  */
    RPAREN = 297,                  /* RPAREN  */
    LLAVE_A = 298,                 /* LLAVE_A  */
    LLAVE_C = 299,                 /* LLAVE_C  */
    CORCHETE_A = 300,              /* CORCHETE_A  */
    CORCHETE_C = 301,              /* CORCHETE_C  */
    COMA = 302,                    /* COMA  */
    PUNTOCOMA = 303,               /* PUNTOCOMA  */
    DOSPUNTOS = 304,               /* DOSPUNTOS  */
    NUM_ENTERO = 305,              /* NUM_ENTERO  */
    NUM_DECIMAL = 306,             /* NUM_DECIMAL  */
    CADENA = 307,                  /* CADENA  */
    CARACTER_LIT = 308,            /* CARACTER_LIT  */
    ID = 309                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "espanol.y"

    int entero;
    double decimal;
    char* cadena;
    Nodo* nodo;

#line 125 "espanol.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ESPANOL_TAB_H_INCLUDED  */
