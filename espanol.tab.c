/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "espanol.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla.h"
#include "ast.h"
#include "eval.h"
#include "funciones.h"
#include "codegen.h"

extern int num_linea;
extern FILE *yyin;

void yyerror(const char *s);
void sugerencia_error(const char* contexto);
int yylex();

TipoDato tipo_actual;
int num_errores = 0;
Nodo* programa_ast = NULL;
char param_nombres[10][50];
int num_params_actual = 0;

#line 95 "espanol.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "espanol.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BOLEANO = 3,                    /* BOLEANO  */
  YYSYMBOL_DECIMAL = 4,                    /* DECIMAL  */
  YYSYMBOL_VERDADERO = 5,                  /* VERDADERO  */
  YYSYMBOL_FALSO = 6,                      /* FALSO  */
  YYSYMBOL_CARACTER = 7,                   /* CARACTER  */
  YYSYMBOL_ENTERO = 8,                     /* ENTERO  */
  YYSYMBOL_DOBLE = 9,                      /* DOBLE  */
  YYSYMBOL_CONSTANTE = 10,                 /* CONSTANTE  */
  YYSYMBOL_CASOS = 11,                     /* CASOS  */
  YYSYMBOL_DEFECTO = 12,                   /* DEFECTO  */
  YYSYMBOL_CASO = 13,                      /* CASO  */
  YYSYMBOL_PARAR = 14,                     /* PARAR  */
  YYSYMBOL_PARA = 15,                      /* PARA  */
  YYSYMBOL_HACER = 16,                     /* HACER  */
  YYSYMBOL_MIENTRAS = 17,                  /* MIENTRAS  */
  YYSYMBOL_RETORNAR = 18,                  /* RETORNAR  */
  YYSYMBOL_SI = 19,                        /* SI  */
  YYSYMBOL_DELOCONTRARIO = 20,             /* DELOCONTRARIO  */
  YYSYMBOL_FUNCION = 21,                   /* FUNCION  */
  YYSYMBOL_PROCEDIMIENTO = 22,             /* PROCEDIMIENTO  */
  YYSYMBOL_PROGRAMA = 23,                  /* PROGRAMA  */
  YYSYMBOL_INGRESAR = 24,                  /* INGRESAR  */
  YYSYMBOL_IMPRIMIR = 25,                  /* IMPRIMIR  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_SUMA = 29,                      /* SUMA  */
  YYSYMBOL_RESTA = 30,                     /* RESTA  */
  YYSYMBOL_MULT = 31,                      /* MULT  */
  YYSYMBOL_DIV = 32,                       /* DIV  */
  YYSYMBOL_PUNTO = 33,                     /* PUNTO  */
  YYSYMBOL_ASIGN = 34,                     /* ASIGN  */
  YYSYMBOL_IGUAL = 35,                     /* IGUAL  */
  YYSYMBOL_DIFERENTE = 36,                 /* DIFERENTE  */
  YYSYMBOL_MAYOR = 37,                     /* MAYOR  */
  YYSYMBOL_MENOR = 38,                     /* MENOR  */
  YYSYMBOL_MAYORIGUAL = 39,                /* MAYORIGUAL  */
  YYSYMBOL_MENORIGUAL = 40,                /* MENORIGUAL  */
  YYSYMBOL_LPAREN = 41,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 42,                    /* RPAREN  */
  YYSYMBOL_LLAVE_A = 43,                   /* LLAVE_A  */
  YYSYMBOL_LLAVE_C = 44,                   /* LLAVE_C  */
  YYSYMBOL_CORCHETE_A = 45,                /* CORCHETE_A  */
  YYSYMBOL_CORCHETE_C = 46,                /* CORCHETE_C  */
  YYSYMBOL_COMA = 47,                      /* COMA  */
  YYSYMBOL_PUNTOCOMA = 48,                 /* PUNTOCOMA  */
  YYSYMBOL_DOSPUNTOS = 49,                 /* DOSPUNTOS  */
  YYSYMBOL_NUM_ENTERO = 50,                /* NUM_ENTERO  */
  YYSYMBOL_NUM_DECIMAL = 51,               /* NUM_DECIMAL  */
  YYSYMBOL_CADENA = 52,                    /* CADENA  */
  YYSYMBOL_CARACTER_LIT = 53,              /* CARACTER_LIT  */
  YYSYMBOL_ID = 54,                        /* ID  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_inicio = 56,                    /* inicio  */
  YYSYMBOL_lista_funciones = 57,           /* lista_funciones  */
  YYSYMBOL_definicion_funcion = 58,        /* definicion_funcion  */
  YYSYMBOL_lista_parametros = 59,          /* lista_parametros  */
  YYSYMBOL_parametro = 60,                 /* parametro  */
  YYSYMBOL_programa = 61,                  /* programa  */
  YYSYMBOL_sentencias = 62,                /* sentencias  */
  YYSYMBOL_sentencia = 63,                 /* sentencia  */
  YYSYMBOL_declaracion = 64,               /* declaracion  */
  YYSYMBOL_tipo = 65,                      /* tipo  */
  YYSYMBOL_asignacion = 66,                /* asignacion  */
  YYSYMBOL_expresion = 67,                 /* expresion  */
  YYSYMBOL_termino = 68,                   /* termino  */
  YYSYMBOL_factor = 69,                    /* factor  */
  YYSYMBOL_cond_simple = 70,               /* cond_simple  */
  YYSYMBOL_condicion = 71,                 /* condicion  */
  YYSYMBOL_sentencia_si = 72,              /* sentencia_si  */
  YYSYMBOL_sentencia_mientras = 73,        /* sentencia_mientras  */
  YYSYMBOL_sentencia_hacer = 74,           /* sentencia_hacer  */
  YYSYMBOL_sentencia_imprimir = 75,        /* sentencia_imprimir  */
  YYSYMBOL_params_imprimir = 76,           /* params_imprimir  */
  YYSYMBOL_sentencia_retornar = 77,        /* sentencia_retornar  */
  YYSYMBOL_llamada_funcion = 78,           /* llamada_funcion  */
  YYSYMBOL_argumentos = 79                 /* argumentos  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    60,    67,    68,    72,    78,    83,    89,
      97,    98,   102,   109,   116,   122,   130,   134,   141,   142,
     143,   144,   145,   146,   147,   148,   152,   158,   165,   172,
     182,   183,   184,   185,   186,   192,   199,   209,   218,   224,
     233,   241,   254,   258,   262,   266,   270,   274,   278,   279,
     280,   281,   282,   283,   290,   291,   292,   296,   297,   298,
     299,   300,   301,   305,   306,   307,   308,   309,   313,   321,
     329,   338,   345,   354,   364,   370,   379,   386,   390,   399,
     406,   415,   419
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BOLEANO", "DECIMAL",
  "VERDADERO", "FALSO", "CARACTER", "ENTERO", "DOBLE", "CONSTANTE",
  "CASOS", "DEFECTO", "CASO", "PARAR", "PARA", "HACER", "MIENTRAS",
  "RETORNAR", "SI", "DELOCONTRARIO", "FUNCION", "PROCEDIMIENTO",
  "PROGRAMA", "INGRESAR", "IMPRIMIR", "AND", "OR", "NOT", "SUMA", "RESTA",
  "MULT", "DIV", "PUNTO", "ASIGN", "IGUAL", "DIFERENTE", "MAYOR", "MENOR",
  "MAYORIGUAL", "MENORIGUAL", "LPAREN", "RPAREN", "LLAVE_A", "LLAVE_C",
  "CORCHETE_A", "CORCHETE_C", "COMA", "PUNTOCOMA", "DOSPUNTOS",
  "NUM_ENTERO", "NUM_DECIMAL", "CADENA", "CARACTER_LIT", "ID", "$accept",
  "inicio", "lista_funciones", "definicion_funcion", "lista_parametros",
  "parametro", "programa", "sentencias", "sentencia", "declaracion",
  "tipo", "asignacion", "expresion", "termino", "factor", "cond_simple",
  "condicion", "sentencia_si", "sentencia_mientras", "sentencia_hacer",
  "sentencia_imprimir", "params_imprimir", "sentencia_retornar",
  "llamada_funcion", "argumentos", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -72,   -72,   -72,   -72,   -72,     2,     1,    57,    10,
     -72,   -72,     9,    27,    44,    71,   434,   -72,   -72,   -72,
      89,   100,    37,    56,   108,   -37,   -72,   116,   449,   466,
     121,     3,   131,    20,    21,   -14,   171,   -72,   -72,   137,
     -72,   -72,   -72,   -72,   -72,   -72,   172,   100,   142,   100,
     183,   466,   -72,   186,   110,   174,   100,   -72,   117,   414,
     -72,   117,   -72,   414,   394,    43,   414,   -72,   -72,    51,
     -72,   191,   100,   214,   100,   -72,   100,   193,   200,   234,
     -72,   -72,   414,   117,   -72,   -72,   -72,   -33,   457,   101,
     -72,   -72,   111,   -72,   414,    84,   150,   -72,    32,   199,
     114,    39,   -72,   153,   119,    -5,   196,   -72,   -72,   257,
     -72,   277,   300,   100,   414,   230,   -72,   442,   177,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   205,   105,   201,   211,   414,   207,   204,   371,
     -72,   -72,   -72,   414,   223,   159,   -72,   -72,   -72,   320,
      72,   221,   -72,   -72,     0,   101,   101,   153,   153,   153,
     153,   153,   153,   -72,   -72,   -72,   -72,   100,   -72,   100,
     -72,   -72,   227,   215,   155,   153,   409,   222,   229,   -72,
     -72,   117,   -72,   343,   363,   224,   -72,   235,   236,    76,
     -72,   225,   185,   -72,   269,   -72,   -72,   238,   -72,   243,
     244,   254,   256,   -72,   -72,   100,   251,   386,   -72,   -72
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    32,    31,    33,    30,    34,     0,     0,     0,     0,
       5,     3,     0,     0,     0,     0,     0,     1,     4,     2,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,     0,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    72,     0,     0,
      70,     0,    75,     0,     0,     0,     0,    15,    16,     0,
      25,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      50,    51,     0,     0,    48,    49,    56,    52,     0,    44,
      47,    63,     0,    55,     0,     0,     0,    77,     0,     0,
      52,     0,    80,    82,     0,     0,     0,    26,    14,     0,
       9,     0,     0,     0,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    35,    79,     0,     0,     0,    13,     8,     7,     0,
       0,     0,    54,    67,     0,    42,    43,    61,    62,    57,
      58,    59,    60,    45,    46,    64,    65,     0,    78,     0,
      76,    74,     0,    80,     0,    81,     0,     0,     0,     6,
      29,     0,    53,     0,     0,     0,    37,    79,     0,     0,
      27,     0,     0,    71,    68,    39,    36,     0,    40,     0,
       0,     0,     0,    28,    73,     0,     0,     0,    41,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -72,   291,   278,   261,   296,   -40,   -34,   -72,
      38,   -72,    17,    93,   -57,   -71,   -60,   -72,   -72,   -72,
     -72,   -72,   -72,   -21,   175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,     9,    10,    25,    26,    11,    36,    37,    38,
      39,    40,    88,    89,    90,    91,    92,    41,    42,    43,
      44,    98,    45,    93,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,    96,    68,    13,    57,    50,    97,    71,    65,    73,
      51,   116,   119,     1,     2,    46,    79,     3,     4,     5,
      64,    60,    62,   118,   120,   121,    46,    65,    46,   120,
     121,    66,   109,     6,   111,    46,   112,    68,    12,    68,
     140,   144,    16,    14,    58,    68,   182,    12,    80,    81,
      46,    46,    46,    46,    27,    46,    15,    17,    46,   165,
     166,    61,    63,    20,     7,   136,    27,    55,   120,   121,
      21,   163,   164,   149,   137,    68,    95,    68,    68,   170,
      47,   101,   103,   105,    94,   102,    22,   141,    46,    27,
      46,    46,    46,    84,    85,    86,   106,    87,    48,   107,
     117,   120,   121,     1,     2,   120,   121,     3,     4,     5,
      29,   133,    23,   120,   121,    68,    30,    31,    32,    33,
     180,   192,    80,    81,   198,    34,   134,   183,    46,   184,
      28,   150,   128,   129,   120,   121,   154,   130,   131,   157,
     158,   159,   160,   161,   162,    82,    46,   152,    46,    68,
      68,    49,    77,   132,    35,   139,   103,    51,    83,   119,
     175,   142,    46,    46,    56,   207,   143,    84,    85,    86,
      52,    87,    59,    68,     1,     2,   130,   131,     3,     4,
       5,    29,   120,   121,    46,    72,    46,    30,    31,    32,
      33,    69,   135,   189,     1,     2,    34,   187,     3,     4,
       5,    29,   143,   130,   131,   177,   178,    30,    31,    32,
      33,   130,   131,   155,   156,    67,    34,     1,     2,   153,
      70,     3,     4,     5,    29,    35,    74,   200,    78,    76,
      30,    31,    32,    33,   114,   108,   113,     1,     2,    34,
     138,     3,     4,     5,    29,    35,   145,   151,   167,   168,
      30,    31,    32,    33,   169,   171,   172,   176,   110,    34,
       1,     2,   181,   186,     3,     4,     5,    29,    35,   185,
     190,   199,   195,    30,    31,    32,    33,   197,   115,   191,
       1,     2,    34,   196,     3,     4,     5,    29,    35,   201,
     202,   203,   204,    30,    31,    32,    33,   205,   206,   208,
      18,   146,    34,     1,     2,    19,    54,     3,     4,     5,
      29,    35,    75,     0,   174,     0,    30,    31,    32,    33,
       0,   147,     0,     1,     2,    34,     0,     3,     4,     5,
      29,    35,     0,     0,     0,     0,    30,    31,    32,    33,
       0,     0,     0,     0,   148,    34,     1,     2,     0,     0,
       3,     4,     5,    29,    35,     0,     0,     0,     0,    30,
      31,    32,    33,     0,   179,     0,     1,     2,    34,     0,
       3,     4,     5,    29,    35,     0,    80,    81,     0,    30,
      31,    32,    33,     0,     0,     0,     0,   193,    34,     1,
       2,     0,     0,     3,     4,     5,    29,    35,     0,    80,
      81,     0,    30,    31,    32,    33,     0,   194,     0,     0,
       0,    34,    94,   173,    80,    81,     0,    35,    99,    80,
      81,    84,    85,    86,     0,    87,     0,     0,     0,     0,
     209,     0,     0,   188,     0,    94,     0,     1,     2,     0,
      35,     3,     4,     5,    84,    85,    86,     0,   100,     0,
      94,     0,     1,     2,     0,    94,     3,     4,     5,    84,
      85,    86,     0,    87,    84,    85,    86,     0,    87,     1,
       2,   120,   121,     3,     4,     5,    24,   122,   123,   124,
     125,   126,   127,     0,   152,     0,   120,   121,     0,     0,
       0,    53,   122,   123,   124,   125,   126,   127
};

static const yytype_int16 yycheck[] =
{
      21,    61,    36,     1,     1,    42,    63,    47,    41,    49,
      47,    82,    45,     3,     4,    36,    56,     7,     8,     9,
      34,     1,     1,    83,    29,    30,    47,    41,    49,    29,
      30,    45,    72,    23,    74,    56,    76,    71,     0,    73,
       1,    46,    41,    41,    41,    79,    46,     9,     5,     6,
      71,    72,    73,    74,    16,    76,    54,     0,    79,   130,
     131,    41,    41,    54,    54,    33,    28,    29,    29,    30,
      43,   128,   129,   113,    42,   109,    59,   111,   112,   136,
      43,    64,    65,    66,    41,    42,    42,    48,   109,    51,
     111,   112,   113,    50,    51,    52,    45,    54,    42,    48,
      83,    29,    30,     3,     4,    29,    30,     7,     8,     9,
      10,    94,    41,    29,    30,   149,    16,    17,    18,    19,
      48,   181,     5,     6,    48,    25,    42,   167,   149,   169,
      41,   114,    31,    32,    29,    30,   119,    26,    27,   122,
     123,   124,   125,   126,   127,    28,   167,    42,   169,   183,
     184,    43,    42,    42,    54,    41,   139,    47,    41,    45,
     143,    42,   183,   184,    43,   205,    47,    50,    51,    52,
      54,    54,    41,   207,     3,     4,    26,    27,     7,     8,
       9,    10,    29,    30,   205,    43,   207,    16,    17,    18,
      19,    54,    42,   176,     3,     4,    25,    42,     7,     8,
       9,    10,    47,    26,    27,    46,    47,    16,    17,    18,
      19,    26,    27,   120,   121,    44,    25,     3,     4,    42,
      48,     7,     8,     9,    10,    54,    43,    42,    54,    43,
      16,    17,    18,    19,    34,    44,    43,     3,     4,    25,
      41,     7,     8,     9,    10,    54,    50,    17,    43,    48,
      16,    17,    18,    19,    43,    48,    52,    34,    44,    25,
       3,     4,    41,    48,     7,     8,     9,    10,    54,    42,
      48,    46,    48,    16,    17,    18,    19,    41,    44,    50,
       3,     4,    25,    48,     7,     8,     9,    10,    54,    20,
      52,    48,    48,    16,    17,    18,    19,    43,    42,    48,
       9,    44,    25,     3,     4,     9,    28,     7,     8,     9,
      10,    54,    51,    -1,   139,    -1,    16,    17,    18,    19,
      -1,    44,    -1,     3,     4,    25,    -1,     7,     8,     9,
      10,    54,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    44,    25,     3,     4,    -1,    -1,
       7,     8,     9,    10,    54,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    -1,    44,    -1,     3,     4,    25,    -1,
       7,     8,     9,    10,    54,    -1,     5,     6,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    44,    25,     3,
       4,    -1,    -1,     7,     8,     9,    10,    54,    -1,     5,
       6,    -1,    16,    17,    18,    19,    -1,    44,    -1,    -1,
      -1,    25,    41,    42,     5,     6,    -1,    54,    24,     5,
       6,    50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    24,    -1,    41,    -1,     3,     4,    -1,
      54,     7,     8,     9,    50,    51,    52,    -1,    54,    -1,
      41,    -1,     3,     4,    -1,    41,     7,     8,     9,    50,
      51,    52,    -1,    54,    50,    51,    52,    -1,    54,     3,
       4,    29,    30,     7,     8,     9,    42,    35,    36,    37,
      38,    39,    40,    -1,    42,    -1,    29,    30,    -1,    -1,
      -1,    42,    35,    36,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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
      54,    67,    42,    67,    79,    67,    45,    48,    44,    62,
      44,    62,    62,    43,    34,    44,    70,    67,    71,    45,
      29,    30,    35,    36,    37,    38,    39,    40,    31,    32,
      26,    27,    42,    67,    42,    42,    33,    42,    41,    41,
       1,    48,    42,    47,    46,    50,    44,    44,    44,    62,
      67,    17,    42,    42,    67,    68,    68,    67,    67,    67,
      67,    67,    67,    69,    69,    70,    70,    43,    48,    43,
      69,    48,    52,    42,    79,    67,    34,    46,    47,    44,
      48,    41,    46,    62,    62,    42,    48,    42,    24,    67,
      48,    50,    71,    44,    44,    48,    48,    41,    48,    46,
      42,    20,    52,    48,    48,    43,    42,    62,    48,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      59,    59,    60,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    72,    72,
      72,    73,    73,    74,    75,    75,    76,    76,    77,    78,
      78,    79,    79
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     8,     7,     7,     6,
       3,     1,     2,     7,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     6,     8,     6,
       1,     1,     1,     1,     1,     4,     7,     6,     4,     7,
       7,    10,     3,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     2,     3,     7,    11,
       2,     7,     2,     9,     5,     2,     3,     1,     5,     4,
       3,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* inicio: lista_funciones programa  */
