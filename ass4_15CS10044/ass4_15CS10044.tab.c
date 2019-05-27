/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass4_15CS10044.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
int yyerror(const char *);
#include "ass4_15CS10044_translator.h"
#include <string.h>



#line 76 "ass4_15CS10044.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "ass4_15CS10044.tab.h".  */
#ifndef YY_YY_ASS4_15CS10044_TAB_H_INCLUDED
# define YY_YY_ASS4_15CS10044_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER_CONSTANT = 258,
    FLOAT_CONSTANT = 259,
    CHAR_CONSTANT = 260,
    IDENTIFIER = 261,
    STRING = 262,
    UNSIGNED = 263,
    BREAK = 264,
    RETURN = 265,
    VOID = 266,
    CASE = 267,
    FLOAT = 268,
    SHORT = 269,
    CHAR = 270,
    FOR = 271,
    SIGNED = 272,
    WHILE = 273,
    GOTO = 274,
    BOOL = 275,
    CONTINUE = 276,
    IF = 277,
    DEFAULT = 278,
    DO = 279,
    INT = 280,
    SWITCH = 281,
    DOUBLE = 282,
    LONG = 283,
    ELSE = 284,
    MATRIX = 285,
    PTR_OP = 286,
    INC_OP = 287,
    DEC_OP = 288,
    LSHIFT_OP = 289,
    RSHIFT_OP = 290,
    LEQ_OP = 291,
    GEQ_OP = 292,
    EQ_OP = 293,
    NEQ_OP = 294,
    AND_OP = 295,
    OR_OP = 296,
    MULA_OP = 297,
    DIVA_OP = 298,
    REMA_OP = 299,
    ADDA_OP = 300,
    SUBA_OP = 301,
    LSA_OP = 302,
    RSA_OP = 303,
    ANDA_OP = 304,
    POWA_OP = 305,
    ORA_OP = 306,
    TRA_OP = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "ass4_15CS10044.y" /* yacc.c:355  */

  int ival;
  float fval;
  char cval;
  char *sval;
  struct id_attribute id;
  struct expression_attribute exp;
  struct variable_declaration_attribute var_decl;
  union attribute initializer;
  quad_instr_types unary;
  int instr;
  struct list_node *node_attr;
  struct parameter_list *parameter_attr;
  

#line 185 "ass4_15CS10044.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS4_15CS10044_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 200 "ass4_15CS10044.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   692

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    65,    60,     2,
      54,    55,    61,    62,    59,    63,    58,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    73,
      66,    72,    67,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,    69,    75,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   110,   123,   135,   147,   152,   159,   166,
     228,   250,   264,   269,   274,   320,   362,   383,   388,   394,
     399,   404,   409,   415,   428,   452,   472,   484,   490,   494,
     593,   678,   756,   760,   857,   951,   956,   968,   982,   987,
    1000,  1013,  1026,  1040,  1045,  1058,  1072,  1077,  1091,  1096,
    1111,  1116,  1130,  1134,  1143,  1148,  1157,  1162,  1189,  1194,
    1279,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,
    1289,  1292,  1299,  1306,  1314,  1333,  1339,  1344,  1357,  1364,
    1370,  1420,  1473,  1482,  1491,  1497,  1508,  1514,  1523,  1532,
    1537,  1542,  1548,  1556,  1565,  1589,  1594,  1604,  1615,  1624,
    1629,  1644,  1650,  1656,  1662,  1672,  1682,  1699,  1705,  1710,
    1716,  1730,  1741,  1752,  1766,  1771,  1782,  1787,  1802,  1808,
    1813,  1819,  1824,  1833,  1838,  1844,  1850,  1855,  1859,  1865,
    1870,  1877,  1882,  1887,  1893,  1899,  1905,  1912,  1920,  1925,
    1933,  1943,  1961,  1969,  1982,  1991,  2005,  2010,  2016,  2020,
    2025,  2030,  2037,  2045,  2050,  2056,  2061,  2067,  2072,  2081,
    2086,  2094,  2099,  2106
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER_CONSTANT", "FLOAT_CONSTANT",
  "CHAR_CONSTANT", "IDENTIFIER", "STRING", "UNSIGNED", "BREAK", "RETURN",
  "VOID", "CASE", "FLOAT", "SHORT", "CHAR", "FOR", "SIGNED", "WHILE",
  "GOTO", "BOOL", "CONTINUE", "IF", "DEFAULT", "DO", "INT", "SWITCH",
  "DOUBLE", "LONG", "ELSE", "MATRIX", "PTR_OP", "INC_OP", "DEC_OP",
  "LSHIFT_OP", "RSHIFT_OP", "LEQ_OP", "GEQ_OP", "EQ_OP", "NEQ_OP",
  "AND_OP", "OR_OP", "MULA_OP", "DIVA_OP", "REMA_OP", "ADDA_OP", "SUBA_OP",
  "LSA_OP", "RSA_OP", "ANDA_OP", "POWA_OP", "ORA_OP", "TRA_OP", "\"then\"",
  "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "'{'", "'}'", "$accept", "primary-expression", "postfix-expression",
  "argument-expression-list", "unary-operator", "unary-expression",
  "cast-expression", "multiplicative-expression", "additive-expression",
  "shift-expression", "relational-expression", "equality-expression",
  "AND-expression", "exclusive-OR-expression", "inclusive-OR-expression",
  "logical-AND-expression", "logical-OR-expression",
  "conditional-expression", "assignment-expression", "assignment-operator",
  "expression", "constant-expression", "declaration",
  "declaration-specifiers", "init-declarator-list", "init-declarator",
  "type-specifiers", "declarator", "direct-declarator", "pointer",
  "parameter-type-list", "parameter-list", "parameter-declaration",
  "identifier-list", "initializer", "initializer-row-list",
  "initializer-row", "designation", "designator-list", "designator",
  "statement", "expression-statement", "labeled-statement",
  "compound-statement", "block-item-list", "block-item",
  "selection-statement", "iteration-statement", "jump-statement",
  "translation-unit", "external-declaration", "function-definition",
  "declaration-list", "M", "N", "F", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    40,    41,    91,    93,    46,    44,
      38,    42,    43,    45,    47,    37,    60,    62,    94,   124,
      63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -220

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-220)))

