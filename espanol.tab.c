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




/* Copy the first part of user declarations.  */
#line 2 "espanol.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla.h"
#include "ast.h"
#include "eval.h"

extern int num_linea;
extern FILE *yyin;

void yyerror(const char *s);
void sugerencia_error(const char* contexto);
int yylex();

TipoDato tipo_actual;
int num_errores = 0;


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
#line 21 "espanol.y"
{
    int entero;
    double decimal;
    char* cadena;
    Nodo* nodo;
}
/* Line 193 of yacc.c.  */
#line 224 "espanol.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 237 "espanol.tab.c"

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
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    22,    30,    38,
      45,    49,    51,    54,    62,    69,    75,    78,    80,    82,
      84,    86,    88,    90,    92,    94,    97,   101,   108,   115,
     117,   119,   121,   123,   125,   127,   131,   136,   141,   149,
     153,   157,   159,   163,   167,   169,   171,   173,   175,   177,
     179,   184,   188,   190,   192,   196,   200,   204,   208,   212,
     216,   224,   236,   239,   247,   250,   260,   266,   269,   273,
     275,   281,   286,   290,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    58,    -1,    58,    -1,    54,    55,
      -1,    55,    -1,    62,    51,    38,    56,    39,    40,    59,
      41,    -1,    62,    51,    38,    39,    40,    59,    41,    -1,
      51,    38,    56,    39,    40,    59,    41,    -1,    51,    38,
      39,    40,    59,    41,    -1,    56,    44,    57,    -1,    57,
      -1,    62,    51,    -1,    23,    51,    38,    39,    40,    59,
      41,    -1,    23,    38,    39,    40,    59,    41,    -1,    23,
       1,    40,    59,    41,    -1,    59,    60,    -1,    60,    -1,
      61,    -1,    64,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    74,    -1,    75,    45,    -1,    62,    51,    45,
      -1,    62,    51,    42,    63,    43,    45,    -1,    10,    62,
      51,    31,    65,    45,    -1,     8,    -1,     4,    -1,     3,
      -1,     7,    -1,     9,    -1,    47,    -1,    63,    44,    47,
      -1,    51,    31,    65,    45,    -1,    51,    31,    65,     1,
      -1,    51,    31,    24,    38,    49,    39,    45,    -1,    65,
      26,    66,    -1,    65,    27,    66,    -1,    66,    -1,    66,
      28,    67,    -1,    66,    29,    67,    -1,    67,    -1,    47,
      -1,    48,    -1,     5,    -1,     6,    -1,    51,    -1,    51,
      42,    65,    43,    -1,    38,    65,    39,    -1,    75,    -1,
      49,    -1,    65,    34,    65,    -1,    65,    35,    65,    -1,
      65,    36,    65,    -1,    65,    37,    65,    -1,    65,    32,
      65,    -1,    65,    33,    65,    -1,    19,    38,    68,    39,
      40,    59,    41,    -1,    19,    38,    68,    39,    40,    59,
      41,    20,    40,    59,    41,    -1,    19,     1,    -1,    17,
      38,    68,    39,    40,    59,    41,    -1,    17,     1,    -1,
      16,    40,    59,    41,    17,    38,    68,    39,    45,    -1,
      25,    38,    73,    39,    45,    -1,    25,     1,    -1,    73,
      30,    67,    -1,    67,    -1,    18,    38,    65,    39,    45,
      -1,    51,    38,    76,    39,    -1,    51,    38,    39,    -1,
      76,    44,    65,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    55,    62,    63,    67,    68,    69,    70,
      74,    75,    79,    83,    89,    95,   103,   107,   114,   115,
     116,   117,   118,   119,   120,   121,   125,   131,   137,   147,
     148,   149,   150,   151,   155,   156,   160,   167,   173,   185,
     189,   193,   197,   201,   205,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   221,   222,   223,   224,   225,   226,
     230,   238,   246,   255,   262,   271,   281,   287,   296,   303,
     307,   316,   323,   332,   336
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
  "IMPRIMIR", "SUMA", "RESTA", "MULT", "DIV", "PUNTO", "ASIGN", "IGUAL",
  "DIFERENTE", "MAYOR", "MENOR", "MAYORIGUAL", "MENORIGUAL", "LPAREN",
  "RPAREN", "LLAVE_A", "LLAVE_C", "CORCHETE_A", "CORCHETE_C", "COMA",
  "PUNTOCOMA", "DOSPUNTOS", "NUM_ENTERO", "NUM_DECIMAL", "CADENA",
  "CARACTER_LIT", "ID", "$accept", "inicio", "lista_funciones",
  "definicion_funcion", "lista_parametros", "parametro", "programa",
  "sentencias", "sentencia", "declaracion", "tipo", "dimensiones",
  "asignacion", "expresion", "termino", "factor", "condicion",
  "sentencia_si", "sentencia_mientras", "sentencia_hacer",
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      56,    56,    57,    58,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    65,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    72,    72,    73,    73,
      74,    75,    75,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     8,     7,     7,     6,
       3,     1,     2,     7,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     6,     6,     1,
       1,     1,     1,     1,     1,     3,     4,     4,     7,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       7,    11,     2,     7,     2,     9,     5,     2,     3,     1,
       5,     4,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    31,    30,    32,    29,    33,     0,     0,     0,     0,
       5,     3,     0,     0,     0,     0,     0,     1,     4,     2,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,     0,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    64,     0,     0,
      62,     0,    67,     0,     0,     0,    15,    16,     0,    25,
       0,     0,     0,     0,    10,     0,     0,     0,     0,    47,
      48,     0,    45,    46,    53,    49,     0,    41,    44,     0,
      52,     0,     0,    69,     0,     0,     0,    72,    74,     0,
       0,    26,    14,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    36,
      71,     0,    34,     0,    13,     8,     7,     0,     0,     0,
      51,     0,    39,    40,    58,    59,    54,    55,    56,    57,
      42,    43,     0,    70,     0,    68,    66,     0,    73,     0,
       0,     6,    28,     0,    50,     0,     0,     0,    27,    35,
       0,    63,    60,    38,     0,     0,    65,     0,     0,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    25,    26,    11,    36,    37,    38,
      39,   133,    40,    86,    87,    88,    89,    41,    42,    43,
      44,    94,    45,    46,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -60