#line 57 "espanol.y"
    {
        ejecutar((yyvsp[0].nodo));
    }
#line 1353 "espanol.tab.c"
    break;

  case 3: /* inicio: programa  */
#line 61 "espanol.y"
    {
        ejecutar((yyvsp[0].nodo));
    }
#line 1361 "espanol.tab.c"
    break;

  case 4: /* lista_funciones: lista_funciones definicion_funcion  */
#line 67 "espanol.y"
                                        { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 1367 "espanol.tab.c"
    break;

  case 5: /* lista_funciones: definicion_funcion  */
#line 68 "espanol.y"
                                        { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1373 "espanol.tab.c"
    break;

  case 6: /* definicion_funcion: tipo ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C  */
#line 73 "espanol.y"
    {
        registrar_funcion((yyvsp[-6].cadena), param_nombres, num_params_actual, (yyvsp[-1].nodo));
        num_params_actual = 0;
        (yyval.nodo) = NULL;
    }
#line 1383 "espanol.tab.c"
    break;

  case 7: /* definicion_funcion: tipo ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C  */
#line 79 "espanol.y"
    {
        registrar_funcion((yyvsp[-5].cadena), param_nombres, 0, (yyvsp[-1].nodo));
        (yyval.nodo) = NULL;
    }
#line 1392 "espanol.tab.c"
    break;

  case 8: /* definicion_funcion: ID LPAREN lista_parametros RPAREN LLAVE_A sentencias LLAVE_C  */
#line 84 "espanol.y"
    {
        registrar_funcion((yyvsp[-6].cadena), param_nombres, num_params_actual, (yyvsp[-1].nodo));
        num_params_actual = 0;
        (yyval.nodo) = NULL;
    }
#line 1402 "espanol.tab.c"
    break;

  case 9: /* definicion_funcion: ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C  */
#line 90 "espanol.y"
    {
        registrar_funcion((yyvsp[-5].cadena), param_nombres, 0, (yyvsp[-1].nodo));
        (yyval.nodo) = NULL;
    }
#line 1411 "espanol.tab.c"
    break;

  case 12: /* parametro: tipo ID  */
#line 103 "espanol.y"
    {
        strcpy(param_nombres[num_params_actual++], (yyvsp[0].cadena));
    }
#line 1419 "espanol.tab.c"
    break;

  case 13: /* programa: PROGRAMA ID LPAREN RPAREN LLAVE_A sentencias LLAVE_C  */
#line 110 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_PROGRAMA);
        n->izq = (yyvsp[-1].nodo);
        programa_ast = n;
        (yyval.nodo) = n;
    }
#line 1430 "espanol.tab.c"
    break;

  case 14: /* programa: PROGRAMA LPAREN RPAREN LLAVE_A sentencias LLAVE_C  */
#line 117 "espanol.y"
    {
        printf("[1;33mSugerencia: 'Programa' necesita un nombre. Ejemplo: Programa miPrograma()[0m\n");
        num_errores++;
        (yyval.nodo) = NULL;
    }
#line 1440 "espanol.tab.c"
    break;

  case 15: /* programa: PROGRAMA error LLAVE_A sentencias LLAVE_C  */
#line 123 "espanol.y"
    {
        printf("[1;33mSugerencia: verifica la declaracion de 'Programa nombre()'[0m\n");
        (yyval.nodo) = NULL;
    }
#line 1449 "espanol.tab.c"
    break;

  case 16: /* sentencias: sentencias sentencia  */
#line 131 "espanol.y"
    {
        (yyval.nodo) = agregar_sentencia((yyvsp[-1].nodo), (yyvsp[0].nodo));
    }
#line 1457 "espanol.tab.c"
    break;

  case 17: /* sentencias: sentencia  */
#line 135 "espanol.y"
    {
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 1465 "espanol.tab.c"
    break;

  case 18: /* sentencia: declaracion  */
#line 141 "espanol.y"
                       { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1471 "espanol.tab.c"
    break;

  case 19: /* sentencia: asignacion  */
#line 142 "espanol.y"
                       { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1477 "espanol.tab.c"
    break;

  case 20: /* sentencia: sentencia_si  */
#line 143 "espanol.y"
                       { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1483 "espanol.tab.c"
    break;

  case 21: /* sentencia: sentencia_mientras  */
#line 144 "espanol.y"
                         { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1489 "espanol.tab.c"
    break;

  case 22: /* sentencia: sentencia_hacer  */
#line 145 "espanol.y"
                       { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1495 "espanol.tab.c"
    break;

  case 23: /* sentencia: sentencia_imprimir  */
#line 146 "espanol.y"
                         { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1501 "espanol.tab.c"
    break;

  case 24: /* sentencia: sentencia_retornar  */
#line 147 "espanol.y"
                         { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1507 "espanol.tab.c"
    break;

  case 25: /* sentencia: llamada_funcion PUNTOCOMA  */
#line 148 "espanol.y"
                                { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 1513 "espanol.tab.c"
    break;

  case 26: /* declaracion: tipo ID PUNTOCOMA  */
#line 153 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_DECLARACION);
        n->valor_cadena = strdup((yyvsp[-1].cadena));
        (yyval.nodo) = n;
    }
#line 1523 "espanol.tab.c"
    break;

  case 27: /* declaracion: tipo ID CORCHETE_A NUM_ENTERO CORCHETE_C PUNTOCOMA  */
#line 159 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_DECL);
        n->valor_cadena = strdup((yyvsp[-4].cadena));
        n->izq = nodo_entero((yyvsp[-2].entero));
        (yyval.nodo) = n;
    }
#line 1534 "espanol.tab.c"
    break;

  case 28: /* declaracion: tipo ID CORCHETE_A NUM_ENTERO COMA NUM_ENTERO CORCHETE_C PUNTOCOMA  */
#line 166 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_DECL);
        n->valor_cadena = strdup((yyvsp[-6].cadena));
        n->izq = nodo_entero((yyvsp[-4].entero) * (yyvsp[-2].entero));
        (yyval.nodo) = n;
    }
#line 1545 "espanol.tab.c"
    break;

  case 29: /* declaracion: CONSTANTE tipo ID ASIGN expresion PUNTOCOMA  */
#line 173 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[-3].cadena));
        n->der = (yyvsp[-1].nodo);
        (yyval.nodo) = n;
    }
#line 1556 "espanol.tab.c"
    break;

  case 30: /* tipo: ENTERO  */
#line 182 "espanol.y"
                { tipo_actual = TIPO_ENTERO; }
#line 1562 "espanol.tab.c"
    break;

  case 31: /* tipo: DECIMAL  */
#line 183 "espanol.y"
                { tipo_actual = TIPO_DECIMAL; }
#line 1568 "espanol.tab.c"
    break;

  case 32: /* tipo: BOLEANO  */
#line 184 "espanol.y"
                { tipo_actual = TIPO_BOLEANO; }
#line 1574 "espanol.tab.c"
    break;

  case 33: /* tipo: CARACTER  */
#line 185 "espanol.y"
                { tipo_actual = TIPO_CARACTER; }
#line 1580 "espanol.tab.c"
    break;

  case 34: /* tipo: DOBLE  */
#line 186 "espanol.y"
                { tipo_actual = TIPO_DECIMAL; }
#line 1586 "espanol.tab.c"
    break;

  case 35: /* asignacion: ID ASIGN expresion PUNTOCOMA  */
#line 193 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[-3].cadena));
        n->der = (yyvsp[-1].nodo);
        (yyval.nodo) = n;
    }
#line 1597 "espanol.tab.c"
    break;

  case 36: /* asignacion: ID ASIGN ID LPAREN argumentos RPAREN PUNTOCOMA  */
#line 200 "espanol.y"
    {
        Nodo* call = crear_nodo(NODO_LLAMADA);
        call->valor_cadena = strdup((yyvsp[-4].cadena));
        call->izq = (yyvsp[-2].nodo);
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[-6].cadena));
        n->der = call;
        (yyval.nodo) = n;
    }
#line 1611 "espanol.tab.c"
    break;

  case 37: /* asignacion: ID ASIGN ID LPAREN RPAREN PUNTOCOMA  */
#line 210 "espanol.y"
    {
        Nodo* call = crear_nodo(NODO_LLAMADA);
        call->valor_cadena = strdup((yyvsp[-3].cadena));
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[-5].cadena));
        n->der = call;
        (yyval.nodo) = n;
    }
#line 1624 "espanol.tab.c"
    break;

  case 38: /* asignacion: ID ASIGN expresion error  */
#line 219 "espanol.y"
    {
        printf("\033[1;33mSugerencia: falta ; despues de la asignacion de %s\033[0m\n", (yyvsp[-3].cadena));
        num_errores++;
        (yyval.nodo) = NULL;
    }
#line 1634 "espanol.tab.c"
    break;

  case 39: /* asignacion: ID ASIGN INGRESAR LPAREN CADENA RPAREN PUNTOCOMA  */
#line 225 "espanol.y"
    {
        Nodo* ing = crear_nodo(NODO_INGRESAR);
        ing->izq = nodo_cadena((yyvsp[-2].cadena));
        Nodo* n = crear_nodo(NODO_ASIGNACION);
        n->valor_cadena = strdup((yyvsp[-6].cadena));
        n->der = ing;
        (yyval.nodo) = n;
    }
#line 1647 "espanol.tab.c"
    break;

  case 40: /* asignacion: ID CORCHETE_A expresion CORCHETE_C ASIGN expresion PUNTOCOMA  */
#line 234 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_ASIGN);
        n->valor_cadena = strdup((yyvsp[-6].cadena));
        n->izq = (yyvsp[-4].nodo);
        n->der = (yyvsp[-1].nodo);
        (yyval.nodo) = n;
    }