#define YYTABLE_NINF -164

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     662,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,    44,   662,   629,  -220,  -220,  -220,     3,   -55,
    -220,   -45,  -220,   125,    67,     6,  -220,  -220,  -220,   -44,
    -220,     3,  -220,   435,  -220,    44,   284,   -58,   357,   487,
      67,  -220,  -220,   -50,  -220,  -220,  -220,  -220,  -220,   573,
     573,   573,  -220,  -220,  -220,  -220,   425,     2,   -14,   573,
     618,  -220,    43,   -29,    97,    -5,   105,    53,    22,   -23,
      80,   -28,  -220,  -220,  -220,   256,  -220,  -220,  -220,  -220,
    -220,     3,    16,    82,  -220,    -4,  -220,    92,  -220,  -220,
    -220,    38,   573,   145,  -220,    52,    99,   435,   -31,  -220,
     573,   158,  -220,  -220,  -220,   549,   162,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,  -220,  -220,   102,
     108,   107,   182,   573,   127,  -220,   176,   110,   130,   120,
    -220,   140,  -220,  -220,   -10,  -220,  -220,  -220,  -220,  -220,
     123,  -220,  -220,  -220,  -220,  -220,  -220,   662,  -220,   189,
     144,  -220,   573,  -220,   146,  -220,   425,  -220,   425,  -220,
    -220,  -220,    71,  -220,  -220,    51,  -220,  -220,  -220,  -220,
    -220,  -220,    43,    43,   -29,   -29,    97,    97,    97,    97,
      -5,    -5,   105,    53,    22,   573,   573,  -220,   401,  -220,
    -220,    30,   133,   497,   153,   135,  -220,   573,   401,   401,
     573,  -220,  -220,   329,  -220,  -220,   573,  -220,  -220,    99,
    -220,   435,   154,  -220,   573,   -23,    80,   573,  -220,  -220,
     401,   529,  -220,   573,  -220,   157,  -220,  -220,    60,  -220,
     155,  -220,   573,  -220,   157,  -220,   561,   529,   157,   163,
     195,   401,  -220,    78,   148,   401,    63,  -220,   165,  -220,
     167,  -220,  -220,  -220,  -220,   401,  -220,  -220,   401,   573,
     573,  -220,   573,   401,  -220,   157,  -220,   157,  -220,   194,
     169,   171,  -220,  -220,  -220,   401,   401,  -220,  -220
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    90,    82,    86,    84,    83,    89,    91,    85,    87,
      88,   156,     0,    77,     0,   153,   155,    94,     0,   102,
      75,     0,    78,    80,    93,     0,    76,     1,   154,     0,
     101,     0,    74,     0,   159,     0,     0,     0,     0,     0,
      92,    95,    79,    80,     3,     4,     5,     2,     6,     0,
       0,     0,    19,    20,    21,    22,     0,     8,    23,     0,
      27,    28,    32,    35,    38,    43,    46,    48,    50,    52,
      54,    56,    58,   110,    81,     0,   160,   157,   158,   108,
     100,   107,     0,   103,   104,     0,    97,     0,    24,    25,
      71,     0,     0,     0,   115,     0,   112,     0,     0,   119,
       0,     0,    14,    15,    16,     0,     0,    27,    26,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   161,     0,
       2,     0,     0,     0,     0,   161,     0,     0,     0,     0,
     161,     0,   130,   135,     0,   138,   139,   125,   123,   124,
     161,   136,   126,   127,   128,   106,    98,     0,    99,     0,
       0,     7,     0,    73,     0,   122,     0,   111,     0,   114,
     118,   120,     0,    13,    11,     0,    17,    12,    59,    29,
      30,    31,    33,    34,    36,    37,    41,    42,    39,    40,
      44,    45,    47,    49,    51,     0,     0,   161,     0,   150,
     152,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,   129,   134,     0,   105,   109,     0,    72,   121,   113,
     117,     0,     0,    10,     0,    53,    55,     0,   131,   151,
       0,     0,   161,     0,   148,   162,   133,   161,     0,   137,
       0,   116,     0,    18,   162,   132,     0,     0,   162,     0,
       0,     0,    96,     0,     0,     0,     0,   162,     0,   161,
       0,   142,     9,   161,   147,     0,   161,   161,     0,     0,
       0,   146,     0,     0,   162,   162,    57,   162,   143,   140,
       0,     0,   161,   144,   161,     0,     0,   141,   145
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,  -220,  -220,  -220,   -49,   -22,    29,    39,    31,
      45,    93,    94,    98,    23,    24,  -220,   -87,    -9,  -220,
     -47,    95,   -21,     7,  -220,   208,  -220,    11,   221,   228,
    -220,  -220,    81,  -220,   -30,  -220,    73,    72,  -220,   156,
    -149,  -205,  -220,   139,  -220,    28,  -220,  -220,  -220,  -220,
     238,  -220,  -220,   -36,  -219,  -220
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    57,    58,   185,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    90,   120,
     154,   174,    11,    35,    21,    22,    13,    43,    24,    25,
      82,    83,    84,    85,    94,    95,    96,    97,    98,    99,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    14,
      15,    16,    36,   205,   139,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    89,    34,    74,    91,   173,    19,    12,   242,    17,
     107,    41,    17,   138,    31,    76,    75,   101,   102,   103,
      26,    12,    33,    23,    73,    92,   259,    93,    32,    29,
      87,   128,   129,   124,   125,   264,   256,   108,   104,   268,
     105,   180,  -162,   107,   106,    81,   136,    73,   276,   172,
      17,   168,   267,   182,   155,   169,   173,    18,   100,   238,
      18,   130,   131,   221,    19,   289,   290,   179,   291,   246,
     247,   166,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,    73,   172,
     135,   255,   165,   171,   107,   211,   186,   172,    18,   189,
     190,   191,   206,   239,   121,    19,   233,   122,   123,   214,
     234,   188,   271,   134,   219,   261,   274,    20,   275,   172,
     137,    38,   172,    39,   223,   176,   281,   177,   232,   284,
     172,   126,   127,     1,   288,   272,     2,   172,     3,     4,
       5,   167,     6,   132,   133,     7,   297,   298,   230,   170,
       8,   175,     9,   192,   193,    10,   107,   107,   178,   196,
     197,   198,   199,   227,   183,   194,   195,    73,   187,    73,
     245,   237,   207,   248,    81,    77,    78,   200,   201,   208,
     209,   213,   215,   216,   217,    44,    45,    46,    47,    48,
     254,   218,   241,   286,   220,   225,   258,    33,   222,  -163,
     226,   251,   155,   228,   240,   263,   257,   243,   244,   266,
     252,   260,   262,   270,    49,    50,   172,   250,   269,   273,
     277,   279,    73,   292,   293,   253,   294,   202,   235,   203,
     236,   107,   285,   278,   204,   287,    51,   280,   212,    42,
     282,   283,    52,    53,    54,    55,    40,    30,   224,   229,
     231,   249,    28,     0,   181,   210,   295,     0,   296,    44,
      45,    46,   140,    48,     1,   141,   142,     2,   143,     3,
       4,     5,   144,     6,   145,   146,     7,   147,   148,   149,
     150,     8,   151,     9,     0,     0,    10,     0,    49,    50,
       0,     0,     1,     0,     0,     2,     0,     3,     4,     5,
       0,     6,     0,     0,     7,     0,     0,     0,     0,     8,
      51,     9,     0,     0,    10,     0,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
      75,   153,    44,    45,    46,   140,    48,     1,   141,   142,
       2,   143,     3,     4,     5,   144,     6,   145,   146,     7,
     147,   148,   149,   150,     8,   151,     9,     0,    75,    10,
       0,    49,    50,    79,     0,     1,     0,     0,     2,     0,
       3,     4,     5,     0,     6,     0,     0,     7,     0,     0,
       0,     0,     8,    51,     9,     0,     0,    10,     0,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,    75,    44,    45,    46,   140,    48,     0,
     141,   142,    80,   143,     0,     0,     0,   144,     0,   145,
     146,     0,   147,   148,   149,   150,     0,   151,    44,    45,
      46,    47,    48,    49,    50,     0,     0,     0,    44,    45,
      46,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    49,    50,     0,
       0,    52,    53,    54,    55,     0,     0,    49,    50,     0,
       0,     0,     0,     0,   152,    75,     0,     0,     0,    51,
       0,    92,     0,    93,     0,    52,    53,    54,    55,    51,
      44,    45,    46,    47,    48,    52,    53,    54,    55,    56,
      44,    45,    46,    47,    48,     1,     0,     0,     2,    56,
       3,     4,     5,     0,     6,     0,     0,     7,     0,    49,
      50,     0,     8,     0,     9,     0,     0,    10,     0,    49,
      50,     0,    44,    45,    46,    47,    48,     0,     0,     0,
       0,    51,     0,     0,    86,     0,     0,    52,    53,    54,
      55,    51,    44,    45,    46,    47,    48,    52,    53,    54,
      55,    49,    50,     0,    44,    45,    46,    47,    48,     0,
     152,     0,     0,     0,     0,     0,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    49,    50,     0,     0,     0,     0,     0,
       0,     0,   152,    51,   184,    49,    50,     0,     0,    52,
      53,    54,    55,     0,     0,    51,   265,     0,     0,     0,
       0,    52,    53,    54,    55,     0,     0,    51,     0,    27,
       0,     0,     0,    52,    53,    54,    55,     1,     0,     0,
       2,     0,     3,     4,     5,     0,     6,     0,     0,     7,
       0,     0,     0,     0,     8,     0,     9,     0,     0,    10,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
       1,     0,     0,     2,     0,     3,     4,     5,     0,     6,
       0,     0,     7,     0,     0,     0,     0,     8,     0,     9,
     119,     0,    10
};

