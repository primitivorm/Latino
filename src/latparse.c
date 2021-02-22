/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "latparse.y" /* yacc.c:337  */


/*
The MIT License (MIT)

Copyright (c) Latino - Lenguaje de Programacion

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/* bison -y -oparse.c parse.y */
#define YYERROR_VERBOSE 1
#define YYDEBUG 1
#define YYENABLE_NLS 1
#define YYLEX_PARAM &yylval, &yylloc

#include <stddef.h>

#include "latino.h"
#include "latast.h"
#include "latlex.h"

#ifndef LAT_ERROR_FMT
#define LAT_ERROR_FMT "%s:%d:%d: %s\n"
#endif

#ifdef __linux
#include <libintl.h>
#define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#endif

int yyerror(struct YYLTYPE *yylloc_param, void *scanner, struct ast **root, const char *s);
int yylex (YYSTYPE * yylval_param,YYLTYPE * yylloc_param ,yyscan_t yyscanner);


#line 122 "latparse.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "latparse.h".  */
#ifndef YY_YY_LATPARSE_H_INCLUDED
# define YY_YY_LATPARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMERICO = 258,
    CADENA = 259,
    IDENTIFICADOR = 260,
    VAR_ARGS = 261,
    SI = 262,
    O_SI = 263,
    FIN = 264,
    SINO = 265,
    MIENTRAS = 266,
    REPETIR = 267,
    ROMPER = 268,
    CONTINUAR = 269,
    HASTA = 270,
    FUNCION = 271,
    DESDE = 272,
    RETORNO = 273,
    ELEGIR = 274,
    CASO = 275,
    DEFECTO = 276,
    ATRIBUTO = 277,
    VERDADERO = 278,
    FALSO = 279,
    NULO = 280,
    EXPONENTE = 281,
    PARA = 282,
    EN = 283,
    RANGO = 284,
    MAYOR_QUE = 285,
    MENOR_QUE = 286,
    MAYOR_IGUAL = 287,
    MENOR_IGUAL = 288,
    IGUAL_LOGICO = 289,
    DIFERENTE = 290,
    Y_LOGICO = 291,
    O_LOGICO = 292,
    INCREMENTO = 293,
    DECREMENTO = 294,
    CONCATENAR = 295,
    CONCATENAR_IGUAL = 296,
    MAS_IGUAL = 297,
    MENOS_IGUAL = 298,
    POR_IGUAL = 299,
    ENTRE_IGUAL = 300,
    MODULO_IGUAL = 301,
    REGEX = 302,
    GLOBAL = 303
  };
#endif
/* Tokens.  */
#define NUMERICO 258
#define CADENA 259
#define IDENTIFICADOR 260
#define VAR_ARGS 261
#define SI 262
#define O_SI 263
#define FIN 264
#define SINO 265
#define MIENTRAS 266
#define REPETIR 267
#define ROMPER 268
#define CONTINUAR 269
#define HASTA 270
#define FUNCION 271
#define DESDE 272
#define RETORNO 273
#define ELEGIR 274
#define CASO 275
#define DEFECTO 276
#define ATRIBUTO 277
#define VERDADERO 278
#define FALSO 279
#define NULO 280
#define EXPONENTE 281
#define PARA 282
#define EN 283
#define RANGO 284
#define MAYOR_QUE 285
#define MENOR_QUE 286
#define MAYOR_IGUAL 287
#define MENOR_IGUAL 288
#define IGUAL_LOGICO 289
#define DIFERENTE 290
#define Y_LOGICO 291
#define O_LOGICO 292
#define INCREMENTO 293
#define DECREMENTO 294
#define CONCATENAR 295
#define CONCATENAR_IGUAL 296
#define MAS_IGUAL 297
#define MENOS_IGUAL 298
#define POR_IGUAL 299
#define ENTRE_IGUAL 300
#define MODULO_IGUAL 301
#define REGEX 302
#define GLOBAL 303

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (ast **root, void *scanner);

#endif /* !YY_YY_LATPARSE_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   819

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