#line 1659 "espanol.tab.c"
    break;

  case 41: /* asignacion: ID CORCHETE_A expresion CORCHETE_C ASIGN INGRESAR LPAREN CADENA RPAREN PUNTOCOMA  */
#line 242 "espanol.y"
    {
        Nodo* ing = crear_nodo(NODO_INGRESAR);
        ing->izq = nodo_cadena((yyvsp[-2].cadena));
        Nodo* n = crear_nodo(NODO_ARREGLO_ASIGN);
        n->valor_cadena = strdup((yyvsp[-9].cadena));
        n->izq = (yyvsp[-7].nodo);
        n->der = ing;
        (yyval.nodo) = n;
    }
#line 1673 "espanol.tab.c"
    break;

  case 42: /* expresion: expresion SUMA termino  */
#line 255 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_SUMA, (yyvsp[-2].nodo), (yyvsp[0].nodo));
    }
#line 1681 "espanol.tab.c"
    break;

  case 43: /* expresion: expresion RESTA termino  */
#line 259 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_RESTA, (yyvsp[-2].nodo), (yyvsp[0].nodo));
    }
#line 1689 "espanol.tab.c"
    break;

  case 44: /* expresion: termino  */
#line 262 "espanol.y"
              { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1695 "espanol.tab.c"
    break;

  case 45: /* termino: termino MULT factor  */
#line 267 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_MULT, (yyvsp[-2].nodo), (yyvsp[0].nodo));
    }