static const yytype_int16 yycheck[] =
{
      49,    50,    23,    33,    51,    92,    61,     0,   213,     6,
      59,    55,     6,    41,    59,    36,    74,    31,    32,    33,
      13,    14,    72,    12,    33,    56,   245,    58,    73,    18,
      39,    36,    37,    62,    63,   254,   241,    59,    52,   258,
      54,    72,    70,    92,    58,    38,    69,    56,   267,    59,
       6,    55,   257,   100,    75,    59,   143,    54,    56,   208,
      54,    66,    67,    73,    61,   284,   285,    97,   287,   218,
     219,    55,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,    97,    59,
      68,   240,    81,    55,   143,   142,   105,    59,    54,   121,
     122,   123,   138,    73,    61,    61,    55,    64,    65,   145,
      59,   120,   261,    60,   150,    55,   265,    73,    55,    59,
      40,    54,    59,    56,   160,    73,   275,    75,    57,   278,
      59,    34,    35,     8,   283,    57,    11,    59,    13,    14,
      15,    59,    17,    38,    39,    20,   295,   296,   178,    57,
      25,     6,    27,   124,   125,    30,   205,   206,    59,   128,
     129,   130,   131,   172,     6,   126,   127,   176,     6,   178,
     217,   207,    70,   220,   167,    36,    37,   132,   133,    71,
      73,    54,     6,    73,    54,     3,     4,     5,     6,     7,
     237,    71,   213,   280,    54,     6,   243,    72,    75,    74,
      56,   231,   223,    57,    71,   252,   242,    54,    73,   256,
      56,   247,    57,    18,    32,    33,    59,   226,    55,    71,
      55,    54,   231,    29,    55,   234,    55,   134,   205,   135,
     206,   280,   279,   269,   136,   282,    54,   273,   143,    31,
     276,   277,    60,    61,    62,    63,    25,    19,   167,   176,
     178,   223,    14,    -1,    98,    73,   292,    -1,   294,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    30,    -1,    32,    33,
      -1,    -1,     8,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,
      54,    27,    -1,    -1,    30,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    74,    30,
      -1,    32,    33,     6,    -1,     8,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,    54,    27,    -1,    -1,    30,    -1,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,     3,     4,     5,     6,     7,    -1,
       9,    10,    55,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    -1,    21,    22,    23,    24,    -1,    26,     3,     4,
       5,     6,     7,    32,    33,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    32,    33,    -1,
      -1,    60,    61,    62,    63,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    54,
      -1,    56,    -1,    58,    -1,    60,    61,    62,    63,    54,
       3,     4,     5,     6,     7,    60,    61,    62,    63,    74,
       3,     4,     5,     6,     7,     8,    -1,    -1,    11,    74,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    32,
      33,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,    32,
      33,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    -1,    60,    61,    62,
      63,    54,     3,     4,     5,     6,     7,    60,    61,    62,
      63,    32,    33,    -1,     3,     4,     5,     6,     7,    -1,
      73,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    32,    33,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    54,    55,    32,    33,    -1,    -1,    60,
      61,    62,    63,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    -1,    -1,    54,    -1,     0,
      -1,    -1,    -1,    60,    61,    62,    63,     8,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    30,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       8,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    27,
      72,    -1,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    11,    13,    14,    15,    17,    20,    25,    27,
      30,    98,    99,   102,   125,   126,   127,     6,    54,    61,
      73,   100,   101,   103,   104,   105,    99,     0,   126,   103,
     105,    59,    73,    72,    98,    99,   128,   131,    54,    56,
     104,    55,   101,   103,     3,     4,     5,     6,     7,    32,
      33,    54,    60,    61,    62,    63,    74,    77,    78,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,   110,    74,    98,   119,   119,     6,
      55,    99,   106,   107,   108,   109,    57,    94,    81,    81,
      94,    96,    56,    58,   110,   111,   112,   113,   114,   115,
      56,    31,    32,    33,    52,    54,    58,    81,    82,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    72,
      95,    61,    64,    65,    62,    63,    34,    35,    36,    37,
      66,    67,    38,    39,    60,    68,    69,    40,    41,   130,
       6,     9,    10,    12,    16,    18,    19,    21,    22,    23,
      24,    26,    73,    75,    96,    98,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   103,    55,    59,    55,    59,
      57,    55,    59,    93,    97,     6,    73,    75,    59,   110,
      72,   115,    96,     6,    55,    79,    94,     6,    94,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    85,    85,
      86,    86,    87,    88,    89,   129,   129,    70,    71,    73,
      73,    96,    97,    54,   129,     6,    73,    54,    71,   129,
      54,    73,    75,   129,   108,     6,    56,    94,    57,   112,
     110,   113,    57,    55,    59,    90,    91,   129,   116,    73,
      71,    98,   117,    54,    73,    96,   116,   116,    96,   121,
      94,   110,    56,    94,    96,   116,   117,   129,    96,   130,
     129,    55,    57,    96,   130,    55,    96,   117,   130,    55,
      18,   116,    57,    71,   116,    55,   130,    55,   129,    54,
     129,   116,   129,   129,   116,    96,    93,    96,   116,   130,
     130,   130,    29,    55,    55,   129,   129,   116,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    81,    81,    82,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    96,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     104,   105,   105,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   113,   114,
     114,   115,   115,   116,   116,   116,   116,   116,   116,   117,
     117,   118,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   123,   123,   123,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   130,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     7,
       4,     3,     3,     3,     2,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     7,     3,     4,     4,
       3,     2,     1,     1,     1,     3,     2,     1,     1,     3,
       1,     3,     1,     3,     2,     1,     4,     3,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     4,     3,     3,     2,     1,     3,     1,     1,
       8,    11,     5,     8,     9,    12,     7,     6,     3,     2,
       2,     3,     2,     1,     2,     1,     1,     4,     4,     1,
       2,     0,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
      yychar = yylex ();
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
        case 2:
#line 99 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("primary-expression ->  IDENTIFIER\n");
					   		(yyvsp[0].id).loc = current->lookup((yyvsp[0].id).var);
	  						if(!((yyvsp[0].id).loc))
	  							(yyvsp[0].id).loc = global->lookup((yyvsp[0].id).var);
	  						(yyval.exp).loc = (yyvsp[0].id).loc;
	  						(yyval.exp).type = ((yyvsp[0].id).loc)->Type;
							(yyval.exp).mat = (yyval.exp).loc;
							(yyval.exp).mat_offset_loc = 0;
					   }
#line 1595 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("primary-expression ->  INTEGER_CONSTANT\n");
					   		(yyval.exp).val.int_data = (yyvsp[0].ival);
							(yyval.exp).type = new_node(INT_,-1,-1);
							(yyval.exp).loc = current->gentemp((yyval.exp).type);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%d",(yyvsp[0].ival));
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN);
					  		quad_array->emit(x);
					   }
#line 1611 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 124 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).val.double_data = (yyvsp[0].fval);
							(yyval.exp).type = new_node(DOUBLE_,-1,-1);
							(yyval.exp).loc = current->gentemp((yyval.exp).type);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%lf",(yyvsp[0].fval));
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN );
					  		quad_array->emit(x);
					   }
#line 1626 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 136 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).val.char_data = (yyvsp[0].cval);
					  		(yyval.exp).type = new_node(CHAR_,-1,-1);
					  		(yyval.exp).loc = current->gentemp((yyval.exp).type);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%c",(yyvsp[0].cval));
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN);
					  		quad_array->emit(x);
					   }
#line 1641 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 148 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		// do nothing
					   }
#line 1649 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 153 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp) = (yyvsp[-1].exp);
					   }
#line 1657 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 160 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	

							//printf("postfix-expression -> primary-expression\n");	
							(yyval.exp) = (yyvsp[0].exp);
						}
#line 1667 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 167 "ass4_15CS10044.y" /* yacc.c:1646  */
    {

							//printf("postfix-expression -> primary-expression [expression][expression]\n");
												  		
							(yyval.exp).mat = (yyvsp[-6].exp).mat;
							
							
							type_ds *temp = new_node(DOUBLE_,-1,-1);
							

							(yyval.exp).type = temp;
							symbol_table_fields *temp1, *temp2, *temp3;
							

							(yyval.exp).mat_offset_loc = current->gentemp(new_node(INT_,-1,-1));
					  		int m = DOUBLE_SIZE;
					  		char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
					  		char *arg2 = new char[10];
					  		sprintf(arg2,"%d",m);
							char *res = strdup(((yyval.exp).mat_offset_loc)->name);
					  		quad_fields x(arg1,arg2,res,INTO);
					  		quad_array->emit(x);
							
							
							temp1 = current->gentemp(new_node(INT_,-1,-1));
							m = *(((yyvsp[-6].exp).type)->r);
							arg1 = strdup(((yyvsp[-4].exp).loc)->name);
					  		arg2 = new char[10];
					  		sprintf(arg2,"%d",m);
							res = strdup((temp1)->name);
							quad_fields y(arg1,arg2,res,INTO);
					  		quad_array->emit(y);
							
	
							temp2 = current->gentemp(new_node(INT_,-1,-1));
							m = DOUBLE_SIZE;
							arg1 = strdup((temp1)->name);
					  		arg2 = new char[10];
					  		sprintf(arg2,"%d",m);
							res = strdup((temp2)->name);
							quad_fields z(arg1,arg2,res,INTO);
					  		quad_array->emit(z);

							
							temp3 = current->gentemp(new_node(INT_,-1,-1));
							arg1 = strdup((temp2)->name);
							arg2 = new char[10];
					  		sprintf(arg2,"8");
							res = strdup((temp3)->name);
							quad_fields w(arg1,arg2,res,PLUS);
					  		quad_array->emit(w);
			
							
							arg1 = strdup(((yyval.exp).mat_offset_loc)->name);
					  		arg2 = strdup((temp3)->name);
							res = strdup(((yyval.exp).mat_offset_loc)->name);
							quad_fields v(arg1,arg2,res,PLUS);
					  		quad_array->emit(v);
	
					  	}
#line 1732 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 229 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  			parameter_list *temp = (yyvsp[-1].parameter_attr);
					  			int count = 0;
					  			while(temp){
					  				char *arg1 = strdup((temp->parameter)->name);
					  				quad_fields x(arg1,0,0,PARAM);
					  				quad_array->emit(x);
					 		 				count++;
					  				temp = temp->next;
					  			}
					  			symbol_table_fields *t = global->lookup(((yyvsp[-3].exp).loc)->name);
					  			(yyval.exp).loc = current->gentemp(((((t->nestedTable)->table)[count]).Type));
					  			char *res = strdup(((yyval.exp).loc)->name);
					  			char *arg1 = strdup(((yyvsp[-3].exp).loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call);
					  			quad_array->emit(x);
					  			(yyval.exp).type = ((yyval.exp).loc)->Type;
					    }
#line 1757 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 251 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  			int count = 0;
					  			symbol_table_fields *t = global->lookup(((yyvsp[-2].exp).loc)->name);
					  			(yyval.exp).loc = current->gentemp(((((t->nestedTable)->table)[count]).Type));
					  			char *res = strdup(((yyval.exp).loc)->name);
					  			char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call);
					  			quad_array->emit(x);
					  			(yyval.exp).type = ((yyval.exp).loc)->Type;
					  	}
#line 1774 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 265 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		
					 	}
#line 1782 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 270 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		
					  	}
