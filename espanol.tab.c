/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 2 "espanol.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "espanol.y"
{
    int entero;
    double decimal;
    char* cadena;
    Nodo* nodo;
}
/* Line 193 of yacc.c.  */
#line 233 "espanol.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 246 "espanol.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    22,    30,    38,
      45,    49,    51,    54,    62,    69,    75,    78,    80,    82,
      84,    86,    88,    90,    92,    94,    97,   101,   108,   117,
     124,   126,   128,   130,   132,   134,   139,   144,   152,   160,
     171,   175,   179,   181,   185,   189,   191,   193,   195,   197,
     199,   201,   206,   210,   212,   214,   218,   222,   226,   230,
     234,   238,   240,   244,   248,   251,   255,   263,   275,   278,
     286,   289,   299,   305,   308,   312,   314,   320,   325,   329,
     333
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    61,    -1,    61,    -1,    57,    58,
      -1,    58,    -1,    65,    54,    41,    59,    42,    43,    62,
      44,    -1,    65,    54,    41,    42,    43,    62,    44,    -1,
      54,    41,    59,    42,    43,    62,    44,    -1,    54,    41,
      42,    43,    62,    44,    -1,    59,    47,    60,    -1,    60,
      -1,    65,    54,    -1,    23,    54,    41,    42,    43,    62,
      44,    -1,    23,    41,    42,    43,    62,    44,    -1,    23,
       1,    43,    62,    44,    -1,    62,    63,    -1,    63,    -1,
      64,    -1,    66,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    77,    -1,    78,    48,    -1,    65,    54,    48,
      -1,    65,    54,    45,    50,    46,    48,    -1,    65,    54,
      45,    50,    47,    50,    46,    48,    -1,    10,    65,    54,
      34,    67,    48,    -1,     8,    -1,     4,    -1,     3,    -1,
       7,    -1,     9,    -1,    54,    34,    67,    48,    -1,    54,
      34,    67,     1,    -1,    54,    34,    24,    41,    52,    42,
      48,    -1,    54,    45,    67,    46,    34,    67,    48,    -1,
      54,    45,    67,    46,    34,    24,    41,    52,    42,    48,
      -1,    67,    29,    68,    -1,    67,    30,    68,    -1,    68,
      -1,    68,    31,    69,    -1,    68,    32,    69,    -1,    69,
      -1,    50,    -1,    51,    -1,     5,    -1,     6,    -1,    54,
      -1,    54,    45,    67,    46,    -1,    41,    67,    42,    -1,
      78,    -1,    52,    -1,    67,    37,    67,    -1,    67,    38,
      67,    -1,    67,    39,    67,    -1,    67,    40,    67,    -1,
      67,    35,    67,    -1,    67,    36,    67,    -1,    70,    -1,
      71,    26,    70,    -1,    71,    27,    70,    -1,    28,    70,
      -1,    41,    71,    42,    -1,    19,    41,    71,    42,    43,
      62,    44,    -1,    19,    41,    71,    42,    43,    62,    44,
      20,    43,    62,    44,    -1,    19,     1,    -1,    17,    41,
      71,    42,    43,    62,    44,    -1,    17,     1,    -1,    16,
      43,    62,    44,    17,    41,    71,    42,    48,    -1,    25,
      41,    76,    42,    48,    -1,    25,     1,    -1,    76,    33,
      69,    -1,    69,    -1,    18,    41,    67,    42,    48,    -1,
      54,    41,    79,    42,    -1,    54,    41,    42,    -1,    79,
      47,    67,    -1,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    58,    65,    66,    70,    76,    81,    87,
      95,    96,   100,   107,   113,   119,   127,   131,   138,   139,
     140,   141,   142,   143,   144,   145,   149,   155,   162,   169,
     179,   180,   181,   182,   183,   189,   196,   202,   211,   219,
     232,   236,   240,   244,   248,   252,   256,   257,   258,   259,
     260,   261,   268,   269,   270,   274,   275,   276,   277,   278,
     279,   283,   284,   285,   286,   287,   291,   299,   307,   316,
     323,   332,   342,   348,   357,   364,   368,   377,   384,   393,
     397
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOLEANO", "DECIMAL", "VERDADERO",
  "FALSO", "CARACTER", "ENTERO", "DOBLE", "CONSTANTE", "CASOS", "DEFECTO",
  "CASO", "PARAR", "PARA", "HACER", "MIENTRAS", "RETORNAR", "SI",
  "DELOCONTRARIO", "FUNCION", "PROCEDIMIENTO", "PROGRAMA", "INGRESAR",
  "IMPRIMIR", "AND", "OR", "NOT", "SUMA", "RESTA", "MULT", "DIV", "PUNTO",
  "ASIGN", "IGUAL", "DIFERENTE", "MAYOR", "MENOR", "MAYORIGUAL",
  "MENORIGUAL", "LPAREN", "RPAREN", "LLAVE_A", "LLAVE_C", "CORCHETE_A",
  "CORCHETE_C", "COMA", "PUNTOCOMA", "DOSPUNTOS", "NUM_ENTERO",
  "NUM_DECIMAL", "CADENA", "CARACTER_LIT", "ID", "$accept", "inicio",
  "lista_funciones", "definicion_funcion", "lista_parametros", "parametro",
  "programa", "sentencias", "sentencia", "declaracion", "tipo",
  "asignacion", "expresion", "termino", "factor", "cond_simple",
  "condicion", "sentencia_si", "sentencia_mientras", "sentencia_hacer",
  "sentencia_imprimir", "params_imprimir", "sentencia_retornar",
  "llamada_funcion", "argumentos", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      59,    59,    60,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    74,    75,    75,    76,    76,    77,    78,    78,    79,
      79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     8,     7,     7,     6,
       3,     1,     2,     7,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     6,     8,     6,
       1,     1,     1,     1,     1,     4,     4,     7,     7,    10,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     2,     3,     7,    11,     2,     7,
       2,     9,     5,     2,     3,     1,     5,     4,     3,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    32,    31,    33,    30,    34,     0,     0,     0,     0,
       5,     3,     0,     0,     0,     0,     0,     1,     4,     2,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,     0,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    70,     0,     0,
      68,     0,    73,     0,     0,     0,     0,    15,    16,     0,
      25,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      48,    49,     0,     0,    46,    47,    54,    50,     0,    42,
      45,    61,     0,    53,     0,     0,     0,    75,     0,     0,
       0,    78,    80,     0,     0,     0,    26,    14,     0,     9,
       0,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    35,
      77,     0,     0,     0,    13,     8,     7,     0,     0,     0,
      52,    65,     0,    40,    41,    59,    60,    55,    56,    57,
      58,    43,    44,    62,    63,     0,    76,     0,    74,    72,
       0,    79,     0,     0,     0,     6,    29,     0,    51,     0,
       0,     0,     0,     0,    27,     0,     0,    69,    66,    37,
       0,    38,     0,     0,     0,     0,    28,    71,     0,     0,
       0,    39,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,     9,    10,    25,    26,    11,    36,    37,    38,
      39,    40,    88,    89,    90,    91,    92,    41,    42,    43,
      44,    98,    45,    93,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int16 yypact[] =
{
     391,   -70,   -70,   -70,   -70,   -70,     2,   -16,    27,   391,
     -70,   -70,    15,    39,    51,    77,   401,   -70,   -70,   -70,
      83,    91,    86,    78,    97,    24,   -70,    89,   443,   490,
     106,     1,   114,     5,    21,     4,   157,   -70,   -70,    99,
     -70,   -70,   -70,   -70,   -70,   -70,   103,    91,   135,    91,
     137,   490,   -70,   148,    30,   138,    91,   -70,   379,    13,
     -70,   379,   -70,    13,   387,   407,    13,   -70,   -70,   -36,
     -70,   180,    91,   200,    91,   -70,    91,   152,   166,   223,
     -70,   -70,    13,   379,   -70,   -70,   -70,     3,   452,   131,
     -70,   -70,    79,   -70,    13,    -9,   110,   -70,    -2,   161,
      56,   -70,   140,    72,    67,   162,   -70,   -70,   243,   -70,
     266,   286,    91,    13,   196,   -70,   438,   112,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,   171,   164,   167,   177,    13,   173,   170,   -70,   -70,
     -70,    13,   189,   125,   -70,   -70,   -70,   309,   -19,   187,
     -70,   -70,    82,   131,   131,   140,   140,   140,   140,   140,
     140,   -70,   -70,   -70,   -70,    91,   -70,    91,   -70,   -70,
     193,   140,   412,   181,   186,   -70,   -70,   379,   -70,   329,
     352,   190,   202,    54,   -70,   191,   115,   -70,   225,   -70,
     197,   -70,   207,   208,   214,   216,   -70,   -70,    91,   215,
     372,   -70,   -70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   255,   237,   220,   257,   -42,   -32,   -70,
       8,   -70,     9,    66,   -47,   -69,   -60,   -70,   -70,   -70,
     -70,   -70,   -70,   -21,   -70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,    96,    57,    13,    68,    71,    60,    73,    12,   105,
     119,   120,   106,   115,    79,    46,    97,    12,    80,    81,
     119,   120,    62,   117,    27,    16,    46,    17,    46,   176,
     108,   135,   110,   133,   111,    46,    27,    55,    64,    68,
     136,    68,    58,    14,    65,    65,    61,    68,   118,    66,
      46,    46,    46,    46,    94,    46,    15,   138,    46,    27,
     163,   164,    63,    84,    85,    86,    50,    87,    95,    20,
     147,    51,    77,   100,   102,   104,    68,    51,    68,    68,
     161,   162,    21,   119,   120,   119,   120,    46,   168,    46,
      46,    46,   116,    22,     1,     2,   119,   120,     3,     4,
       5,    29,   191,   132,   139,   129,   130,    30,    31,    32,
      33,   119,   120,   142,   140,    68,    34,   186,    23,   141,
      48,   131,   148,   179,    28,   180,    46,   152,   178,    47,
     155,   156,   157,   158,   159,   160,   129,   130,   129,   130,
      49,   129,   130,    52,    46,    35,    46,    68,    68,    56,
     171,    70,   134,    69,   151,    59,   200,   193,    46,    46,
       1,     2,   127,   128,     3,     4,     5,    29,    68,   119,
     120,   173,   174,    30,    31,    32,    33,    46,    72,    46,
      74,   183,    34,     1,     2,   153,   154,     3,     4,     5,
      29,    76,    78,   119,   120,   112,    30,    31,    32,    33,
     113,    67,   137,     1,     2,    34,   150,     3,     4,     5,
      29,    35,   143,   149,   165,   166,    30,    31,    32,    33,
     167,   169,   170,   172,   107,    34,     1,     2,   177,   184,
       3,     4,     5,    29,    35,   181,   185,   192,   189,    30,
      31,    32,    33,   190,   109,   194,     1,     2,    34,   195,
       3,     4,     5,    29,    35,   196,   197,   198,   199,    30,
      31,    32,    33,   201,    18,    54,    19,   114,    34,     1,
       2,    75,     0,     3,     4,     5,    29,    35,     0,     0,
       0,     0,    30,    31,    32,    33,     0,   144,     0,     1,
       2,    34,     0,     3,     4,     5,    29,    35,     0,     0,
       0,     0,    30,    31,    32,    33,     0,     0,     0,     0,
     145,    34,     1,     2,     0,     0,     3,     4,     5,    29,
      35,     0,     0,     0,     0,    30,    31,    32,    33,     0,
     146,     0,     1,     2,    34,     0,     3,     4,     5,    29,
      35,     0,     0,     0,     0,    30,    31,    32,    33,     0,
       0,     0,     0,   175,    34,     1,     2,     0,     0,     3,
       4,     5,    29,    35,     0,     0,     0,     0,    30,    31,
      32,    33,     0,   187,     0,     1,     2,    34,     0,     3,
       4,     5,    29,    35,    80,    81,     0,     0,    30,    31,
      32,    33,    80,    81,     1,     2,   188,    34,     3,     4,
       5,     0,     0,     0,     1,     2,    35,    82,     3,     4,
       5,    99,    80,    81,     6,     0,   202,    80,    81,     0,
      83,     0,     0,     0,     0,     0,    35,     0,    94,    84,
      85,    86,     0,    87,     0,     0,   182,    84,    85,    86,
       0,    87,     0,    24,     0,     7,     1,     2,    94,   101,
       3,     4,     5,    94,     0,     0,     0,    84,    85,    86,
       0,    87,    84,    85,    86,     0,    87,   119,   120,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,     0,
     150,   119,   120,     0,     0,    53,     0,   121,   122,   123,
     124,   125,   126,     1,     2,     0,     0,     3,     4,     5
};