#line 1703 "espanol.tab.c"
    break;

  case 46: /* termino: termino DIV factor  */
#line 271 "espanol.y"
    {
        (yyval.nodo) = nodo_op(NODO_DIV, (yyvsp[-2].nodo), (yyvsp[0].nodo));
    }
#line 1711 "espanol.tab.c"
    break;

  case 47: /* termino: factor  */
#line 274 "espanol.y"
             { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1717 "espanol.tab.c"
    break;

  case 48: /* factor: NUM_ENTERO  */
#line 278 "espanol.y"
                        { (yyval.nodo) = nodo_entero((yyvsp[0].entero)); }
#line 1723 "espanol.tab.c"
    break;

  case 49: /* factor: NUM_DECIMAL  */
#line 279 "espanol.y"
                        { Nodo* n = crear_nodo(NODO_NUM_DECIMAL); n->valor_decimal = (yyvsp[0].decimal); (yyval.nodo) = n; }
#line 1729 "espanol.tab.c"
    break;

  case 50: /* factor: VERDADERO  */
#line 280 "espanol.y"
                        { (yyval.nodo) = nodo_entero(1); }
#line 1735 "espanol.tab.c"
    break;

  case 51: /* factor: FALSO  */
#line 281 "espanol.y"
                        { (yyval.nodo) = nodo_entero(0); }
#line 1741 "espanol.tab.c"
    break;

  case 52: /* factor: ID  */
#line 282 "espanol.y"
                        { (yyval.nodo) = nodo_id((yyvsp[0].cadena)); }
#line 1747 "espanol.tab.c"
    break;

  case 53: /* factor: ID CORCHETE_A expresion CORCHETE_C  */
#line 284 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_ARREGLO_ACCESO);
        n->valor_cadena = strdup((yyvsp[-3].cadena));
        n->izq = (yyvsp[-1].nodo);
        (yyval.nodo) = n;
    }