#line 1790 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 275 "ass4_15CS10044.y" /* yacc.c:1646  */
    {

								if(!(yyvsp[-1].exp).mat_offset_loc){
					  			(yyval.exp).loc = current->gentemp(((yyvsp[-1].exp).type));
							  	char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char *res = strdup(((yyval.exp).loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN);
							  	quad_array->emit(x);
							  	arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char* arg2 = new char[10];
							  	sprintf(arg2, "1");
							  	res = strdup(((yyvsp[-1].exp).loc)->name);
							  	quad_fields y(arg1,arg2,res,PLUS);
							  	quad_array->emit(y);
							  	(yyval.exp).type = (yyvsp[-1].exp).type;
							  	}

								else{
								(yyval.exp).loc = current->gentemp((yyvsp[-1].exp).type);
								char* arg1 = strdup(((yyvsp[-1].exp).loc)->name);
								char* arg2 = strdup(((yyvsp[-1].exp).mat_offset_loc)->name);
								char* res  = strdup(((yyval.exp).loc)->name);
								quad_fields x(arg1,arg2,res,EQ_BRACKET);
								quad_array->emit(x);

								symbol_table_fields* temp = current->gentemp((yyvsp[-1].exp).type);
								arg1 = strdup(((yyval.exp).loc)->name);
								arg2 = new char[10];
								sprintf(arg2, "1");
								res  = strdup(temp->name);
								quad_fields y(arg1,arg2,res,PLUS);
								quad_array->emit(y);
								arg1 = strdup(((yyvsp[-1].exp).loc)->name);
								arg2 = strdup(((yyvsp[-1].exp).mat_offset_loc)->name);
								res  = strdup(temp->name);
								quad_fields z(arg1,arg2,res,BRACKET_EQ);
								quad_array->emit(z);
								}	


								

		
					  	}
#line 1839 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 321 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					  		
						  		if(!(yyvsp[-1].exp).mat_offset_loc){
					  			(yyval.exp).loc = current->gentemp(((yyvsp[-1].exp).type));
							  	char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char *res = strdup(((yyval.exp).loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN);
							  	quad_array->emit(x);
							  	arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char* arg2 = new char[10];
							  	sprintf(arg2, "1");
							  	res = strdup(((yyvsp[-1].exp).loc)->name);
							  	quad_fields y(arg1,arg2,res,MINUS);
							  	quad_array->emit(y);
							  	(yyval.exp).type = (yyvsp[-1].exp).type;
							  	}

								else{
								(yyval.exp).loc = current->gentemp((yyvsp[-1].exp).type);
								char* arg1 = strdup(((yyvsp[-1].exp).loc)->name);
								char* arg2 = strdup(((yyvsp[-1].exp).mat_offset_loc)->name);
								char* res  = strdup(((yyval.exp).loc)->name);
								quad_fields x(arg1,arg2,res,EQ_BRACKET);
								quad_array->emit(x);

								symbol_table_fields* temp = current->gentemp((yyvsp[-1].exp).type);
								arg1 = strdup(((yyval.exp).loc)->name);
								arg2 = new char[10];
								sprintf(arg2, "1");
								res  = strdup(temp->name);
								quad_fields y(arg1,arg2,res,MINUS);
								quad_array->emit(y);
								arg1 = strdup(((yyvsp[-1].exp).loc)->name);
								arg2 = strdup(((yyvsp[-1].exp).mat_offset_loc)->name);
								res  = strdup(temp->name);
								quad_fields z(arg1,arg2,res,BRACKET_EQ);
								quad_array->emit(z);
								}	

					  	}
#line 1884 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 363 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					  		//printf("postfix-expression -> postfix-expression .'\n");
							int a;
			if((yyvsp[-1].exp).type->curr_type!=0) a = printf("Expected matrix in transpose operation\n");						type_ds* temp = new_node((yyvsp[-1].exp).type->curr_type, *((yyvsp[-1].exp).type->r), *((yyvsp[-1].exp).type->l));
							(yyval.exp).type = temp;
							(yyval.exp).loc = current->gentemp(temp);
							  	char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char *res = strdup(((yyval.exp).loc)->name);
							  	quad_fields x(arg1,0,res,TRA_OP_);
							  	quad_array->emit(x);							
							
					  	}
#line 1901 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 384 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							 	(yyval.parameter_attr) = make_param_list((yyvsp[0].exp).loc);
							 }
#line 1909 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 389 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						  	  	(yyval.parameter_attr) = merge_param_list((yyvsp[-2].parameter_attr),make_param_list((yyvsp[0].exp).loc));
						  	 }
#line 1917 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 395 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.unary) = U_ADDR;
					}
#line 1925 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 400 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
						(yyval.unary) = U_STAR;
					}
#line 1933 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 405 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.unary) = U_PLUS;
					}
#line 1941 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 410 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
						(yyval.unary) = U_MINUS;
					}
#line 1949 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 416 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
				  		if((yyvsp[0].exp).mat_offset_loc){
				  			(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type));
				  			char *arg1 = strdup(((yyvsp[0].exp).mat)->name);
				  			char *arg2 = strdup(((yyvsp[0].exp).mat_offset_loc)->name);
				  			char *res = strdup(((yyval.exp).loc)->name);
				  			quad_fields x(arg1,arg2,res,EQ_BRACKET);
				  			quad_array->emit(x);
						}
					}
#line 1965 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 429 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
						
						if((yyvsp[0].exp).type->curr_type == 0) { printf("LINE %d : Matrix not expected for INC_OP",line_count); return -1; }
						else{ 
						
				   		(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type));
					  	char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"1");
					  	char *res = strdup(((yyvsp[0].exp).loc)->name);
					  	quad_fields y(arg1,arg2,res,PLUS);
					  	quad_array->emit(y);
					  	arg1 = strdup(((yyvsp[0].exp).loc)->name);
					  	res = strdup(((yyval.exp).loc)->name);
					  	quad_fields x(arg1,0,res,ASSIGN);
					  	quad_array->emit(x);
					  	(yyval.exp).type = (yyvsp[0].exp).type;

					 
					}
				  
				   }
#line 1992 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 453 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	

						if((yyvsp[0].exp).type->curr_type == 0) { printf("LINE %d : Matrix not expected for DEC_OP",line_count); return -1; }
						else{
				   		(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type));
				  		char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
				  		char *arg2 = new char[10];
				  		sprintf(arg2,"1");
				  		char *res = strdup(((yyvsp[0].exp).loc)->name);
				  		quad_fields y(arg1,arg2,res,MINUS);
				  		quad_array->emit(y);
				  		arg1 = strdup(((yyvsp[0].exp).loc)->name);
				  		res = strdup(((yyval.exp).loc)->name);
				  		quad_fields x(arg1,0,res,ASSIGN);
				  		quad_array->emit(x);
				  		(yyval.exp).type = (yyvsp[0].exp).type;}
				  
				   }
#line 2015 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 473 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				   		(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type));
				  		char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
				  		char *res = strdup(((yyval.exp).loc)->name);
				  		quad_fields x(arg1,0,res,(yyvsp[-1].unary));
				  		quad_array->emit(x);
				  		(yyval.exp).type = (yyvsp[0].exp).type;
				  	
				   }
#line 2029 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 485 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
					}
#line 2037 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 491 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
									(yyval.exp) = (yyvsp[0].exp);
						      }
#line 2045 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 495 "ass4_15CS10044.y" /* yacc.c:1646  */
    {

									
									if((yyvsp[0].exp).type->curr_type == MATRIX_)				
										 (yyval.exp).type = (yyvsp[0].exp).type;
									else
										 (yyval.exp).type = (yyvsp[-2].exp).type;  

						   	  		if(typecheck_mulex((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
										
						  				(yyval.exp).loc = current->gentemp(((yyval.exp).type));
						  				char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  				char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  				char *res = strdup(((yyval.exp).loc)->name);
						  				quad_fields x(arg1,arg2,res,INTO);
						  				quad_array->emit(x);
																  											
						  	}
						  		
						  			else{
										
						  				symbol_table_fields *temp1, *temp2;
						  				
						  				if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == DOUBLE_){
						  					temp1 = current->gentemp((yyvsp[0].exp).type);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp((yyvsp[0].exp).type);
						  					arg1 = strdup(temp1->name);
						  					char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
							  				res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO);
						  					quad_array->emit(y);
						  					(yyval.exp).type = (yyvsp[0].exp).type;
						  				}
						  		

						  				else if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == CHAR_){
						  					temp1 = current->gentemp((yyvsp[-2].exp).type);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp((yyvsp[-2].exp).type);
						  					arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  					char *arg2 = strdup(temp1->name);
						  					res = strdup(temp2->name);
						  					quad_fields y(arg1,arg2,res,INTO);
						  					quad_array->emit(y);
						  					(yyval.exp).type = (yyvsp[-2].exp).type;
						  				}
						  		
							  			else if(((yyvsp[-2].exp).type)->curr_type == DOUBLE_ && ((yyvsp[0].exp).type)->curr_type == INT_){
							  				temp1 = current->gentemp((yyvsp[-2].exp).type);
							  				char *arg1 = new char[100];
							  				sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
							  				char *res = strdup(temp1->name);
							  				quad_fields x(arg1,0,res,ASSIGN);
							  				quad_array->emit(x);
							  				temp2 = current->gentemp((yyvsp[-2].exp).type);
							  				arg1 = strdup(((yyvsp[-2].exp).loc)->name);
							  				char *arg2 = strdup(temp1->name);
									  		res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO);
							  				quad_array->emit(y);
						  					(yyval.exp).type = (yyvsp[-2].exp).type;
						  				}
						  		

								  		else if(((yyvsp[-2].exp).type)->curr_type == CHAR_ && ((yyvsp[0].exp).type)->curr_type == INT_){
								  			temp1 = current->gentemp((yyvsp[0].exp).type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp((yyvsp[0].exp).type);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,INTO);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[0].exp).type;
								  			}

										else if(((yyvsp[-2].exp).type)->curr_type == MATRIX_ && ((yyvsp[0].exp).type)->curr_type == MATRIX_)
											{ printf("LINE %d :  Matrix multiplied not of proper dim\n",line_count); return -1 ;}


						  				
						  				(yyval.exp).loc = temp2;
						  			}	
						   	  }