#define YYUNDEFTOK  2
#define YYMAXUTOK   303

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    54,     2,     2,
      59,    60,    52,    50,    64,    51,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    63,
       2,    49,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    66,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   150,   154,   155,   156,   157,   161,   165,
     172,   176,   180,   184,   188,   195,   199,   206,   207,   208,
     209,   213,   214,   215,   219,   223,   227,   231,   235,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   262,
     265,   269,   274,   279,   283,   284,   285,   286,   287,   288,
     289,   290,   294,   295,   299,   300,   301,   305,   306,   310,
     313,   319,   320,   322,   324,   326,   328,   330,   332,   333,
     337,   340,   343,   349,   356,   357,   363,   369,   371,   373,
     375,   381,   382,   386,   389,   392,   398,   400,   402,   408,
     409,   413,   419,   425,   429,   430,   431,   441,   442,   443,
     444,   450,   454,   458,   459,   460,   470,   474,   475,   476,
     480,   481
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERICO", "CADENA", "IDENTIFICADOR",
  "VAR_ARGS", "SI", "O_SI", "FIN", "SINO", "MIENTRAS", "REPETIR", "ROMPER",
  "CONTINUAR", "HASTA", "FUNCION", "DESDE", "RETORNO", "ELEGIR", "CASO",
  "DEFECTO", "ATRIBUTO", "VERDADERO", "FALSO", "NULO", "EXPONENTE", "PARA",
  "EN", "RANGO", "MAYOR_QUE", "MENOR_QUE", "MAYOR_IGUAL", "MENOR_IGUAL",
  "IGUAL_LOGICO", "DIFERENTE", "Y_LOGICO", "O_LOGICO", "INCREMENTO",
  "DECREMENTO", "CONCATENAR", "CONCATENAR_IGUAL", "MAS_IGUAL",
  "MENOS_IGUAL", "POR_IGUAL", "ENTRE_IGUAL", "MODULO_IGUAL", "REGEX",
  "GLOBAL", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'^'", "'?'",
  "':'", "'('", "')'", "'['", "']'", "';'", "','", "'{'", "'}'", "$accept",
  "constant_expression", "primary_expression", "unary_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_not_expression",
  "logical_and_expression", "logical_or_expression", "ternary_expression",
  "concat_expression", "expression", "program", "statement_list",
  "statement", "incdec_statement", "variable_access", "field_designator",
  "global_declaration", "declaration", "labeled_statements",
  "labeled_statement_case", "labeled_statement_case_case",
  "labeled_statement_default", "selection_statement", "osi_statements",
  "osi_statement", "iteration_statement", "jump_statement",
  "function_definition", "function_anonymous", "function_call",
  "argument_expression_list", "parameter_list", "list_new", "list_items",
  "dict_new", "dict_items", "dict_item", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    61,
      43,    45,    42,    47,    37,    33,    94,    63,    58,    40,
      41,    91,    93,    59,    44,   123,   125
};
# endif

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -109

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,   125,   -52,  -162,   237,   237,   125,    46,   -14,   237,
     237,    62,    64,  -162,    98,  -162,   111,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,   232,     9,  -162,  -162,  -162,   -15,
    -162,    11,  -162,  -162,  -162,   237,   237,   237,   237,   237,
     237,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,   405,  -162,   -12,  -162,    -7,  -162,  -162,
     405,    70,    18,    78,   440,  -162,   514,   322,  -162,  -162,
    -162,  -162,  -162,    56,  -162,  -162,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,    95,   106,    40,    40,
      40,   643,   475,    26,   675,    61,  -162,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   112,   237,   136,   237,   106,
      85,   237,   131,    93,   152,   108,  -162,  -162,   733,   733,
     733,   733,   733,   733,   733,   440,   103,   577,  -162,  -162,
    -162,  -162,   -43,  -162,   237,  -162,   237,   237,  -162,   107,
     194,   194,   194,   194,   194,   194,   762,   762,   733,   194,
     263,   263,    40,    40,    40,    33,   704,   237,  -162,   125,
     150,  -162,   610,  -162,   733,   -42,   237,  -162,   109,   125,
     125,  -162,  -162,  -162,   116,   125,  -162,   733,  -162,   237,
     405,   157,  -162,  -162,  -162,   125,   543,   148,  -162,  -162,
     237,   166,   733,   130,  -162,   167,    23,   131,   733,  -162,
     125,   169,  -162,   118,  -162,  -162,   125,   174,  -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    64,   109,     0,     0,     0,     0,     0,   104,
       0,   107,     0,    50,     0,    61,     0,    65,    55,    54,
      56,    57,    58,    59,    60,     0,    53,     2,     3,     4,
      48,     0,     5,     6,     7,     0,     0,     0,     0,   113,
     117,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    46,    40,     0,    47,    44,    45,    41,    42,    43,
       0,     0,     0,   107,    99,   100,     0,     0,    69,    70,
      66,     1,    51,     0,    62,    63,     0,     0,     0,     0,
       0,     0,     0,   104,     0,   104,     0,   107,     9,     8,
      24,     0,   114,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,   104,     0,     0,     0,    81,    82,    67,    72,    73,
      74,    75,    76,    77,    71,   105,     0,     0,    78,   110,
     111,   108,     0,    29,   113,   112,     0,   120,   116,    11,
      17,    18,    19,    20,    22,    21,    25,    26,    28,    23,
      16,    15,    12,    13,    14,    10,     0,     0,    87,     0,
       0,    91,     0,    96,    97,     0,     0,   106,     0,     0,
       0,    90,    80,   103,    68,     0,   115,   121,   119,     0,
       0,     0,    89,    92,    68,     0,     0,    84,    83,    86,
       0,     0,    27,    93,    88,     0,   107,     0,    79,   102,
       0,    95,   101,     0,    85,    94,     0,     0,    98
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -118,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,   229,  -162,    42,   -22,    19,     0,  -162,
    -162,    -6,    66,  -162,   -21,  -162,  -162,   -10,  -161,  -162,
    -162,   183,  -162,     2,   -47,   -50,  -162,    52,  -162,  -162,
      53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   135,    12,    13,    14,    54,    55,    17,
      18,    19,   124,   125,   179,   126,    20,   170,   171,    21,
      22,    23,    56,    57,    65,    25,    58,    93,    59,    95,
      96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    16,    24,    24,   178,    68,    16,   -64,    24,   193,
      73,    67,  -108,    70,    16,   -66,    24,   185,   195,    15,
      15,    86,    86,   -64,   -64,    15,    74,    75,     2,     3,
       4,   -66,   -66,    15,     5,     6,   136,   142,   138,     7,
       8,     9,    10,    26,   -64,    63,   -64,    83,    61,   116,
     193,    62,   -66,    16,   -66,    24,    72,   120,    85,    97,
      16,   127,    24,    67,    71,    70,    97,     2,     3,   175,
      87,    11,    15,    86,   177,   -49,     1,   119,     7,    15,
       2,     3,     4,     2,     3,   118,     5,     6,   145,   178,
     114,     7,     8,     9,    10,   115,   113,   114,   -52,     1,
     139,   140,   117,     2,     3,     4,   -52,   -52,   -52,     5,
       6,   141,     3,   -52,     7,     8,     9,    10,   -52,   -52,
     167,   168,   169,    11,  -107,   147,     1,   148,   122,   123,
       2,     3,     4,    73,    27,    28,     5,     6,   167,  -107,
     210,     7,     8,     9,    10,   173,    11,  -107,   176,    74,
      75,   180,    76,    77,    78,    79,    80,    81,   167,   192,
      82,   181,  -107,   183,   114,   200,   204,   197,   207,    16,
      83,    24,    84,    11,  -107,   209,   212,   167,   216,    16,
      16,    24,    24,   218,   213,    16,   214,    24,    15,  -107,
      16,   182,    24,   211,    69,    16,   186,    24,    15,    15,
     188,     0,     0,     0,    15,     0,    16,     0,    24,    15,
      16,   191,    24,     0,    15,     0,    16,     0,    24,     0,
      97,   198,   199,     0,     0,    15,     0,   201,     0,    15,
       0,     0,   203,    53,    60,    15,     0,   205,    64,    66,
      27,    28,    29,    30,   108,   109,   110,   111,   112,     0,
     113,   114,   215,    31,   -66,     0,     0,     0,   217,     0,
      32,    33,    34,     0,    88,    89,    90,    91,    92,    94,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    97,
       0,   -66,    37,   -66,     0,     0,    38,     0,    39,     0,
       0,     0,    40,     0,     0,   128,   129,   130,   131,   132,
     133,   134,     0,   137,     0,   110,   111,   112,     0,   113,
     114,     0,     0,     0,     0,     0,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,    73,   172,     0,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,     0,
       0,    82,     0,    92,     0,   187,    94,     0,     0,     0,
       0,    83,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,   196,     1,     0,     0,     0,
       2,     3,     4,     0,     0,     0,     5,     6,   202,     0,
       0,     7,     8,     9,    10,     0,     0,     0,     0,   208,
       0,    97,     0,     0,     0,    98,    99,   100,   101,   102,
     103,   104,   105,     0,     0,   106,     0,     0,     0,     0,
       0,     0,   107,    11,  -107,   108,   109,   110,   111,   112,
       0,   113,   114,     0,     0,     0,    97,     0,     0,  -107,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     106,     0,     0,     0,     0,     0,     0,   107,     0,     0,
     108,   109,   110,   111,   112,     0,   113,   114,     0,     0,
       0,    97,     0,     0,   121,    98,    99,   100,   101,   102,
     103,   104,   105,     0,     0,   106,     0,     0,     0,     0,
       0,     0,   107,     0,     0,   108,   109,   110,   111,   112,
       0,   113,   114,     0,   122,   123,     0,     0,     0,   144,
      97,     0,     0,     0,    98,    99,   100,   101,   102,   103,
     104,   105,     0,     0,   106,     0,     0,     0,     0,     0,
       0,   107,     0,     0,   108,   109,   110,   111,   112,    97,
     113,   114,     0,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,   106,     0,     0,     0,     0,     0,     0,
     107,     0,     0,   108,   109,   110,   111,   112,     0,   113,
     114,     0,     0,    97,     0,     0,   206,    98,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   106,     0,     0,
       0,     0,     0,     0,   107,     0,     0,   108,   109,   110,
     111,   112,     0,   113,   114,     0,    97,     0,     0,   184,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     106,     0,     0,     0,     0,     0,     0,   107,     0,     0,
     108,   109,   110,   111,   112,     0,   113,   114,     0,    97,
       0,     0,   194,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,   106,     0,     0,     0,     0,     0,     0,
     107,     0,     0,   108,   109,   110,   111,   112,     0,   113,
     114,    97,     0,   143,     0,    98,    99,   100,   101,   102,
     103,   104,   105,     0,     0,   106,     0,     0,     0,     0,
       0,     0,   107,     0,     0,   108,   109,   110,   111,   112,
      97,   113,   114,   146,    98,    99,   100,   101,   102,   103,
     104,   105,     0,     0,   106,     0,     0,     0,     0,     0,
       0,   107,     0,     0,   108,   109,   110,   111,   112,    97,
     113,   114,   189,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,   106,     0,     0,     0,     0,     0,     0,
     107,     0,     0,   108,   109,   110,   111,   112,    97,   113,
     114,     0,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,   108,   109,   110,   111,   112,     0,   113,   114
};