#line 1758 "espanol.tab.c"
    break;

  case 54: /* factor: LPAREN expresion RPAREN  */
#line 290 "espanol.y"
                              { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 1764 "espanol.tab.c"
    break;

  case 55: /* factor: llamada_funcion  */
#line 291 "espanol.y"
                        { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1770 "espanol.tab.c"
    break;

  case 56: /* factor: CADENA  */
#line 292 "espanol.y"
                        { (yyval.nodo) = nodo_cadena((yyvsp[0].cadena)); }
#line 1776 "espanol.tab.c"
    break;

  case 57: /* cond_simple: expresion MAYOR expresion  */
#line 296 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_MAYOR, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1782 "espanol.tab.c"
    break;

  case 58: /* cond_simple: expresion MENOR expresion  */
#line 297 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_MENOR, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1788 "espanol.tab.c"
    break;

  case 59: /* cond_simple: expresion MAYORIGUAL expresion  */
#line 298 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_MAYORIGUAL, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1794 "espanol.tab.c"
    break;

  case 60: /* cond_simple: expresion MENORIGUAL expresion  */
#line 299 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_MENORIGUAL, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1800 "espanol.tab.c"
    break;

  case 61: /* cond_simple: expresion IGUAL expresion  */
#line 300 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_IGUAL, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1806 "espanol.tab.c"
    break;

  case 62: /* cond_simple: expresion DIFERENTE expresion  */
#line 301 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_DIFERENTE, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1812 "espanol.tab.c"
    break;

  case 63: /* condicion: cond_simple  */
#line 305 "espanol.y"
                                     { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1818 "espanol.tab.c"
    break;

  case 64: /* condicion: condicion AND cond_simple  */
#line 306 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_AND, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1824 "espanol.tab.c"
    break;

  case 65: /* condicion: condicion OR cond_simple  */
#line 307 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_OR, (yyvsp[-2].nodo), (yyvsp[0].nodo)); }
#line 1830 "espanol.tab.c"
    break;

  case 66: /* condicion: NOT cond_simple  */
#line 308 "espanol.y"
                                     { (yyval.nodo) = nodo_op(NODO_NOT, (yyvsp[0].nodo), NULL); }
#line 1836 "espanol.tab.c"
    break;

  case 67: /* condicion: LPAREN condicion RPAREN  */
#line 309 "espanol.y"
                                     { (yyval.nodo) = (yyvsp[-1].nodo); }
#line 1842 "espanol.tab.c"
    break;

  case 68: /* sentencia_si: SI LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C  */
#line 314 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = (yyvsp[-4].nodo);
        n->der = (yyvsp[-1].nodo);
        n->extra = NULL;
        (yyval.nodo) = n;
    }
#line 1854 "espanol.tab.c"
    break;

  case 69: /* sentencia_si: SI LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C DELOCONTRARIO LLAVE_A sentencias LLAVE_C  */
#line 322 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_SI);
        n->izq = (yyvsp[-8].nodo);
        n->der = (yyvsp[-5].nodo);
        n->extra = (yyvsp[-1].nodo);
        (yyval.nodo) = n;
    }
#line 1866 "espanol.tab.c"
    break;

  case 70: /* sentencia_si: SI error  */
#line 330 "espanol.y"
    {
        sugerencia_error("si");
        num_errores++;
        (yyval.nodo) = NULL;
    }
#line 1876 "espanol.tab.c"
    break;

  case 71: /* sentencia_mientras: MIENTRAS LPAREN condicion RPAREN LLAVE_A sentencias LLAVE_C  */
#line 339 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_MIENTRAS);
        n->izq = (yyvsp[-4].nodo);
        n->der = (yyvsp[-1].nodo);
        (yyval.nodo) = n;
    }