#line 2147 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 594 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
								   	 if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
								  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
								  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
								  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  		char *res = strdup(((yyval.exp).loc)->name);
								  		quad_fields x(arg1,arg2,res,DIV);
								  		quad_array->emit(x);
								  		(yyval.exp).type = (yyvsp[-2].exp).type;
								  	}
								  	

								  	else{
								  		symbol_table_fields *temp1, *temp2;
								  		
								  		if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == DOUBLE_){
								  			temp1 = current->gentemp((yyvsp[0].exp).type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp((yyvsp[0].exp).type);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[0].exp).type;
								  		}
								  		

								  		else if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == CHAR_){
								  			temp1 = current->gentemp((yyvsp[-2].exp).type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp((yyvsp[-2].exp).type);
								  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[-2].exp).type;
								  		}
								  		

								  		else if(((yyvsp[-2].exp).type)->curr_type == DOUBLE_ && ((yyvsp[0].exp).type)->curr_type == INT_){
								  			temp1 = current->gentemp((yyvsp[-2].exp).type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp((yyvsp[-2].exp).type);
								  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[-2].exp).type;
								  		}
								  		
								  		else if(((yyvsp[-2].exp).type)->curr_type == CHAR_ && ((yyvsp[0].exp).type)->curr_type == INT_){
								  			temp1 = current->gentemp((yyvsp[0].exp).type);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp((yyvsp[0].exp).type);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[0].exp).type;
								  		}
								  		(yyval.exp).loc = temp2;
								  	}	
						   	  }
#line 2235 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 679 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
									   	  		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
									  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
									  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
									  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
									  		char *res = strdup(((yyval.exp).loc)->name);
									  		quad_fields x(arg1,arg2,res,PERCENT);
									  		quad_array->emit(x);
									  		(yyval.exp).type = (yyvsp[-2].exp).type;
									  	}
									  	else{
									  		symbol_table_fields *temp1, *temp2;
									  		if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == DOUBLE_){
									  			temp1 = current->gentemp((yyvsp[0].exp).type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp((yyvsp[0].exp).type);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[0].exp).type;
									  		}
									  		else if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == CHAR_){
									  			temp1 = current->gentemp((yyvsp[-2].exp).type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp((yyvsp[-2].exp).type);
									  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[-2].exp).type;
									  		}
									  		else if(((yyvsp[-2].exp).type)->curr_type == DOUBLE_ && ((yyvsp[0].exp).type)->curr_type == INT_){
									  			temp1 = current->gentemp((yyvsp[-2].exp).type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp((yyvsp[-2].exp).type);
									  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[-2].exp).type;
									  		}
									  		else if(((yyvsp[-2].exp).type)->curr_type == CHAR_ && ((yyvsp[0].exp).type)->curr_type == INT_){
									  			temp1 = current->gentemp((yyvsp[0].exp).type);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp((yyvsp[0].exp).type);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[0].exp).type;
									  		}
									  		(yyval.exp).loc = temp2;
									  	}
						   	  }
#line 2315 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 757 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);
						}
#line 2323 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 761 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		if(typecheck_addex((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		
							(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,PLUS);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
					  		}
					  	
						  	else{
				
								
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == DOUBLE_){
						  			temp1 = current->gentemp((yyvsp[0].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[0].exp).type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == CHAR_){
						  			temp1 = current->gentemp((yyvsp[-2].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[-2].exp).type);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->curr_type == DOUBLE_ && ((yyvsp[0].exp).type)->curr_type == INT_){
						  			temp1 = current->gentemp((yyvsp[-2].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[-2].exp).type);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  	
						  		else if(((yyvsp[-2].exp).type)->curr_type == CHAR_ && ((yyvsp[0].exp).type)->curr_type == INT_){
						  			temp1 = current->gentemp((yyvsp[0].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[0].exp).type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}
			else if((((yyvsp[-2].exp).type)->curr_type == INT_ || ((yyvsp[-2].exp).type)->curr_type == DOUBLE_ || ((yyvsp[-2].exp).type)->curr_type == CHAR_) && ((yyvsp[0].exp).type)->curr_type == MATRIX_)
				{ printf("LINE %d : Matrix cannot be added to int/double/char\n",line_count); return -1;}

			else if(((yyvsp[-2].exp).type)->curr_type == MATRIX_ &&(((yyvsp[0].exp).type)->curr_type == INT_ || ((yyvsp[0].exp).type)->curr_type == DOUBLE_ || ((yyvsp[0].exp).type)->curr_type == CHAR_))
				{ printf("LINE %d : Int/double/char cannot be added to matrix\n",line_count); return -1; }




							else if(((yyvsp[-2].exp).type)->curr_type == MATRIX_ && ((yyvsp[0].exp).type)->curr_type == MATRIX_)
							     { printf("LINE %d : Matrix added not of proper dimension\n",line_count);return -1; }			


						  		(yyval.exp).loc = temp2;
						  	}
					 	}
#line 2424 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 858 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		if(typecheck_addex((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,MINUS);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
					  		}
					  		
					  		else{
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == DOUBLE_){
						  			temp1 = current->gentemp((yyvsp[0].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[0].exp).type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == CHAR_){
						  			temp1 = current->gentemp((yyvsp[-2].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[-2].exp).type);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->curr_type == DOUBLE_ && ((yyvsp[0].exp).type)->curr_type == INT_){
						  			temp1 = current->gentemp((yyvsp[-2].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[-2].exp).type);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->curr_type == CHAR_ && ((yyvsp[0].exp).type)->curr_type == INT_){
						  			temp1 = current->gentemp((yyvsp[0].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp((yyvsp[0].exp).type);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}

			else if((((yyvsp[-2].exp).type)->curr_type == INT_ || ((yyvsp[-2].exp).type)->curr_type == DOUBLE_ || ((yyvsp[-2].exp).type)->curr_type == CHAR_) && ((yyvsp[0].exp).type)->curr_type == MATRIX_)
				 { printf("LINE %d : Matrix cannot be subtracted from int/double/char\n",line_count); return -1 ;}

			else if(((yyvsp[-2].exp).type)->curr_type == MATRIX_ &&(((yyvsp[0].exp).type)->curr_type == INT_ || ((yyvsp[0].exp).type)->curr_type == DOUBLE_ || ((yyvsp[0].exp).type)->curr_type == CHAR_))
				 { printf("LINE %d : Int/double/char cannot be subtracted from to matrix\n",line_count); return -1; }


								else if(((yyvsp[-2].exp).type)->curr_type == MATRIX_ && ((yyvsp[0].exp).type)->curr_type == MATRIX_)
									{ printf("LINE %d : Matrix subtracted not of proper dimension\n",line_count); return -1; }	
						  		(yyval.exp).loc = temp2;

					  		}
					 }
#line 2520 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 952 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
				  	}
#line 2528 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 957 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  	if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,SL);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
		  				}
				  	}
#line 2544 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 969 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,SR);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
				  		}
				  	}
#line 2560 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 983 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						  	(yyval.exp) = (yyvsp[0].exp);	
					   }
#line 2568 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 988 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_LT);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1,-1);
					   }
#line 2584 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 1001 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GT);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1,-1);
					   }
#line 2600 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1014 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_LTE);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1,-1);
					   }
#line 2616 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1027 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GTE);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1,-1);
					   }
#line 2632 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 1041 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);
					 	}
#line 2640 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1046 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		
						  	(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_EQ);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1,-1);
						}
#line 2657 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1059 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_NEQ);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1,-1);
					 	}
#line 2673 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1073 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
				}
#line 2681 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 1078 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
				  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
				  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
				  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
				  		char *res = strdup(((yyval.exp).loc)->name);
				  		quad_fields x(arg1,arg2,res,BW_AND);
				  		quad_array->emit(x);
				  		(yyval.exp).type = (yyvsp[-2].exp).type;
			  		}
				}
#line 2697 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 1092 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
									(yyval.exp) = (yyvsp[0].exp);
						 	}
#line 2705 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1097 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						 		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
							  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
							  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
							  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
							  		char *res = strdup(((yyval.exp).loc)->name);
							  		quad_fields x(arg1,arg2,res,BW_XOR);
							  		quad_array->emit(x);
							  		(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						 	}
#line 2721 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1112 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
								(yyval.exp) = (yyvsp[0].exp);
						 	}
#line 2729 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1117 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						 		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
						  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type));
						  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  		char *res = strdup(((yyval.exp).loc)->name);
						  		quad_fields x(arg1,arg2,res,BW_INOR);
						  		quad_array->emit(x);
						  		(yyval.exp).type = (yyvsp[-2].exp).type;
						  	}
						 	}
#line 2745 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1131 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);						}
#line 2752 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1135 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
							backpatch((yyvsp[-3].exp).FL,(yyvsp[-1].instr));
							(yyval.exp).TL = merge((yyvsp[-3].exp).TL,(yyvsp[0].exp).TL);
							(yyval.exp).FL = (yyvsp[0].exp).FL;
							(yyval.exp).type = new_node(BOOL_,-1,-1);
						}