static const yytype_int16 yypact[] =
{
       5,   -60,   -60,   -60,   -60,   -60,     3,   -33,     7,     5,
     -60,   -60,   -29,   -10,     6,    13,   131,   -60,   -60,   -60,
      60,   351,    36,    61,    78,   -21,   -60,    85,   376,   392,
      82,    10,   103,    19,    39,   -12,   107,   -60,   -60,    92,
     -60,   -60,   -60,   -60,   -60,   -60,   106,   351,   136,   351,
     149,   392,   -60,   155,    34,   120,   351,   -60,   139,   139,
     -60,   139,   -60,   139,   340,    11,   -60,   -60,   105,   -60,
     156,   351,   175,   351,   -60,   351,   161,   165,   195,   -60,
     -60,   139,   -60,   -60,   -60,    71,   371,    46,   -60,   167,
     -60,    94,   169,   -60,    42,   171,    20,   -60,    57,    68,
     163,   -60,   -60,   214,   -60,   234,   253,   351,   139,   198,
     141,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   179,   180,   187,   139,   183,   185,   -60,   -60,
     -60,   139,   -60,    84,   -60,   -60,   -60,   273,    26,   191,
     -60,    53,    46,    46,    57,    57,    57,    57,    57,    57,
     -60,   -60,   351,   -60,   351,   -60,   -60,   196,    57,   200,
     193,   -60,   -60,   139,   -60,   292,   312,   202,   -60,   -60,
     209,   -60,   229,   -60,   213,   224,   -60,   351,   331,   -60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -60,   245,   238,   216,   259,   -46,   -36,   -60,
      15,   -60,   -60,    38,    49,   -57,   -59,   -60,   -60,   -60,
     -60,   -60,   -60,   -26,   -60
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      67,    70,    92,    72,    13,    16,    93,    17,     1,     2,
      78,    57,     3,     4,     5,    12,    79,    80,    50,    64,
      60,   128,    20,    51,    12,   103,    65,   105,     6,   106,
      21,    27,    90,    90,    67,    90,    67,    90,    90,    90,
      62,    14,    67,    27,    55,    22,   112,   113,    58,    81,
      97,    23,   112,   113,    15,    90,     7,    61,    82,    83,
      84,   137,    85,   150,   151,   129,    27,    67,   155,    67,
      67,   162,   125,    76,   120,   121,    47,    63,    51,   112,
     113,   126,    90,   112,   113,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,   164,    91,    28,    90,
      48,    67,    96,    98,   170,    90,   165,   130,   166,    65,
       1,     2,   131,   111,     3,     4,     5,    29,    49,   110,
     112,   113,    56,    30,    31,    32,    33,   159,   160,    67,
      67,   178,    34,   123,     1,     2,    52,    90,     3,     4,
       5,    59,    67,    68,    79,    80,   138,   100,    66,   141,
     101,    69,   144,   145,   146,   147,   148,   149,    35,     1,
       2,   142,   143,     3,     4,     5,    29,   112,   113,   158,
      24,    77,    30,    31,    32,    33,    71,    81,     1,     2,
     140,    34,     3,     4,     5,    29,    82,    83,    84,    73,
      85,    30,    31,    32,    33,    75,   108,   102,     1,     2,
      34,   107,     3,     4,     5,    29,   122,    35,   124,   127,
     132,    30,    31,    32,    33,   139,   104,     1,     2,   152,
      34,     3,     4,     5,    29,   153,    35,   154,   156,   163,
      30,    31,    32,    33,   157,   167,   109,     1,     2,    34,
     169,     3,     4,     5,    29,   168,    35,   173,   174,   175,
      30,    31,    32,    33,    18,   134,     1,     2,   176,    34,
       3,     4,     5,    29,   177,    35,    54,    74,    19,    30,
      31,    32,    33,     0,     0,   135,     1,     2,    34,     0,
       3,     4,     5,    29,     0,    35,     0,     0,     0,    30,
      31,    32,    33,     0,   136,     1,     2,     0,    34,     3,
       4,     5,    29,     0,    35,     0,     0,     0,    30,    31,
      32,    33,     0,     0,   161,     1,     2,    34,     0,     3,
       4,     5,    29,     0,    35,     0,     0,     0,    30,    31,
      32,    33,     0,   171,     1,     2,     0,    34,     3,     4,
       5,    29,     0,    35,     0,    79,    80,    30,    31,    32,
      33,     0,     0,   172,     1,     2,    34,     0,     3,     4,
       5,    29,     0,    35,    95,     0,     0,    30,    31,    32,
      33,     0,   179,     0,     0,     0,    34,     0,    81,     1,
       2,     0,    35,     3,     4,     5,     0,    82,    83,    84,
       0,    85,     0,     0,     0,     1,     2,   112,   113,     3,
       4,     5,    35,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,    53
};