#line 1887 "espanol.tab.c"
    break;

  case 72: /* sentencia_mientras: MIENTRAS error  */
#line 346 "espanol.y"
    {
        sugerencia_error("mientras");
        num_errores++;
        (yyval.nodo) = NULL;
    }
#line 1897 "espanol.tab.c"
    break;

  case 73: /* sentencia_hacer: HACER LLAVE_A sentencias LLAVE_C MIENTRAS LPAREN condicion RPAREN PUNTOCOMA  */
#line 355 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_HACER);
        n->izq = (yyvsp[-6].nodo);
        n->der = (yyvsp[-2].nodo);
        (yyval.nodo) = n;
    }
#line 1908 "espanol.tab.c"
    break;

  case 74: /* sentencia_imprimir: IMPRIMIR LPAREN params_imprimir RPAREN PUNTOCOMA  */
#line 365 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_IMPRIMIR);
        n->izq = (yyvsp[-2].nodo);
        (yyval.nodo) = n;
    }
#line 1918 "espanol.tab.c"
    break;

  case 75: /* sentencia_imprimir: IMPRIMIR error  */
#line 371 "espanol.y"
    {
        sugerencia_error("imprimir");
        num_errores++;
        (yyval.nodo) = NULL;
    }
#line 1928 "espanol.tab.c"
    break;

  case 76: /* params_imprimir: params_imprimir PUNTO factor  */