#line 2763 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1144 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						  	(yyval.exp) = (yyvsp[0].exp);
					   }
#line 2771 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1149 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   	  	backpatch((yyvsp[-3].exp).FL,(yyvsp[-1].instr));
					  		(yyval.exp).TL = merge((yyvsp[-3].exp).TL,(yyvsp[0].exp).TL);
						  	(yyval.exp).FL = (yyvsp[0].exp).FL;
						  	(yyval.exp).type = new_node(BOOL_,-1,-1);
					   }
#line 2782 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1158 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);
						}
#line 2790 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1163 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp).loc = current->gentemp(((yyvsp[-4].exp).type));
						  	(yyval.exp).type = (yyvsp[-4].exp).type;
						  	char *res = strdup(((yyval.exp).loc)->name);
						  	char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,0,res,ASSIGN);
						  	quad_array->emit(x);
						  	list_node *l = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_);
						  	quad_array->emit(y);
						  	backpatch((yyvsp[-3].node_attr),next_instr);
						  	res = strdup(((yyval.exp).loc)->name);
						  	arg1 = strdup(((yyvsp[-4].exp).loc)->name);
						  	quad_fields z(arg1,0,res,ASSIGN);
						  	quad_array->emit(z);
						  	l = merge(l,makelist(next_instr));
						  	quad_fields a(0,0,0,GOTO_);
						  	quad_array->emit(a);
						  	backpatch((yyvsp[-7].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-8].exp));
						  	backpatch((yyvsp[-8].exp).TL,(yyvsp[-5].instr));
						  	backpatch((yyvsp[-8].exp).FL,(yyvsp[-1].instr));
						  	backpatch(l,next_instr);
						}
#line 2819 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1190 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp) = (yyvsp[0].exp);
					   }
#line 2827 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1195 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				//printf("assignment-expression -> unary-expression assignment-operator assignment-expression \n");		
					   		if(typecheck_addex((yyvsp[-2].exp).type,(yyvsp[0].exp).type)){
								
						  		if((yyvsp[-2].exp).mat_offset_loc){
							  		
							  		char *arg1 = strdup(((yyvsp[-2].exp).mat)->name);
							  		char *arg2 = strdup(((yyvsp[-2].exp).mat_offset_loc)->name);
							  		char *res = strdup(((yyvsp[0].exp).loc)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ);
							  		quad_array->emit(x);
						  		}
						  		else{
							  		char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
								  	char *res = strdup(((yyvsp[-2].exp).loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN);
								  	quad_array->emit(x);
						  		}
					  		}
						  	
						  	else{
								
						  		symbol_table_fields *temp1, *temp2;
						  		if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == DOUBLE_){
						  			temp1 = current->gentemp((yyvsp[-2].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  		}
						  		else if(((yyvsp[-2].exp).type)->curr_type == INT_ && ((yyvsp[0].exp).type)->curr_type == CHAR_){
						  			temp1 = current->gentemp((yyvsp[0].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  			
						  		}
						  		else if(((yyvsp[-2].exp).type)->curr_type == DOUBLE_ && ((yyvsp[0].exp).type)->curr_type == INT_){
						  			temp1 = current->gentemp((yyvsp[0].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  		}
						  		else if(((yyvsp[-2].exp).type)->curr_type == CHAR_ && ((yyvsp[0].exp).type)->curr_type == INT_){
						  			temp1 = current->gentemp((yyvsp[-2].exp).type);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN);
						  			quad_array->emit(x);
						  		}

			else if((((yyvsp[-2].exp).type)->curr_type == INT_ || ((yyvsp[-2].exp).type)->curr_type == DOUBLE_ || ((yyvsp[-2].exp).type)->curr_type == CHAR_) && ((yyvsp[0].exp).type)->curr_type == MATRIX_)
								{printf("LINE %d : Matrix unassignable to int/double/char\n",line_count); return -1;}

			else if(((yyvsp[-2].exp).type)->curr_type == MATRIX_ &&(((yyvsp[0].exp).type)->curr_type == INT_ || ((yyvsp[0].exp).type)->curr_type == DOUBLE_ || ((yyvsp[0].exp).type)->curr_type == CHAR_))
								{printf("LINE %d : Int/double/char unassignable to matrix\n",line_count); return -1;}

								else if(((yyvsp[-2].exp).type)->curr_type == MATRIX_ && ((yyvsp[0].exp).type)->curr_type == MATRIX_)
								{printf("LINE %d : Matrix to be assigned not of proper dimension\n",line_count); return -1;}

						  		if((yyvsp[-2].exp).mat_offset_loc){
							  		//printf("%s\n",($1.loc)->name);
							  		char *arg1 = strdup(((yyvsp[-2].exp).mat)->name);
							  		char *arg2 = strdup(((yyvsp[-2].exp).mat_offset_loc)->name);
							  		char *res = strdup((temp1)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ);
							  		quad_array->emit(x);
						  		}
						  		else{
							  		char *arg1 = strdup((temp1)->name);
								  	char *res = strdup(((yyvsp[-2].exp).loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN);
								  	quad_array->emit(x);
						  		}
						  	}
					   }
#line 2914 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1279 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2920 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1280 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2926 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1281 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2932 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1282 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2938 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1283 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2944 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1284 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2950 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1285 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2956 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1286 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2962 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1287 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2968 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1288 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2974 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1289 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2980 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1293 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				
				//printf("expression -> assignment-expression\n");				
				(yyval.exp) = (yyvsp[0].exp);
			}
#line 2990 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1300 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				// 
			}
#line 2998 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1307 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 	
					 }
#line 3006 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1315 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				//printf("declaration  :  declaration-specifiers init-declarator-list ;\n");	 	
				
				if(flag1 == 1 && flag2 == 0){
		  		type_ds *temp = new_node(((yyvsp[-2].var_decl).type)->curr_type,-1,-1);
		  		char *temp1 = strdup("retVal");
		  		symbol_table_fields x(temp1,temp,0,(yyvsp[-2].var_decl).width,-1,0);
		  		temp_use->insert(x);
		  		temp = new_node(FUNCTION,-1,-1);
		  		symbol_table_fields y((yyvsp[-1].var_decl).var,temp,0,0,-1,temp_use);
		  		global->insert(y);
			  	}
			  	flag1 = 0;
			  	flag2 = 0;
			  	c = 0;
				
			 }
#line 3028 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1334 "ass4_15CS10044.y" /* yacc.c:1646  */
    {

			 }
#line 3036 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1340 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							
						}
#line 3044 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1345 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("declaration-specifiers : type-specifiers \n");
							if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl).type = (yyvsp[0].var_decl).type;
					  		(yyval.var_decl).width = (yyvsp[0].var_decl).width;
					  		t = (yyval.var_decl).type;
					  		w = (yyval.var_decl).width;
	  						}
						}
#line 3058 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1358 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("init-declarator-list  :  init-declarator  \n");
					  		if(flag1 == 1 && flag2 == 0)
	  						(yyval.var_decl).var = (yyvsp[0].var_decl).var;
					  }
#line 3068 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1365 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		 
					  }
#line 3076 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1371 "ass4_15CS10044.y" /* yacc.c:1646  */
    {

						//printf("init-declarator  : declarator  \n");
										 		
						if(flag1 == 0){
				
											  		
							type_ds *temp;
							
							if(!(yyvsp[0].var_decl).type)
							temp = new_node(t->curr_type,-1,-1); 
							else
							temp = (yyvsp[0].var_decl).type;
							
							int temp_size;
					  		
							if(temp->curr_type == PTR)
					  			temp_size = PTR_SIZE;
							

					  		else{
						  		switch(t->curr_type){
						  			case INT_ : temp_size = INT_SIZE;
						  					   break;
						  			case DOUBLE_ : temp_size = DOUBLE_SIZE;
						  						  break;
						  			case CHAR_   : temp_size = CHAR_SIZE;
						  						  break; 
									case MATRIX_ : temp_size = DOUBLE_SIZE;
												  break;
										
					  			}
					  		}
							if(t->curr_type == MATRIX_)
							temp_size = temp_size * (yyvsp[0].var_decl).width + 8;
							else
					  		temp_size = temp_size * (yyvsp[0].var_decl).width;
					  		symbol_table_fields x((yyvsp[0].var_decl).var,temp,0,temp_size,-1,0);
					  		current->insert(x);
					  		
				  		}
				  	
				  		else if(flag1 == 1 && flag2 == 0){
											  			
							(yyval.var_decl).var = (yyvsp[0].var_decl).var;
				  		}
							
     			 }