static const yytype_int16 yycheck[] =
{
       0,     1,     0,     1,   122,    11,     6,    22,     6,   170,
      22,    11,    64,    11,    14,    22,    14,    60,    60,     0,
       1,    64,    64,    38,    39,     6,    38,    39,     5,     6,
       7,    38,    39,    14,    11,    12,    83,    87,    85,    16,
      17,    18,    19,     1,    59,    59,    61,    59,     6,    61,
     211,     5,    59,    53,    61,    53,    14,    63,    49,    26,
      60,     5,    60,    63,     0,    63,    26,     5,     6,   119,
      59,    48,    53,    64,   121,     0,     1,    59,    16,    60,
       5,     6,     7,     5,     6,    15,    11,    12,    62,   207,
      57,    16,    17,    18,    19,    53,    56,    57,     0,     1,
       5,     6,    60,     5,     6,     7,     8,     9,    10,    11,
      12,     5,     6,    15,    16,    17,    18,    19,    20,    21,
       8,     9,    10,    48,    49,    64,     1,    66,    20,    21,
       5,     6,     7,    22,     3,     4,    11,    12,     8,    64,
      10,    16,    17,    18,    19,     9,    48,    49,    63,    38,
      39,    58,    41,    42,    43,    44,    45,    46,     8,     9,
      49,     9,    64,    60,    57,    49,     9,    58,    20,   169,
      59,   169,    61,    48,    49,     9,     9,     8,    60,   179,
     180,   179,   180,     9,   206,   185,   207,   185,   169,    64,
     190,   125,   190,   203,    11,   195,   144,   195,   179,   180,
     147,    -1,    -1,    -1,   185,    -1,   206,    -1,   206,   190,
     210,   169,   210,    -1,   195,    -1,   216,    -1,   216,    -1,
      26,   179,   180,    -1,    -1,   206,    -1,   185,    -1,   210,
      -1,    -1,   190,     4,     5,   216,    -1,   195,     9,    10,
       3,     4,     5,     6,    50,    51,    52,    53,    54,    -1,
      56,    57,   210,    16,    22,    -1,    -1,    -1,   216,    -1,
      23,    24,    25,    -1,    35,    36,    37,    38,    39,    40,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    26,
      -1,    59,    55,    61,    -1,    -1,    59,    -1,    61,    -1,
      -1,    -1,    65,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    -1,    52,    53,    54,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    22,   116,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    -1,
      -1,    49,    -1,   144,    -1,   146,   147,    -1,    -1,    -1,
      -1,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,     1,    -1,    -1,    -1,
       5,     6,     7,    -1,    -1,    -1,    11,    12,   189,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,   200,
      -1,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    -1,    -1,    -1,    26,    -1,    -1,    64,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    53,    54,    -1,    56,    57,    -1,    -1,
      -1,    26,    -1,    -1,    64,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      -1,    56,    57,    -1,    20,    21,    -1,    -1,    -1,    64,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    53,    54,    26,
      56,    57,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    51,    52,    53,    54,    -1,    56,
      57,    -1,    -1,    26,    -1,    -1,    63,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,
      53,    54,    -1,    56,    57,    -1,    26,    -1,    -1,    62,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    53,    54,    -1,    56,    57,    -1,    26,
      -1,    -1,    62,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    51,    52,    53,    54,    -1,    56,
      57,    26,    -1,    60,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      26,    56,    57,    58,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    53,    54,    26,
      56,    57,    58,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    51,    52,    53,    54,    26,    56,
      57,    -1,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    53,    54,    -1,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,     7,    11,    12,    16,    17,    18,
      19,    48,    81,    82,    83,    84,    85,    86,    87,    88,
      93,    96,    97,    98,   100,   102,    82,     3,     4,     5,
       6,    16,    23,    24,    25,    50,    51,    55,    59,    61,
      65,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    84,    85,    99,   100,   103,   105,
      80,    82,     5,    59,    80,   101,    80,    85,    88,    98,
     100,     0,    82,    22,    38,    39,    41,    42,    43,    44,
      45,    46,    49,    59,    61,    49,    64,    59,    80,    80,
      80,    80,    80,   104,    80,   106,   107,    26,    30,    31,
      32,    33,    34,    35,    36,    37,    40,    47,    50,    51,
      52,    53,    54,    56,    57,    82,    61,    82,    15,    59,
      88,    64,    20,    21,    89,    90,    92,     5,    80,    80,
      80,    80,    80,    80,    80,    80,   101,    80,   101,     5,
       6,     5,   102,    60,    64,    62,    58,    64,    66,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,     8,     9,    10,
      94,    95,    80,     9,    80,   102,    63,   101,    68,    91,
      58,     9,    89,    60,    62,    60,   104,    80,   107,    58,
      80,    82,     9,    95,    62,    60,    80,    58,    82,    82,
      49,    82,    80,    82,     9,    82,    63,    20,    80,     9,
      10,    94,     9,    83,    91,    82,    60,    82,     9
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    74,    74,    74,    75,    76,    77,    78,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    90,    91,    91,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    96,    96,    96,    97,
      97,    98,    99,   100,   101,   101,   101,   102,   102,   102,
     102,   102,   103,   104,   104,   104,   105,   106,   106,   106,
     107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     3,     4,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     6,
       2,     1,     1,     3,     2,     4,     3,     4,     6,     5,
       4,     1,     2,     3,     5,     4,     4,     4,    10,     2,
       2,     7,     6,     4,     0,     1,     3,     0,     1,     1,
       3,     3,     3,     0,     1,     3,     3,     0,     1,     3,
       0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
        yyerror (&yylloc, root, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, root, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ast **root, void *scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (root);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ast **root, void *scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, root, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ast **root, void *scanner)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , root, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, root, scanner); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ast **root, void *scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (root);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ast **root, void *scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 155 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_logico(1, (yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1750 "latparse.c" /* yacc.c:1652  */
    break;

  case 6:
#line 156 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_logico(0, (yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1756 "latparse.c" /* yacc.c:1652  */
    break;

  case 7:
#line 157 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nulo(NULL, (yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1762 "latparse.c" /* yacc.c:1652  */
    break;

  case 8:
#line 161 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_MENOS_UNARIO, (yyvsp[0].node), NULL, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1771 "latparse.c" /* yacc.c:1652  */
    break;

  case 9:
#line 165 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_MAS_UNARIO, (yyvsp[0].node), NULL, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1780 "latparse.c" /* yacc.c:1652  */
    break;

  case 10:
#line 172 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_POTENCIA, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1789 "latparse.c" /* yacc.c:1652  */
    break;

  case 11:
#line 176 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_POTENCIA, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1798 "latparse.c" /* yacc.c:1652  */
    break;

  case 12:
#line 180 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_MULTIPLICACION, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1807 "latparse.c" /* yacc.c:1652  */
    break;

  case 13:
#line 184 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_DIVISION, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1816 "latparse.c" /* yacc.c:1652  */
    break;

  case 14:
#line 188 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_MODULO, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1825 "latparse.c" /* yacc.c:1652  */
    break;

  case 15:
#line 195 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_RESTA, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1834 "latparse.c" /* yacc.c:1652  */
    break;

  case 16:
#line 199 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_SUMA, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        if((yyval.node) == NULL) YYABORT;
    }
#line 1843 "latparse.c" /* yacc.c:1652  */
    break;

  case 17:
#line 206 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_MAYOR_QUE, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1849 "latparse.c" /* yacc.c:1652  */
    break;

  case 18:
#line 207 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_MENOR_QUE, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1855 "latparse.c" /* yacc.c:1652  */
    break;

  case 19:
#line 208 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_MAYOR_IGUAL, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1861 "latparse.c" /* yacc.c:1652  */
    break;

  case 20:
#line 209 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_MENOR_IGUAL, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1867 "latparse.c" /* yacc.c:1652  */
    break;

  case 21:
#line 213 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_DESIGUALDAD, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1873 "latparse.c" /* yacc.c:1652  */
    break;

  case 22:
#line 214 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_IGUALDAD, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1879 "latparse.c" /* yacc.c:1652  */
    break;

  case 23:
#line 215 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_REGEX, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1885 "latparse.c" /* yacc.c:1652  */
    break;

  case 24:
#line 219 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_NO, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 1891 "latparse.c" /* yacc.c:1652  */
    break;

  case 25:
#line 223 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_Y, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1897 "latparse.c" /* yacc.c:1652  */
    break;

  case 26:
#line 227 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_O, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1903 "latparse.c" /* yacc.c:1652  */
    break;

  case 27:
#line 231 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_si((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1909 "latparse.c" /* yacc.c:1652  */
    break;

  case 28:
#line 235 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_CONCATENAR, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1915 "latparse.c" /* yacc.c:1652  */
    break;

  case 29:
#line 239 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1921 "latparse.c" /* yacc.c:1652  */
    break;

  case 48:
#line 258 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_LOAD_VAR_ARGS , NULL, NULL, 0, 0); }
#line 1927 "latparse.c" /* yacc.c:1652  */
    break;

  case 49:
#line 262 "latparse.y" /* yacc.c:1652  */
    { /* empty */
        *root = NULL;
    }
#line 1935 "latparse.c" /* yacc.c:1652  */
    break;

  case 50:
#line 265 "latparse.y" /* yacc.c:1652  */
    { *root = (yyvsp[0].node); }
#line 1941 "latparse.c" /* yacc.c:1652  */
    break;

  case 51:
#line 269 "latparse.y" /* yacc.c:1652  */
    {
        if((yyvsp[0].node)){
            (yyval.node) = latA_nodo(NODO_BLOQUE, (yyvsp[-1].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
        }
    }
#line 1951 "latparse.c" /* yacc.c:1652  */
    break;

  case 52:
#line 274 "latparse.y" /* yacc.c:1652  */
    {
        if((yyvsp[0].node)){
          (yyval.node) = latA_nodo(NODO_BLOQUE, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column);
        }
    }
#line 1961 "latparse.c" /* yacc.c:1652  */
    break;

  case 53:
#line 279 "latparse.y" /* yacc.c:1652  */
    { yyerrok; yyclearin;}
#line 1967 "latparse.c" /* yacc.c:1652  */
    break;

  case 62:
#line 294 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_INC, (yyvsp[-1].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 1973 "latparse.c" /* yacc.c:1652  */
    break;

  case 63:
#line 295 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_DEC, (yyvsp[-1].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 1979 "latparse.c" /* yacc.c:1652  */
    break;

  case 67:
#line 305 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_ATRIBUTO, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 1985 "latparse.c" /* yacc.c:1652  */
    break;

  case 68:
#line 306 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_LISTA_OBTENER_ELEMENTO, (yyvsp[-1].node), (yyvsp[-3].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 1991 "latparse.c" /* yacc.c:1652  */
    break;

  case 69:
#line 310 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_GLOBAL, (yyvsp[0].node), NULL, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
    }
#line 1999 "latparse.c" /* yacc.c:1652  */
    break;

  case 70:
#line 313 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_GLOBAL, (yyvsp[0].node), NULL, (yylsp[-1]).first_line, (yylsp[-1]).first_column);
    }
#line 2007 "latparse.c" /* yacc.c:1652  */
    break;

  case 71:
#line 319 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign((yyvsp[0].node), (yyvsp[-2].node)); }
#line 2013 "latparse.c" /* yacc.c:1652  */
    break;

  case 72:
#line 320 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign(
        (latA_nodo(NODO_CONCATENAR, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column)), (yyvsp[-2].node)); }