#line 380 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_CONCAT);
        n->izq = (yyvsp[-2].nodo);
        n->der = (yyvsp[0].nodo);
        (yyval.nodo) = n;
    }
#line 1939 "espanol.tab.c"
    break;

  case 77: /* params_imprimir: factor  */
#line 386 "espanol.y"
             { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1945 "espanol.tab.c"
    break;

  case 78: /* sentencia_retornar: RETORNAR LPAREN expresion RPAREN PUNTOCOMA  */
#line 391 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_RETORNAR);
        n->izq = (yyvsp[-2].nodo);
        (yyval.nodo) = n;
    }
#line 1955 "espanol.tab.c"
    break;

  case 79: /* llamada_funcion: ID LPAREN argumentos RPAREN  */
#line 400 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup((yyvsp[-3].cadena));
        n->izq = (yyvsp[-1].nodo);
        (yyval.nodo) = n;
    }
#line 1966 "espanol.tab.c"
    break;

  case 80: /* llamada_funcion: ID LPAREN RPAREN  */
#line 407 "espanol.y"
    {
        Nodo* n = crear_nodo(NODO_LLAMADA);
        n->valor_cadena = strdup((yyvsp[-2].cadena));
        (yyval.nodo) = n;
    }
#line 1976 "espanol.tab.c"
    break;

  case 81: /* argumentos: argumentos COMA expresion  */