#line 3129 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1421 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					//printf("declarator = initializer  \n");
     			 		if(flag1 == 0){
					  		type_ds *temp ;

					  		if(!(yyvsp[-2].var_decl).type)
							temp = new_node(t->curr_type,-1,-1); 
							else
							temp = (yyvsp[-2].var_decl).type;
					  		
					  		void *value;
					  		int *v1;
					  		double *v2;
					  		char *v3;
					  		int temp_size;
							
					  		switch(t->curr_type){
					  			case INT_ : v1 = (int *)malloc(sizeof(int));
					  					   (*v1) = (yyvsp[0].initializer).int_data; 	
					  					   value = (void *)v1;
					  					   temp_size = INT_SIZE;
					  					   break;
					  			case DOUBLE_ : v2 = (double *)malloc(sizeof(double));
					  						//printf("HEYAAA %f\n", $3.double_data);
						  				    (*v2) = (yyvsp[0].initializer).double_data;
						  			    	    value = (void *)v2;
						  			  	    temp_size = DOUBLE_SIZE;
						  					   break;
					  			case CHAR_   :v3 = (char *)malloc(sizeof(char));
					  					   (*v3) = (yyvsp[0].initializer).char_data; 	
					  					   value = (void *)v3;
					  					   temp_size = CHAR_SIZE;
					  					   break;

					  			case MATRIX_ : 
					  							
												value = (void *)((yyvsp[0].initializer).v);
												break;
					  						   
					  			default     : value = 0; 	
					  		}
					  		if(t->curr_type == MATRIX_)
							temp_size = temp_size * (yyvsp[-2].var_decl).width + 8;
							else
					  		temp_size = temp_size * (yyvsp[-2].var_decl).width;					  		
					  		symbol_table_fields x((yyvsp[-2].var_decl).var,temp,value,temp_size,-1,0);
					  		current->insert(x);
					  	}
     			 }
#line 3183 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1474 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("type-specifiers  :  VOID   \n");				 		
						if(flag2 == 0 || flag1 == 0){
				  		(yyval.var_decl).type = new_node(VOID_,-1,-1);
				  		(yyval.var_decl).width = 0;
			  	}
				 }
#line 3195 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1483 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("type-specifiers  :  CHAR   \n");
				 		if(flag2 == 0 || flag1 == 0){
				  		(yyval.var_decl).type = new_node(CHAR_,-1,-1);
				  		(yyval.var_decl).width = CHAR_SIZE;
			  	}
				 }
#line 3207 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1492 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("type-specifiers  :  SHORT  \n");
				 		
				 }
#line 3216 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1498 "ass4_15CS10044.y" /* yacc.c:1646  */
    {		
						//printf("type-specifiers  :  INT   \n");		 		
												
						if(flag2 == 0 || flag1 == 0){
			  			(yyval.var_decl).type = new_node(INT_,-1,-1);
			  			(yyval.var_decl).width = INT_SIZE;
			  			}
						
				 }
#line 3230 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1509 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						
				 		
				 }
#line 3239 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1515 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("type-specifiers  :  DOUBLE   \n");
				 		if(flag2 == 0 || flag1 == 0){
			  			(yyval.var_decl).type = new_node(DOUBLE_,-1,-1);
			  			(yyval.var_decl).width = DOUBLE_SIZE;
			  	}
				 }
#line 3251 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1524 "ass4_15CS10044.y" /* yacc.c:1646  */
    {		
						//printf("type-specifiers  :  MATRIX   \n");
				 		if(flag2 == 0 || flag1 == 0){
			  			(yyval.var_decl).type = new_node(MATRIX_,-1,-1);
			  			(yyval.var_decl).width = 1;
			  			}
				 }
#line 3263 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1533 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("type-specifiers -> SIGNED\n");}
				 }
#line 3271 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1538 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				 		//printf("type-specifiers -> UNSIGNED\n");}
				 }
#line 3279 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1543 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("type-specifiers -> BOOL\n");}
				 }
#line 3287 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1549 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					if(flag1 == 0 || flag2 == 0){
			  		//$$.type = merge_node($2.type,$1.type);
			  		(yyval.var_decl).width = (yyvsp[0].var_decl).width;
			  		(yyval.var_decl).var = (yyvsp[0].var_decl).var;
		  	}
			}
#line 3299 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1557 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					//printf("declarator : direct-declarator   \n");
					(yyval.var_decl).type = (yyvsp[0].var_decl).type;
			  		(yyval.var_decl).var = (yyvsp[0].var_decl).var;
			  		(yyval.var_decl).width = (yyvsp[0].var_decl).width;
			}
#line 3310 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1566 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("direct-declarator  : IDENTIFIER   \n");
									   		
						if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl).var = (yyvsp[0].id).var;
						  	(yyval.var_decl).type = 0;
						  	(yyval.var_decl).width = 1;
							//printf("string is %s\n", $1.var);
						  	if(c == 0){
						  		
						  		symbol_table_fields *t = current->lookup((yyvsp[0].id).var);
							  	if(t){
							  		flag2 = 1;
							  		temp_use = (t->nestedTable);	// Set flag to handle multiple declaration
							        }												// (to be used in other actions)		
							  	else                                            
							  		flag2 = 0; 
							  	c++;	
						  	}
					  	}		
							   
					}
#line 3337 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1590 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("direct-declarator -> (declarator)\n");
				   }
#line 3345 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1595 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		if(flag1 == 0 || flag2 == 0){
					  		type_ds *temp = new_node(MATRIX_,(yyvsp[-4].exp).val.int_data,(yyvsp[-1].exp).val.int_data);
					  		(yyval.var_decl).type = temp;
					  		(yyval.var_decl).width = (yyvsp[-6].var_decl).width * (yyvsp[-4].exp).val.int_data * (yyvsp[-1].exp).val.int_data;
					  		(yyval.var_decl).var = (yyvsp[-6].var_decl).var;
					  	}
				   }
#line 3358 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1605 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				   		
					  	if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl).var = (yyvsp[-2].var_decl).var;
						  	(yyval.var_decl).type = (yyvsp[-2].var_decl).type;
						  	(yyval.var_decl).width = (yyvsp[-2].var_decl).width;
					  	}
					    
				   }
#line 3372 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1616 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					//printf("direct-declarator :  direct-declarator(parameter-type-list) \n");				   		
						flag1 = 1;										
					  	(yyval.var_decl).var = (yyvsp[-3].var_decl).var;
					  	(yyval.var_decl).type = 0;
					  	(yyval.var_decl).width = 1;
				   }
#line 3384 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1625 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("direct-declarator -> direct-declarator(identifier-list)\n");
				   }
#line 3392 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1630 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("direct-declarator -> direct-declarator( ) \n");
				   		flag1 = 1;
					  	if(flag2 == 0)
					  		temp_use = create_Symbol_Table();
					  	(yyval.var_decl).var = (yyvsp[-2].var_decl).var;
					  	(yyval.var_decl).type = 0;
					  	(yyval.var_decl).width = 1;
				   }
#line 3406 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1645 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		 	type_ds *temp = new_node(PTR,-1,-1);
	  		//$$.type = merge_node($2.type,temp);
		 }
#line 3415 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1651 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		 	(yyval.var_decl).type = new_node(PTR,-1,-1);
		 }
#line 3423 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1657 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("parameter-type-list -> parameter-list\n");
					 }
#line 3431 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1663 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					//printf("parameter-type-list -> parameter-declaration\n");
					if(flag2 == 0){										// An indication of the fact that function has not been
			  		temp_use = create_Symbol_Table();				// declared previously
			  		symbol_table_fields x((yyvsp[0].var_decl).var,(yyvsp[0].var_decl).type,0,(yyvsp[0].var_decl).width,-1,0); //Insert in sym tab of function(offset comp.in insert)
			  		temp_use->insert(x);
			  		}
				}
#line 3444 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1673 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					//printf("parameter-type-list -> parameter-list,parameter-declaration\n");					
					if(flag2 == 0){
			  		symbol_table_fields x((yyvsp[0].var_decl).var,(yyvsp[0].var_decl).type,0,(yyvsp[0].var_decl).width,-1,0); //Insert in sym tab of function(offset comp. in insert)
			  		temp_use->insert(x);
			  		}
				}
#line 3456 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1683 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("parameter-declaration -> declaration-specifiers declarator \n");
							if(flag2 == 0){	
							
							
							
							if(((yyvsp[-1].var_decl).type)->curr_type == MATRIX_)	
					  		(yyval.var_decl).type = (yyvsp[0].var_decl).type; 
							else
							(yyval.var_decl).type = (yyvsp[-1].var_decl).type;
					  		
							(yyval.var_decl).var = (yyvsp[0].var_decl).var;
					  		(yyval.var_decl).width = (yyvsp[-1].var_decl).width*(yyvsp[0].var_decl).width;
					  		}	
					   }
#line 3476 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1700 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		//printf("parameter-declaration -> declaration-specifiers\n");}
					   }
#line 3484 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1706 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 	//printf("identifier-list -> IDENTIFIER\n");}
				 }
#line 3492 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1711 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				 	//printf("identifier-list -> identifier-list, IDENTIFIER\n");}
				 }
#line 3500 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1717 "ass4_15CS10044.y" /* yacc.c:1646  */
    {

				
			 	
				
				if(!t->curr_type){				
				(yyval.initializer).v = new vector<double>;
			 	(*((yyval.initializer).v)).push_back(((yyvsp[0].exp).val.double_data));}
				else
				(yyval.initializer) = (yyvsp[0].exp).val;
			 	
			 }
#line 3517 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1731 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				
			 	//printf("initializer -> { initializer-row-list }\n");
			 	(yyval.initializer).v = new vector<double>;
			 	for(int i=0;i<(*((yyvsp[-1].initializer).v)).size();i++)
			 		{ (*((yyval.initializer).v)).push_back((*((yyvsp[-1].initializer).v))[i]); }
			 	
			 }
#line 3530 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1742 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							
					  		
					  		(yyval.initializer).v = new vector<double>;
			 				for(int i=0;i<(*((yyvsp[0].initializer).v)).size();i++)
			 					{ (*((yyval.initializer).v)).push_back((*((yyvsp[0].initializer).v))[i]); }
					  		
					  		//printf("initializer-row-list -> initializer-row\n");}
					  }