#line 2020 "latparse.c" /* yacc.c:1652  */
    break;

  case 73:
#line 322 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign(
        (latA_nodo(NODO_SUMA, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column)), (yyvsp[-2].node)); }
#line 2027 "latparse.c" /* yacc.c:1652  */
    break;

  case 74:
#line 324 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign(
        (latA_nodo(NODO_RESTA, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column)), (yyvsp[-2].node)); }
#line 2034 "latparse.c" /* yacc.c:1652  */
    break;

  case 75:
#line 326 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign(
        (latA_nodo(NODO_MULTIPLICACION, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column)), (yyvsp[-2].node)); }
#line 2041 "latparse.c" /* yacc.c:1652  */
    break;

  case 76:
#line 328 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign(
        (latA_nodo(NODO_DIVISION, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column)), (yyvsp[-2].node)); }
#line 2048 "latparse.c" /* yacc.c:1652  */
    break;

  case 77:
#line 330 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign(
        (latA_nodo(NODO_MODULO, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column)), (yyvsp[-2].node)); }
#line 2055 "latparse.c" /* yacc.c:1652  */
    break;

  case 78:
#line 332 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign((yyvsp[0].node), (yyvsp[-2].node)); }
#line 2061 "latparse.c" /* yacc.c:1652  */
    break;

  case 79:
#line 333 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_asign_le((yyvsp[0].node), (yyvsp[-5].node), (yyvsp[-3].node)); }
#line 2067 "latparse.c" /* yacc.c:1652  */
    break;

  case 80:
#line 337 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_CASOS, (yyvsp[-1].node), (yyvsp[0].node), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
    }
#line 2075 "latparse.c" /* yacc.c:1652  */
    break;

  case 81:
#line 340 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_CASOS, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column);
    }
#line 2083 "latparse.c" /* yacc.c:1652  */
    break;

  case 82:
#line 343 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_CASOS, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column);
    }
#line 2091 "latparse.c" /* yacc.c:1652  */
    break;

  case 83:
#line 349 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_CASO, (yyvsp[-1].node), (yyvsp[0].node), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
    }
#line 2099 "latparse.c" /* yacc.c:1652  */
    break;

  case 85:
#line 357 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_CASOS, (yyvsp[-3].node), (yyvsp[0].node), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
    }
#line 2107 "latparse.c" /* yacc.c:1652  */
    break;

  case 86:
#line 363 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_DEFECTO, NULL, (yyvsp[0].node), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
    }
#line 2115 "latparse.c" /* yacc.c:1652  */
    break;

  case 87:
#line 369 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_si((yyvsp[-2].node), (yyvsp[-1].node), NULL); }
#line 2122 "latparse.c" /* yacc.c:1652  */
    break;

  case 88:
#line 371 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_si((yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2129 "latparse.c" /* yacc.c:1652  */
    break;

  case 89:
#line 373 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_si((yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2136 "latparse.c" /* yacc.c:1652  */
    break;

  case 90:
#line 375 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_nodo(NODO_ELEGIR, (yyvsp[-2].node), (yyvsp[-1].node), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
    }
#line 2144 "latparse.c" /* yacc.c:1652  */
    break;

  case 93:
#line 386 "latparse.y" /* yacc.c:1652  */
    {
          (yyval.node) = latA_si((yyvsp[-1].node), (yyvsp[0].node), NULL);
    }
#line 2152 "latparse.c" /* yacc.c:1652  */
    break;

  case 94:
#line 389 "latparse.y" /* yacc.c:1652  */
    {
          (yyval.node) = latA_si((yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 2160 "latparse.c" /* yacc.c:1652  */
    break;

  case 95:
#line 392 "latparse.y" /* yacc.c:1652  */
    {
          (yyval.node) = latA_si((yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    }
#line 2168 "latparse.c" /* yacc.c:1652  */
    break;

  case 96:
#line 398 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_mientras((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2175 "latparse.c" /* yacc.c:1652  */
    break;

  case 97:
#line 400 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_hacer((yyvsp[0].node), (yyvsp[-2].node)); }
#line 2182 "latparse.c" /* yacc.c:1652  */
    break;

  case 98:
#line 403 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_desde((yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2189 "latparse.c" /* yacc.c:1652  */
    break;

  case 99:
#line 408 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_RETORNO, (yyvsp[0].node), NULL, (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 2195 "latparse.c" /* yacc.c:1652  */
    break;

  case 100:
#line 409 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_RETORNO, (yyvsp[0].node), NULL, (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 2201 "latparse.c" /* yacc.c:1652  */
    break;

  case 101:
#line 413 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_funcion((yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
    }
#line 2209 "latparse.c" /* yacc.c:1652  */
    break;

  case 102:
#line 419 "latparse.y" /* yacc.c:1652  */
    {
        (yyval.node) = latA_funcion(latA_var("anonima", (yylsp[-5]).first_line, (yylsp[-5]).first_column, false), (yyvsp[-3].node), (yyvsp[-1].node), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
    }
#line 2217 "latparse.c" /* yacc.c:1652  */
    break;

  case 103:
#line 425 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_FUNCION_LLAMADA, (yyvsp[-3].node), (yyvsp[-1].node), (yylsp[-3]).first_line, (yylsp[-3]).first_column); }
#line 2223 "latparse.c" /* yacc.c:1652  */
    break;

  case 104:
#line 429 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; }
#line 2229 "latparse.c" /* yacc.c:1652  */
    break;

  case 105:
#line 430 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_FUNCION_ARGUMENTOS, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 2235 "latparse.c" /* yacc.c:1652  */
    break;

  case 106:
#line 431 "latparse.y" /* yacc.c:1652  */
    {
        if((yyvsp[-2].node)->tipo == NODO_VAR_ARGS){
            printf(LAT_ERROR_FMT, filename, (yylsp[-2]).first_line, (yylsp[-2]).first_column, "Parametro VAR_ARGS (...) debe de ser el ultimo parametro");
            YYABORT;
        }
        (yyval.node) = latA_nodo(NODO_FUNCION_ARGUMENTOS, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
    }
#line 2247 "latparse.c" /* yacc.c:1652  */
    break;

  case 107:
#line 441 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; }
#line 2253 "latparse.c" /* yacc.c:1652  */
    break;

  case 108:
#line 442 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_FUNCION_PARAMETROS, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 2259 "latparse.c" /* yacc.c:1652  */
    break;

  case 109:
#line 443 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_FUNCION_PARAMETROS, (yyvsp[0].node), NULL, 0, 0); }
#line 2265 "latparse.c" /* yacc.c:1652  */
    break;

  case 110:
#line 444 "latparse.y" /* yacc.c:1652  */
    {
        if((yyvsp[-2].node)->izq->tipo == NODO_VAR_ARGS){
            printf(LAT_ERROR_FMT, (yylsp[0]).file_name, (yylsp[0]).first_line, (yylsp[0]).first_column, "Parametro VAR_ARGS (...) debe de ser el ultimo parametro");
            YYABORT;
        }
        (yyval.node) = latA_nodo(NODO_FUNCION_PARAMETROS, (yyvsp[0].node), (yyvsp[-2].node), (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 2276 "latparse.c" /* yacc.c:1652  */
    break;

  case 111:
#line 450 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_FUNCION_PARAMETROS, (yyvsp[0].node), (yyvsp[-2].node), 0, 0); }
#line 2282 "latparse.c" /* yacc.c:1652  */
    break;

  case 112:
#line 454 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_LISTA, (yyvsp[-1].node), NULL, (yylsp[-2]).first_line, (yylsp[-2]).first_column); }
#line 2288 "latparse.c" /* yacc.c:1652  */
    break;

  case 113:
#line 458 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; }
#line 2294 "latparse.c" /* yacc.c:1652  */
    break;

  case 114:
#line 459 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_LISTA_AGREGAR_ELEMENTO, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 2300 "latparse.c" /* yacc.c:1652  */
    break;

  case 115:
#line 460 "latparse.y" /* yacc.c:1652  */
    {
        if((yyvsp[-2].node)->tipo == NODO_LOAD_VAR_ARGS){
            printf(LAT_ERROR_FMT, filename, (yylsp[-2]).first_line, (yylsp[-2]).first_column, "Parametro VAR_ARGS (...) debe de ser el ultimo parametro");
            YYABORT;
        }
        (yyval.node) = latA_nodo(NODO_LISTA_AGREGAR_ELEMENTO, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[0]).first_line, (yylsp[0]).first_column);
    }
#line 2312 "latparse.c" /* yacc.c:1652  */
    break;

  case 116:
#line 470 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_DICCIONARIO, (yyvsp[-1].node), NULL, (yylsp[-1]).first_line, (yylsp[-1]).first_column); }
#line 2318 "latparse.c" /* yacc.c:1652  */
    break;

  case 117:
#line 474 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; }
#line 2324 "latparse.c" /* yacc.c:1652  */
    break;

  case 118:
#line 475 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_DICC_AGREGAR_ELEMENTO, (yyvsp[0].node), NULL, (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 2330 "latparse.c" /* yacc.c:1652  */
    break;

  case 119:
#line 476 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_DICC_AGREGAR_ELEMENTO, (yyvsp[0].node), (yyvsp[-2].node), (yylsp[0]).first_line, (yylsp[0]).first_column); }
#line 2336 "latparse.c" /* yacc.c:1652  */
    break;

  case 120:
#line 480 "latparse.y" /* yacc.c:1652  */
    { /* empty */ (yyval.node) = NULL; }
#line 2342 "latparse.c" /* yacc.c:1652  */
    break;

  case 121:
#line 481 "latparse.y" /* yacc.c:1652  */
    { (yyval.node) = latA_nodo(NODO_DICC_ELEMENTO, (yyvsp[-2].node), (yyvsp[0].node), (yylsp[-2]).first_line, (yylsp[-2]).first_column); }
#line 2348 "latparse.c" /* yacc.c:1652  */
    break;


#line 2352 "latparse.c" /* yacc.c:1652  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, root, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, root, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, root, scanner);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, root, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, root, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, root, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, root, scanner);
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
  return yyresult;
}
#line 484 "latparse.y" /* yacc.c:1918  */


//se define para analisis sintactico (bison)
int yyerror(struct YYLTYPE *yylloc_param, void *scanner, struct ast **root,
const char *s) {
  if(!parse_silent){
      fprintf(stderr, LAT_ERROR_FMT, yylloc_param->file_name,
        yylloc_param->first_line, yylloc_param->first_column,  s);
      exit(EXIT_FAILURE);
  }
  return 0;
}