static const yytype_int16 yycheck[] =
{
      21,    61,     1,     1,    36,    47,     1,    49,     0,    45,
      29,    30,    48,    82,    56,    36,    63,     9,     5,     6,
      29,    30,     1,    83,    16,    41,    47,     0,    49,    48,
      72,    33,    74,    42,    76,    56,    28,    29,    34,    71,
      42,    73,    41,    41,    41,    41,    41,    79,    45,    45,
      71,    72,    73,    74,    41,    76,    54,     1,    79,    51,
     129,   130,    41,    50,    51,    52,    42,    54,    59,    54,
     112,    47,    42,    64,    65,    66,   108,    47,   110,   111,
     127,   128,    43,    29,    30,    29,    30,   108,   135,   110,
     111,   112,    83,    42,     3,     4,    29,    30,     7,     8,
       9,    10,    48,    94,    48,    26,    27,    16,    17,    18,
      19,    29,    30,    46,    42,   147,    25,   177,    41,    47,
      42,    42,   113,   165,    41,   167,   147,   118,    46,    43,
     121,   122,   123,   124,   125,   126,    26,    27,    26,    27,
      43,    26,    27,    54,   165,    54,   167,   179,   180,    43,
     141,    48,    42,    54,    42,    41,   198,    42,   179,   180,
       3,     4,    31,    32,     7,     8,     9,    10,   200,    29,
      30,    46,    47,    16,    17,    18,    19,   198,    43,   200,
      43,   172,    25,     3,     4,   119,   120,     7,     8,     9,
      10,    43,    54,    29,    30,    43,    16,    17,    18,    19,
      34,    44,    41,     3,     4,    25,    42,     7,     8,     9,
      10,    54,    50,    17,    43,    48,    16,    17,    18,    19,
      43,    48,    52,    34,    44,    25,     3,     4,    41,    48,
       7,     8,     9,    10,    54,    42,    50,    46,    48,    16,
      17,    18,    19,    41,    44,    20,     3,     4,    25,    52,
       7,     8,     9,    10,    54,    48,    48,    43,    42,    16,
      17,    18,    19,    48,     9,    28,     9,    44,    25,     3,
       4,    51,    -1,     7,     8,     9,    10,    54,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    44,    -1,     3,
       4,    25,    -1,     7,     8,     9,    10,    54,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      44,    25,     3,     4,    -1,    -1,     7,     8,     9,    10,
      54,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      44,    -1,     3,     4,    25,    -1,     7,     8,     9,    10,
      54,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    44,    25,     3,     4,    -1,    -1,     7,
       8,     9,    10,    54,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    44,    -1,     3,     4,    25,    -1,     7,
       8,     9,    10,    54,     5,     6,    -1,    -1,    16,    17,
      18,    19,     5,     6,     3,     4,    44,    25,     7,     8,
       9,    -1,    -1,    -1,     3,     4,    54,    28,     7,     8,
       9,    24,     5,     6,    23,    -1,    44,     5,     6,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    54,    -1,    41,    50,
      51,    52,    -1,    54,    -1,    -1,    24,    50,    51,    52,
      -1,    54,    -1,    42,    -1,    54,     3,     4,    41,    42,
       7,     8,     9,    41,    -1,    -1,    -1,    50,    51,    52,
      -1,    54,    50,    51,    52,    -1,    54,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    29,    30,    -1,    -1,    42,    -1,    35,    36,    37,
      38,    39,    40,     3,     4,    -1,    -1,     7,     8,     9
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,     8,     9,    23,    54,    56,    57,
      58,    61,    65,     1,    41,    54,    41,     0,    58,    61,
      54,    43,    42,    41,    42,    59,    60,    65,    41,    10,
      16,    17,    18,    19,    25,    54,    62,    63,    64,    65,
      66,    72,    73,    74,    75,    77,    78,    43,    42,    43,
      42,    47,    54,    42,    59,    65,    43,     1,    41,    41,
       1,    41,     1,    41,    34,    41,    45,    44,    63,    54,
      48,    62,    43,    62,    43,    60,    43,    42,    54,    62,
       5,     6,    28,    41,    50,    51,    52,    54,    67,    68,
      69,    70,    71,    78,    41,    67,    71,    69,    76,    24,
      67,    42,    67,    79,    67,    45,    48,    44,    62,    44,
      62,    62,    43,    34,    44,    70,    67,    71,    45,    29,
      30,    35,    36,    37,    38,    39,    40,    31,    32,    26,
      27,    42,    67,    42,    42,    33,    42,    41,     1,    48,
      42,    47,    46,    50,    44,    44,    44,    62,    67,    17,
      42,    42,    67,    68,    68,    67,    67,    67,    67,    67,
      67,    69,    69,    70,    70,    43,    48,    43,    69,    48,
      52,    67,    34,    46,    47,    44,    48,    41,    46,    62,
      62,    42,    24,    67,    48,    50,    71,    44,    44,    48,
      41,    48,    46,    42,    20,    52,    48,    48,    43,    42,
      62,    48,    44
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 55 "espanol.y"
    {
        ejecutar((yyvsp[(2) - (2)].nodo));
    ;}
    break;

  case 3:
#line 59 "espanol.y"
    {
        ejecutar((yyvsp[(1) - (1)].nodo));
    ;}
    break;

  case 4:
#line 65 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (2)].nodo); ;}
    break;

  case 5:
#line 66 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 6:
#line 71 "espanol.y"
    {
        registrar_funcion((yyvsp[(2) - (8)].cadena), param_nombres, num_params_actual, (yyvsp[(7) - (8)].nodo));
        num_params_actual = 0;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 7:
#line 77 "espanol.y"
    {
        registrar_funcion((yyvsp[(2) - (7)].cadena), param_nombres, 0, (yyvsp[(6) - (7)].nodo));
        (yyval.nodo) = NULL;
    ;}
    break;

  case 8:
#line 82 "espanol.y"
    {
        registrar_funcion((yyvsp[(1) - (7)].cadena), param_nombres, num_params_actual, (yyvsp[(6) - (7)].nodo));
        num_params_actual = 0;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 9:
#line 88 "espanol.y"
    {
        registrar_funcion((yyvsp[(1) - (6)].cadena), param_nombres, 0, (yyvsp[(5) - (6)].nodo));
        (yyval.nodo) = NULL;
    ;}
    break;

  case 12:
#line 101 "espanol.y"
    {
        strcpy(param_nombres[num_params_actual++], (yyvsp[(2) - (2)].cadena));
    ;}
    break;

  case 13:
#line 108 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_PROGRAMA);
        n->izq = (yyvsp[(6) - (7)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 14:
#line 114 "espanol.y"
    {
        printf("[1;33mSugerencia: 'Programa' necesita un nombre. Ejemplo: Programa miPrograma()[0m\n");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 15:
#line 120 "espanol.y"
    {
        printf("[1;33mSugerencia: verifica la declaracion de 'Programa nombre()'[0m\n");
        (yyval.nodo) = NULL;
    ;}
    break;

  case 16:
#line 128 "espanol.y"
    {
        (yyval.nodo) = agregar_sentencia((yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo));
    ;}
    break;

  case 17:
#line 132 "espanol.y"
    {
        (yyval.nodo) = (yyvsp[(1) - (1)].nodo);
    ;}
    break;

  case 18:
#line 138 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 19:
#line 139 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 20:
#line 140 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 21:
#line 141 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 22:
#line 142 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 23:
#line 143 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 24:
#line 144 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 25:
#line 145 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (2)].nodo); ;}
    break;

  case 26:
#line 150 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_DECLARACION);
        n->valor_cadena = strdup((yyvsp[(2) - (3)].cadena));
        (yyval.nodo) = n;
    ;}
    break;

  case 27:
#line 156 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_DECL);
        n->valor_cadena = strdup((yyvsp[(2) - (6)].cadena));
        n->izq = nodo_entero((yyvsp[(4) - (6)].entero));
        (yyval.nodo) = n;
    ;}
    break;

  case 28:
#line 163 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_DECL);
        n->valor_cadena = strdup((yyvsp[(2) - (8)].cadena));
        n->izq = nodo_entero((yyvsp[(4) - (8)].entero) * (yyvsp[(6) - (8)].entero));
        (yyval.nodo) = n;
    ;}
    break;

  case 29:
#line 170 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[(3) - (6)].cadena));
        n->der = (yyvsp[(5) - (6)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 30:
#line 179 "espanol.y"
    { tipo_actual = TIPO_ENTERO; ;}
    break;

  case 31:
#line 180 "espanol.y"
    { tipo_actual = TIPO_DECIMAL; ;}
    break;

  case 32:
#line 181 "espanol.y"
    { tipo_actual = TIPO_BOLEANO; ;}
    break;

  case 33:
#line 182 "espanol.y"
    { tipo_actual = TIPO_CARACTER; ;}
    break;

  case 34:
#line 183 "espanol.y"
    { tipo_actual = TIPO_DECIMAL; ;}
    break;

  case 35:
#line 190 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[(1) - (4)].cadena));
        n->der = (yyvsp[(3) - (4)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 36:
#line 197 "espanol.y"
    {
        printf("\033[1;33mSugerencia: falta ; despues de la asignacion de %s\033[0m\n", (yyvsp[(1) - (4)].cadena));
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 37:
#line 203 "espanol.y"
    {
        Nodo* ing = crear_nodo(NODO_INGRESAR);
        ing->izq = nodo_cadena((yyvsp[(5) - (7)].cadena));
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[(1) - (7)].cadena));
        n->der = ing;
        (yyval.nodo) = n;
    ;}
    break;

  case 38:
#line 212 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_ASIGN);
        n->valor_cadena = strdup((yyvsp[(1) - (7)].cadena));
        n->izq = (yyvsp[(3) - (7)].nodo);
        n->der = (yyvsp[(6) - (7)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 39:
#line 220 "espanol.y"
    {
        Nodo* ing = crear_nodo(NODO_INGRESAR);
        ing->izq = nodo_cadena((yyvsp[(8) - (10)].cadena));
        Nodo* n = crear_nodo(NODO_ARREGLO_ASIGN);
        n->valor_cadena = strdup((yyvsp[(1) - (10)].cadena));
        n->izq = (yyvsp[(3) - (10)].nodo);
        n->der = ing;
        (yyval.nodo) = n;
    ;}
    break;

  case 40:
#line 233 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_SUMA, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 41:
#line 237 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_RESTA, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 42:
#line 240 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 43:
#line 245 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_MULT, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 44:
#line 249 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_DIV, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 45:
#line 252 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 46:
#line 256 "espanol.y"
    { (yyval.nodo) = nodo_entero((yyvsp[(1) - (1)].entero)); ;}
    break;

  case 47:
#line 257 "espanol.y"
    { Nodo* n = crear_nodo(NODO_NUM_DECIMAL); n->valor_decimal = (yyvsp[(1) - (1)].decimal); (yyval.nodo) = n; ;}
    break;

  case 48:
#line 258 "espanol.y"
    { (yyval.nodo) = nodo_entero(1); ;}
    break;

  case 49:
#line 259 "espanol.y"
    { (yyval.nodo) = nodo_entero(0); ;}
    break;

  case 50:
#line 260 "espanol.y"
    { (yyval.nodo) = nodo_id((yyvsp[(1) - (1)].cadena)); ;}
    break;

  case 51:
#line 262 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_ACCESO);
        n->valor_cadena = strdup((yyvsp[(1) - (4)].cadena));
        n->izq = (yyvsp[(3) - (4)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 52:
#line 268 "espanol.y"
    { (yyval.nodo) = (yyvsp[(2) - (3)].nodo); ;}
    break;

  case 53:
#line 269 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 54:
#line 270 "espanol.y"
    { (yyval.nodo) = nodo_cadena((yyvsp[(1) - (1)].cadena)); ;}
    break;

  case 55:
#line 274 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MAYOR, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 56:
#line 275 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MENOR, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 57:
#line 276 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MAYORIGUAL, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 58:
#line 277 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MENORIGUAL, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 59:
#line 278 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_IGUAL, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 60:
#line 279 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_DIFERENTE, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 61:
#line 283 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 62:
#line 284 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_AND, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 63:
#line 285 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_OR, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 64:
#line 286 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_NOT, (yyvsp[(2) - (2)].nodo), NULL); ;}
    break;

  case 65:
#line 287 "espanol.y"
    { (yyval.nodo) = (yyvsp[(2) - (3)].nodo); ;}
    break;

  case 66:
#line 292 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = (yyvsp[(3) - (7)].nodo);
        n->der = (yyvsp[(6) - (7)].nodo);
        n->extra = NULL;
        (yyval.nodo) = n;
    ;}
    break;

  case 67:
#line 300 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = (yyvsp[(3) - (11)].nodo);
        n->der = (yyvsp[(6) - (11)].nodo);
        n->extra = (yyvsp[(10) - (11)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 68:
#line 308 "espanol.y"
    {
        sugerencia_error("si");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 69:
#line 317 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_MIENTRAS);
        n->izq = (yyvsp[(3) - (7)].nodo);
        n->der = (yyvsp[(6) - (7)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 70:
#line 324 "espanol.y"
    {
        sugerencia_error("mientras");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 71:
#line 333 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_HACER);
        n->izq = (yyvsp[(3) - (9)].nodo);
        n->der = (yyvsp[(7) - (9)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 72:
#line 343 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_IMPRIMIR);
        n->izq = (yyvsp[(3) - (5)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 73:
#line 349 "espanol.y"
    {
        sugerencia_error("imprimir");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 74:
#line 358 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_CONCAT);
        n->izq = (yyvsp[(1) - (3)].nodo);
        n->der = (yyvsp[(3) - (3)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 75:
#line 364 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 76:
#line 369 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_RETORNAR);
        n->izq = (yyvsp[(3) - (5)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 77:
#line 378 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup((yyvsp[(1) - (4)].cadena));
        n->izq = (yyvsp[(3) - (4)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 78:
#line 385 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup((yyvsp[(1) - (3)].cadena));
        (yyval.nodo) = n;
    ;}
    break;

  case 79:
#line 394 "espanol.y"
    {
        (yyval.nodo) = agregar_sentencia((yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 80:
#line 397 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2215 "espanol.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 400 "espanol.y"


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