#line 3544 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1753 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		
					  		(yyval.initializer).v = new vector<double>;
			 				for(int i=0;i<(*((yyvsp[-2].initializer).v)).size();i++)
			 					(*((yyval.initializer).v)).push_back((*((yyvsp[-2].initializer).v))[i]);

			 				for(int i=0;i<(*((yyvsp[0].initializer).v)).size();i++)
			 					{ (*((yyval.initializer).v)).push_back((*((yyvsp[0].initializer).v))[i]);  }

					  		//printf("initializer-row-list -> initializer-row-list ; initializer-row\n");}
					  }
#line 3560 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1767 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("initializer-row -> designation initializer\n");}
				 }
#line 3568 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1772 "ass4_15CS10044.y" /* yacc.c:1646  */
    {  	
				 		
				 		//printf("initializer-row -> initializer\n");
				 		(yyval.initializer).v = new vector<double>;
				 		
			 				for(int i=0;i<(*((yyvsp[0].initializer).v)).size();i++)
			 					{ (*((yyval.initializer).v)).push_back((*((yyvsp[0].initializer).v))[i]); }
				 		
				 }
#line 3582 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1783 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("initializer-row -> initializer-row, designation initializer\n");}
				 }
#line 3590 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1788 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		
				 		(yyval.initializer).v = new vector<double>;
			 				for(int i=0;i<(*((yyvsp[-2].initializer).v)).size();i++)
			 					 (*((yyval.initializer).v)).push_back((*((yyvsp[-2].initializer).v))[i]);

			 				for(int i=0;i<(*((yyvsp[0].initializer).v)).size();i++)
			 					 { (*((yyval.initializer).v)).push_back((*((yyvsp[0].initializer).v))[i]); }
				 		
				 		//printf("initializer-row -> initializer-row, initializer\n");}
				 }
#line 3606 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1803 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
			 		//printf("designation -> designator-list =\n");}
			 }
#line 3614 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1809 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 	//printf("designator-list -> designator\n");}
				 }
#line 3622 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1814 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("designator-list -> designator-list designator\n");}
				 }
#line 3630 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1820 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					//printf("designator -> [constant-expression]");}
    		}
#line 3638 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1825 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
    				//printf("designator -> .IDENTIFIER");}
    		}
#line 3646 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1834 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		//printf("statement -> labeled-statement\n");}
		   }
#line 3654 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1839 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				//printf("statement -> labeled-statement\n");
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3663 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1845 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		//printf("statement -> expression-statement\n");
				(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3672 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1851 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3680 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1856 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3688 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1860 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3696 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1866 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("expression-statement -> expression ;\n");
					  }
#line 3704 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1871 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  	         //printf("expression-statement -> ;\n");
					  }
#line 3712 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1878 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("labeled-statement -> IDENTIFIER : statement\n");}
				   }
#line 3720 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1883 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				   		//printf("labeled-statement -> CASE constant-expression : statement\n");}
				   }
#line 3728 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1888 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("DEFAULT : statement\n");}
				   }
#line 3736 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1894 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[-1].exp);
							//printf("compound-statement -> {block-item-list}\n");
					}
#line 3745 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1900 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("compound-statement -> {}\n");
					}
#line 3753 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1906 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("block-item-list -> block-item\n");				 		 
						(yyval.exp) = (yyvsp[0].exp);
						
				 }
#line 3763 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1913 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("block-item-list -> block-item-list M block-item\n");				 		
						backpatch((yyvsp[-2].exp).NL,(yyvsp[-1].instr));
						(yyval.exp) = (yyvsp[0].exp);
				 }
#line 3773 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1921 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				//printf("block-item -> declaration\n");
			}
#line 3781 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1926 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				//printf("block-item -> statement\n");
				(yyval.exp) = (yyvsp[0].exp);
			}
#line 3790 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1934 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				//printf("selection-statement -> IF '(' expression N')' M statement N\n");					 
							backpatch((yyvsp[-4].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-5].exp));
						  	backpatch((yyvsp[-5].exp).TL,(yyvsp[-2].instr));
						  	(yyval.exp).NL = merge((yyvsp[-1].exp).NL,(yyvsp[-5].exp).FL);
						  	(yyval.exp).NL = merge((yyval.exp).NL,(yyvsp[0].node_attr));
					 }
#line 3803 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1944 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		list_node *l = 0;
						  	if(((yyvsp[-8].exp).type)->curr_type!=BOOL_){
						  		l = makelist(next_instr);
						  		quad_fields x(0,0,0,GOTO_);
						  		quad_array->emit(x);
						  	}
						  	backpatch((yyvsp[-7].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-8].exp));
						  	backpatch((yyvsp[-8].exp).TL,(yyvsp[-5].instr));
						  	backpatch((yyvsp[-8].exp).FL,(yyvsp[-1].instr));
						  	list_node *temp = merge((yyvsp[-3].node_attr),(yyvsp[-4].exp).NL);
						  	(yyval.exp).NL = merge(temp,(yyvsp[0].exp).NL);
						  	(yyval.exp).NL = merge((yyval.exp).NL,l);
					 }
#line 3823 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1962 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("selection-statement -> SWITCH (expression) statement\n");}
					 }
#line 3831 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1970 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		char *res = new char[10];
						  	sprintf(res,"%d",(yyvsp[-6].instr));
						  	quad_fields x(0,0,res,GOTO_);
						  	quad_array->emit(x);
						  	backpatch((yyvsp[-3].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-4].exp));
						  	backpatch((yyvsp[0].exp).NL,(yyvsp[-6].instr));
						  	backpatch((yyvsp[-4].exp).TL,(yyvsp[-1].instr));
						  	(yyval.exp).NL = (yyvsp[-4].exp).FL;
					 }
#line 3847 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1983 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		backpatch((yyvsp[-1].node_attr),next_instr);
					  		conv2Bool(&(yyvsp[-2].exp));
					  		backpatch((yyvsp[-2].exp).TL,(yyvsp[-7].instr));
					  		backpatch((yyvsp[-6].exp).NL,(yyvsp[-5].instr));
					  		(yyval.exp).NL = (yyvsp[-2].exp).FL;
					 }
#line 3859 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1992 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		backpatch((yyvsp[-3].node_attr),(yyvsp[-8].instr));
						  	list_node *l = makelist(next_instr);
						  	quad_fields x(0,0,0,GOTO_);
						  	quad_array->emit(x);
						  	(yyvsp[0].exp).NL = merge((yyvsp[0].exp).NL,l);
						  	backpatch((yyvsp[0].exp).NL,(yyvsp[-5].instr));
						  	backpatch((yyvsp[-6].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-7].exp));
						  	backpatch((yyvsp[-7].exp).TL,(yyvsp[-1].instr));
						  	(yyval.exp).NL = (yyvsp[-7].exp).FL;
					 }
#line 3876 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2006 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("FOR (declaration expression-opt ; expression ) statement\n");}
					 }
#line 3884 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2011 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("FOR (declaration expression-opt ; ) statement\n");}
					 }
#line 3892 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2017 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("jump-statement -> GOTO IDENTIFIER; \n");}
				}
#line 3900 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2021 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("jump-statement -> CONTINUE;\n");}
				}
#line 3908 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2026 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
						//printf("jump-statement -> BREAK;\n");}
				}
#line 3916 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2031 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
			  			quad_fields x(arg1,0,0,RETURN_EXP);
			  			quad_array->emit(x);
				}
#line 3926 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2038 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						quad_fields x(0,0,0,RETURN_);
	  					quad_array->emit(x);
				}
#line 3935 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2046 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		//printf("translation-unit -> external-declaration\n");
				  }
#line 3943 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2051 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		//printf("translation-unit -> translation-unit external-declaration\n");
				  }
#line 3951 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2057 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("external-declaration -> function-definition\n");
					  }
#line 3959 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2062 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("external-declaration -> declaration\n");
					  }
#line 3967 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2068 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("function-definition -> declaration-specifiers declarator declaration-list compound-statement\n");
					 }
#line 3975 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2073 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("function-definition -> declaration-specifiers declarator F compound-statement\n");					 			
							current = global;
					 }
#line 3984 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2082 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		//printf("declaration-list -> declaration\n");
				  }
#line 3992 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2087 "ass4_15CS10044.y" /* yacc.c:1646  */
    {		
				  		//printf("declaration-list -> declaration-list declaration\n");
				  }
#line 4000 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2094 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					(yyval.instr) = next_instr;
				}
#line 4008 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2099 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		(yyval.node_attr) = makelist(next_instr);
		quad_fields x(0,0,0,GOTO_);
		quad_array->emit(x);
	}
#line 4018 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2106 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		current = temp_use;
		int i;
		char *t;
		for(i=0;i<=global->curr_length;i++){
			if((((global->table)[i]).nestedTable) == current){
				t = strdup(((global->table)[i]).name);
				break;
			}
		}
		quad_fields x(t,0,0,Function);
		quad_array->emit(x);
		flag1 = 0;
		flag2 = 0;
		c = 0;
	}
#line 4039 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;


#line 4043 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
  return yyresult;
}
#line 2125 "ass4_15CS10044.y" /* yacc.c:1906  */
		


int yyerror(const char *s){
  printf("Parser Error : %s\n",s);
  return -1;
  
}