#line 416 "espanol.y"
    {
        (yyval.nodo) = agregar_sentencia((yyvsp[-2].nodo), (yyvsp[0].nodo));
    }
#line 1984 "espanol.tab.c"
    break;

  case 82: /* argumentos: expresion  */
#line 419 "espanol.y"
                { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1990 "espanol.tab.c"
    break;


#line 1994 "espanol.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 422 "espanol.y"


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

        /* Generar codigo C si se paso -c como argumento */
        if (argc >= 3 && strcmp(argv[2], "-c") == 0) {
            char salida[256];
            strncpy(salida, argv[1], sizeof(salida));
            char* punto = strrchr(salida, '.');
            if (punto) *punto = '\0';
            strcat(salida, ".c");
            generar_codigo(programa_ast, salida);

            /* Compilar con gcc */
            char cmd[512];
            char exe[256];
            strncpy(exe, salida, sizeof(exe));
            punto = strrchr(exe, '.');
            if (punto) *punto = '\0';
            sprintf(cmd, "gcc -o %s %s", exe, salida);
            printf("\033[1;33mCompilando con gcc: %s\033[0m\n", cmd);
            system(cmd);
            printf("\033[1;32mEjecutable generado: %s\033[0m\n", exe);
        }
    } else if (num_errores > 0) {
        printf("\n\033[1;31mCompilacion fallida. Se encontraron %d error(es).\033[0m\n", num_errores);
    }

    fclose(yyin);
    return 0;
}