static const yytype_int16 yycheck[] =
{
      36,    47,    61,    49,     1,    38,    63,     0,     3,     4,
      56,     1,     7,     8,     9,     0,     5,     6,    39,    31,
       1,     1,    51,    44,     9,    71,    38,    73,    23,    75,
      40,    16,    58,    59,    70,    61,    72,    63,    64,    65,
       1,    38,    78,    28,    29,    39,    26,    27,    38,    38,
      39,    38,    26,    27,    51,    81,    51,    38,    47,    48,
      49,   107,    51,   120,   121,    45,    51,   103,   125,   105,
     106,    45,    30,    39,    28,    29,    40,    38,    44,    26,
      27,    39,   108,    26,    27,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    43,    59,    38,   125,
      39,   137,    64,    65,   163,   131,   152,    39,   154,    38,
       3,     4,    44,    42,     7,     8,     9,    10,    40,    81,
      26,    27,    40,    16,    17,    18,    19,    43,    44,   165,
     166,   177,    25,    39,     3,     4,    51,   163,     7,     8,
       9,    38,   178,    51,     5,     6,   108,    42,    41,   111,
      45,    45,   114,   115,   116,   117,   118,   119,    51,     3,
       4,   112,   113,     7,     8,     9,    10,    26,    27,   131,
      39,    51,    16,    17,    18,    19,    40,    38,     3,     4,
      39,    25,     7,     8,     9,    10,    47,    48,    49,    40,
      51,    16,    17,    18,    19,    40,    31,    41,     3,     4,
      25,    40,     7,     8,     9,    10,    39,    51,    39,    38,
      47,    16,    17,    18,    19,    17,    41,     3,     4,    40,
      25,     7,     8,     9,    10,    45,    51,    40,    45,    38,
      16,    17,    18,    19,    49,    39,    41,     3,     4,    25,
      47,     7,     8,     9,    10,    45,    51,    45,    39,    20,
      16,    17,    18,    19,     9,    41,     3,     4,    45,    25,
       7,     8,     9,    10,    40,    51,    28,    51,     9,    16,
      17,    18,    19,    -1,    -1,    41,     3,     4,    25,    -1,
       7,     8,     9,    10,    -1,    51,    -1,    -1,    -1,    16,
      17,    18,    19,    -1,    41,     3,     4,    -1,    25,     7,
       8,     9,    10,    -1,    51,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    41,     3,     4,    25,    -1,     7,
       8,     9,    10,    -1,    51,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    41,     3,     4,    -1,    25,     7,     8,
       9,    10,    -1,    51,    -1,     5,     6,    16,    17,    18,
      19,    -1,    -1,    41,     3,     4,    25,    -1,     7,     8,
       9,    10,    -1,    51,    24,    -1,    -1,    16,    17,    18,
      19,    -1,    41,    -1,    -1,    -1,    25,    -1,    38,     3,
       4,    -1,    51,     7,     8,     9,    -1,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,     3,     4,    26,    27,     7,
       8,     9,    51,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,     8,     9,    23,    51,    53,    54,
      55,    58,    62,     1,    38,    51,    38,     0,    55,    58,
      51,    40,    39,    38,    39,    56,    57,    62,    38,    10,
      16,    17,    18,    19,    25,    51,    59,    60,    61,    62,
      64,    69,    70,    71,    72,    74,    75,    40,    39,    40,
      39,    44,    51,    39,    56,    62,    40,     1,    38,    38,
       1,    38,     1,    38,    31,    38,    41,    60,    51,    45,
      59,    40,    59,    40,    57,    40,    39,    51,    59,     5,
       6,    38,    47,    48,    49,    51,    65,    66,    67,    68,
      75,    65,    68,    67,    73,    24,    65,    39,    65,    76,
      42,    45,    41,    59,    41,    59,    59,    40,    31,    41,
      65,    42,    26,    27,    32,    33,    34,    35,    36,    37,
      28,    29,    39,    39,    39,    30,    39,    38,     1,    45,
      39,    44,    47,    63,    41,    41,    41,    59,    65,    17,
      39,    65,    66,    66,    65,    65,    65,    65,    65,    65,
      67,    67,    40,    45,    40,    67,    45,    49,    65,    43,
      44,    41,    45,    38,    43,    59,    59,    39,    45,    47,
      68,    41,    41,    45,    39,    20,    45,    40,    59,    41
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
#line 52 "espanol.y"
    {
        ejecutar((yyvsp[(2) - (2)].nodo));
    ;}
    break;

  case 3:
#line 56 "espanol.y"
    {
        ejecutar((yyvsp[(1) - (1)].nodo));
    ;}
    break;

  case 4:
#line 62 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (2)].nodo); ;}
    break;

  case 5:
#line 63 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 6:
#line 67 "espanol.y"
    { (yyval.nodo) = NULL; ;}
    break;

  case 7:
#line 68 "espanol.y"
    { (yyval.nodo) = NULL; ;}
    break;

  case 8:
#line 69 "espanol.y"
    { (yyval.nodo) = NULL; ;}
    break;

  case 9:
#line 70 "espanol.y"
    { (yyval.nodo) = NULL; ;}
    break;

  case 13:
#line 84 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_PROGRAMA);
        n->izq = (yyvsp[(6) - (7)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 14:
#line 90 "espanol.y"
    {
        printf("[1;33mSugerencia: 'Programa' necesita un nombre. Ejemplo: Programa miPrograma()[0m\n");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 15:
#line 96 "espanol.y"
    {
        printf("[1;33mSugerencia: verifica la declaracion de 'Programa nombre()'[0m\n");
        (yyval.nodo) = NULL;
    ;}
    break;

  case 16:
#line 104 "espanol.y"
    {
        (yyval.nodo) = agregar_sentencia((yyvsp[(1) - (2)].nodo), (yyvsp[(2) - (2)].nodo));
    ;}
    break;

  case 17:
#line 108 "espanol.y"
    {
        (yyval.nodo) = (yyvsp[(1) - (1)].nodo);
    ;}
    break;

  case 18:
#line 114 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 19:
#line 115 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 20:
#line 116 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 21:
#line 117 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 22:
#line 118 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 23:
#line 119 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 24:
#line 120 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 25:
#line 121 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (2)].nodo); ;}
    break;

  case 26:
#line 126 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_DECLARACION);
        n->valor_cadena = strdup((yyvsp[(2) - (3)].cadena));
        (yyval.nodo) = n;
    ;}
    break;

  case 27:
#line 132 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_DECLARACION);
        n->valor_cadena = strdup((yyvsp[(2) - (6)].cadena));
        (yyval.nodo) = n;
    ;}
    break;

  case 28:
#line 138 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[(3) - (6)].cadena));
        n->der = (yyvsp[(5) - (6)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 29:
#line 147 "espanol.y"
    { tipo_actual = TIPO_ENTERO; ;}
    break;

  case 30:
#line 148 "espanol.y"
    { tipo_actual = TIPO_DECIMAL; ;}
    break;

  case 31:
#line 149 "espanol.y"
    { tipo_actual = TIPO_BOLEANO; ;}
    break;

  case 32:
#line 150 "espanol.y"
    { tipo_actual = TIPO_CARACTER; ;}
    break;

  case 33:
#line 151 "espanol.y"
    { tipo_actual = TIPO_DECIMAL; ;}
    break;

  case 36:
#line 161 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[(1) - (4)].cadena));
        n->der = (yyvsp[(3) - (4)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 37:
#line 168 "espanol.y"
    {
        printf("\033[1;33mSugerencia: falta ; despues de la asignacion de %s\033[0m\n", (yyvsp[(1) - (4)].cadena));
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 38:
#line 174 "espanol.y"
    {
        Nodo* ing = crear_nodo(NODO_INGRESAR);
        ing->izq = nodo_cadena((yyvsp[(5) - (7)].cadena));
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[(1) - (7)].cadena));
        n->der = ing;
        (yyval.nodo) = n;
    ;}
    break;

  case 39:
#line 186 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_SUMA, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 40:
#line 190 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_RESTA, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 41:
#line 193 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 42:
#line 198 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_MULT, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 43:
#line 202 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_DIV, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 44:
#line 205 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 45:
#line 209 "espanol.y"
    { (yyval.nodo) = nodo_entero((yyvsp[(1) - (1)].entero)); ;}
    break;

  case 46:
#line 210 "espanol.y"
    { Nodo* n = crear_nodo(NODO_NUM_DECIMAL); n->valor_decimal = (yyvsp[(1) - (1)].decimal); (yyval.nodo) = n; ;}
    break;

  case 47:
#line 211 "espanol.y"
    { (yyval.nodo) = nodo_entero(1); ;}
    break;

  case 48:
#line 212 "espanol.y"
    { (yyval.nodo) = nodo_entero(0); ;}
    break;

  case 49:
#line 213 "espanol.y"
    { (yyval.nodo) = nodo_id((yyvsp[(1) - (1)].cadena)); ;}
    break;

  case 50:
#line 214 "espanol.y"
    { (yyval.nodo) = nodo_id((yyvsp[(1) - (4)].cadena)); ;}
    break;

  case 51:
#line 215 "espanol.y"
    { (yyval.nodo) = (yyvsp[(2) - (3)].nodo); ;}
    break;

  case 52:
#line 216 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 53:
#line 217 "espanol.y"
    { (yyval.nodo) = nodo_cadena((yyvsp[(1) - (1)].cadena)); ;}
    break;

  case 54:
#line 221 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MAYOR, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 55:
#line 222 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MENOR, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 56:
#line 223 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MAYORIGUAL, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 57:
#line 224 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_MENORIGUAL, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 58:
#line 225 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_IGUAL, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 59:
#line 226 "espanol.y"
    { (yyval.nodo) = nodo_op(NODO_DIFERENTE, (yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo)); ;}
    break;

  case 60:
#line 231 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = (yyvsp[(3) - (7)].nodo);
        n->der = (yyvsp[(6) - (7)].nodo);
        n->extra = NULL;
        (yyval.nodo) = n;
    ;}
    break;

  case 61:
#line 239 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = (yyvsp[(3) - (11)].nodo);
        n->der = (yyvsp[(6) - (11)].nodo);
        n->extra = (yyvsp[(10) - (11)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 62:
#line 247 "espanol.y"
    {
        sugerencia_error("si");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 63:
#line 256 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_MIENTRAS);
        n->izq = (yyvsp[(3) - (7)].nodo);
        n->der = (yyvsp[(6) - (7)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 64:
#line 263 "espanol.y"
    {
        sugerencia_error("mientras");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 65:
#line 272 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_HACER);
        n->izq = (yyvsp[(3) - (9)].nodo);
        n->der = (yyvsp[(7) - (9)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 66:
#line 282 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_IMPRIMIR);
        n->izq = (yyvsp[(3) - (5)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 67:
#line 288 "espanol.y"
    {
        sugerencia_error("imprimir");
        num_errores++;
        (yyval.nodo) = NULL;
    ;}
    break;

  case 68:
#line 297 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_CONCAT);
        n->izq = (yyvsp[(1) - (3)].nodo);
        n->der = (yyvsp[(3) - (3)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 69:
#line 303 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;

  case 70:
#line 308 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_RETORNAR);
        n->izq = (yyvsp[(3) - (5)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 71:
#line 317 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup((yyvsp[(1) - (4)].cadena));
        n->izq = (yyvsp[(3) - (4)].nodo);
        (yyval.nodo) = n;
    ;}
    break;

  case 72:
#line 324 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup((yyvsp[(1) - (3)].cadena));
        (yyval.nodo) = n;
    ;}
    break;

  case 73:
#line 333 "espanol.y"
    {
        (yyval.nodo) = agregar_sentencia((yyvsp[(1) - (3)].nodo), (yyvsp[(3) - (3)].nodo));
    ;}
    break;

  case 74:
#line 336 "espanol.y"
    { (yyval.nodo) = (yyvsp[(1) - (1)].nodo); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2087 "espanol.tab.c"
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


#line 339 "espanol.y"


void yyerror(const char *s) {
    num_errores++;
    printf("\033[1;31mError sintactico en linea %d: %s\033[0m\n", num_linea, s);

    /* Sugerencias basadas en el token que causo el error */
    switch(yychar) {
        case IMPRIMIR:
            printf("\033[1;33mSugerencia: verifica la sentencia anterior, posiblemente falta ;\033[0m\n");
            break;
        case ENTERO: case DECIMAL: case BOLEANO: case CARACTER: case DOBLE:
            printf("\033[1;33mSugerencia: posiblemente falta ; en la linea anterior\033[0m\n");
            break;
        case SI:
            printf("\033[1;33mSugerencia: posiblemente falta ; en la linea anterior\033[0m\n");
            break;
        case MIENTRAS:
            printf("\033[1;33mSugerencia: posiblemente falta ; en la linea anterior\033[0m\n");
            break;
        case LLAVE_C:
            printf("\033[1;33mSugerencia: verifica que todas las sentencias terminen con ;\033[0m\n");
            break;
        case LPAREN:
            printf("\033[1;33mSugerencia: verifica que el nombre de Programa este escrito correctamente\033[0m\n");
            break;
        case -1:
            printf("\033[1;33mSugerencia: verifica que el programa este completo y cierre con }\033[0m\n");
            break;
        default:
            printf("\033[1;33mSugerencia: revisa la sintaxis en la linea %d\033[0m\n", num_linea);
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

