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


#line 75 "ass4_15CS10044.tab.c" /* yacc.c:339  */

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
#line 11 "ass4_15CS10044.y" /* yacc.c:355  */

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

#line 183 "ass4_15CS10044.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS4_15CS10044_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "ass4_15CS10044.tab.c" /* yacc.c:358  */

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
#define YYLAST   720

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

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
       0,    94,    94,   105,   117,   129,   141,   146,   153,   158,
     191,   213,   227,   232,   237,   253,   270,   276,   281,   287,
     292,   297,   302,   308,   321,   338,   356,   368,   374,   378,
     463,   548,   626,   630,   711,   794,   799,   811,   825,   830,
     843,   856,   869,   883,   888,   901,   915,   920,   934,   939,
     954,   959,   973,   977,   986,   991,  1000,  1005,  1032,  1037,
    1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,  1118,
    1119,  1122,  1127,  1134,  1142,  1158,  1164,  1169,  1181,  1187,
    1193,  1222,  1260,  1268,  1276,  1281,  1289,  1294,  1302,  1307,
    1312,  1317,  1323,  1331,  1339,  1360,  1365,  1375,  1386,  1394,
    1399,  1413,  1419,  1425,  1431,  1440,  1449,  1458,  1464,  1469,
    1475,  1480,  1486,  1491,  1497,  1502,  1507,  1512,  1519,  1525,
    1530,  1536,  1541,  1550,  1555,  1560,  1565,  1570,  1574,  1580,
    1585,  1592,  1597,  1602,  1608,  1613,  1619,  1624,  1631,  1636,
    1643,  1652,  1670,  1678,  1691,  1700,  1714,  1719,  1725,  1729,
    1734,  1739,  1746,  1754,  1759,  1765,  1770,  1776,  1781,  1789,
    1794,  1802,  1807,  1814
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

#define YYPACT_NINF -206

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-206)))

#define YYTABLE_NINF -164

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     253,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,    38,   253,   659,  -206,  -206,  -206,     5,   -42,
    -206,   -46,  -206,   197,   -14,    -1,  -206,  -206,  -206,   -24,
    -206,     5,  -206,   409,  -206,    38,   326,   -52,   607,   523,
     -14,  -206,  -206,   -38,  -206,  -206,  -206,  -206,  -206,   603,
     603,   603,  -206,  -206,  -206,  -206,   399,  -206,   113,   603,
     648,  -206,     4,    51,    74,   -20,    89,   -35,   -18,    54,
      15,   -32,  -206,  -206,  -206,   230,  -206,  -206,  -206,  -206,
    -206,     5,    70,    77,  -206,    -7,  -206,    83,  -206,  -206,
    -206,    41,   603,   137,  -206,    43,    88,   409,   -44,  -206,
     145,  -206,  -206,  -206,   542,   603,   153,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
     603,   603,   603,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   603,   603,   603,  -206,  -206,    90,
      92,    91,   503,   603,   112,  -206,   162,   107,   121,   110,
    -206,   128,  -206,  -206,   -41,  -206,  -206,  -206,  -206,  -206,
     108,  -206,  -206,  -206,  -206,  -206,  -206,   253,  -206,   178,
    -206,  -206,   603,  -206,   129,  -206,   399,  -206,   399,  -206,
    -206,  -206,  -206,  -206,    46,  -206,    60,  -206,  -206,  -206,
    -206,  -206,     4,     4,    51,    51,    74,    74,    74,    74,
     -20,   -20,    89,   -35,   -18,   603,   603,  -206,   375,  -206,
    -206,   -36,   114,   471,   133,   117,  -206,   603,   375,   375,
     603,  -206,  -206,   303,  -206,  -206,  -206,  -206,    88,  -206,
     409,  -206,   603,  -206,    54,    15,   603,  -206,  -206,   375,
     508,  -206,   603,  -206,   132,  -206,  -206,    47,  -206,  -206,
    -206,   132,  -206,   584,   508,   132,   138,   176,   375,   125,
     375,    48,  -206,   142,  -206,   144,  -206,  -206,  -206,   375,
    -206,  -206,   375,   603,   603,  -206,   603,   375,  -206,   132,
    -206,   132,  -206,   170,   146,   148,  -206,  -206,  -206,   375,
     375,  -206,  -206
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
       0,    14,    15,    16,     0,     0,     0,    27,    26,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   161,     0,
       2,     0,     0,     0,     0,   161,     0,     0,     0,     0,
     161,     0,   130,   135,     0,   138,   139,   125,   123,   124,
     161,   136,   126,   127,   128,   106,    98,     0,    99,     0,
      96,     7,     0,    73,     0,   122,     0,   111,     0,   114,
     118,   120,    13,    11,     0,    17,     0,    12,    59,    29,
      30,    31,    33,    34,    36,    37,    41,    42,    39,    40,
      44,    45,    47,    49,    51,     0,     0,   161,     0,   150,
     152,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,   129,   134,     0,   105,   109,    72,   121,   113,   117,
       0,    10,     0,     9,    53,    55,     0,   131,   151,     0,
       0,   161,     0,   148,   162,   133,   161,     0,   137,   116,
      18,   162,   132,     0,     0,   162,     0,     0,     0,     0,
       0,     0,   162,     0,   161,     0,   142,   161,   147,     0,
     161,   161,     0,     0,     0,   146,     0,     0,   162,   162,
      57,   162,   143,   140,     0,     0,   161,   144,   161,     0,
       0,   141,   145
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,  -206,  -206,  -206,   -49,   -33,     6,     8,   -67,
      21,    73,    69,    79,    11,     3,  -206,   -86,     0,  -206,
     -47,    75,   -21,     7,  -206,   182,  -206,    12,   194,   201,
    -206,  -206,    56,  -206,   -30,  -206,    45,    50,  -206,   160,
    -148,  -205,  -206,   102,  -206,    36,  -206,  -206,  -206,  -206,
     217,  -206,  -206,  -109,  -129,  -206
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    57,    58,   184,    59,    60,    61,    62,    63,    64,
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
      88,    89,    34,    74,    91,    17,   173,    12,   241,   138,
     107,    17,    92,    31,    93,    76,   128,   129,   172,    19,
      26,    12,    75,   172,    23,   134,   108,    32,   180,   206,
      29,    41,   221,    73,    33,   253,   214,   238,  -162,    87,
      38,   219,    39,   107,    17,    81,   130,   131,   168,   262,
     135,   223,   169,    18,   155,   137,    73,   173,   186,    18,
     237,   196,   197,   198,   199,   121,    19,   179,   122,   123,
     245,   246,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   189,   190,
     191,   252,    18,   165,   107,   211,   171,    73,   236,    19,
     172,   231,   258,   269,   185,   232,   172,   172,   126,   127,
     266,    20,   268,   124,   125,   256,   176,   233,   177,   172,
     188,   275,   259,   136,   278,   166,   263,   132,   133,   282,
     192,   193,   254,   270,   194,   195,   167,   257,    77,    78,
     170,   291,   292,   175,   100,   101,   102,   178,   229,   283,
     284,   182,   285,   200,   201,   272,   107,   107,   274,   187,
     207,   276,   277,   208,   209,   103,   213,   104,   215,   105,
     244,   106,   226,   247,    81,   217,    73,   289,    73,   290,
     216,   218,   220,   222,   225,   239,   227,   242,   280,   251,
     243,   172,   240,   264,   265,   255,   267,   271,   273,   286,
     249,   287,   155,   288,   203,     1,   261,   202,     2,   235,
       3,     4,     5,    42,     6,   204,   234,     7,   212,    40,
      30,   228,     8,   224,     9,   107,   279,    10,   230,   281,
      73,    28,   250,    44,    45,    46,   140,    48,     1,   141,
     142,     2,   143,     3,     4,     5,   144,     6,   145,   146,
       7,   147,   148,   149,   150,     8,   151,     9,   181,   248,
      10,     1,    49,    50,     2,     0,     3,     4,     5,    33,
       6,  -163,     0,     7,     0,     0,     0,     0,     8,     0,
       9,     0,     0,    10,    51,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,    75,   153,    44,    45,    46,   140,
      48,     1,   141,   142,     2,   143,     3,     4,     5,   144,
       6,   145,   146,     7,   147,   148,   149,   150,     8,   151,
       9,     0,     0,    10,     1,    49,    50,     2,     0,     3,
       4,     5,     0,     6,     0,     0,     7,     0,     0,     0,
       0,     8,     0,     9,     0,     0,    10,    51,     0,     0,
       0,     0,     0,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,    75,    44,    45,
      46,   140,    48,     0,   141,   142,     0,   143,     0,     0,
       0,   144,     0,   145,   146,     0,   147,   148,   149,   150,
      75,   151,    44,    45,    46,    47,    48,    49,    50,     0,
       0,     0,    44,    45,    46,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,    49,    50,     0,     0,    52,    53,    54,    55,     0,
       0,    49,    50,     0,     0,     0,     0,     0,   152,    75,
       0,     0,     0,    51,     0,    92,     0,    93,     0,    52,
      53,    54,    55,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    44,    45,    46,    47,    48,     1,
       0,     0,     2,    56,     3,     4,     5,     0,     6,     0,
       0,     7,     0,     0,     0,     0,     8,     0,     9,     0,
       0,    10,     0,    49,    50,     0,    44,    45,    46,    47,
      48,    44,    45,    46,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    44,    45,    46,    47,
      48,    52,    53,    54,    55,    49,    50,     0,     0,     0,
      49,    50,     0,     0,   152,    44,    45,    46,    47,    48,
       0,     0,     0,     0,     0,    49,    50,    51,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     0,    52,    53,
      54,    55,     0,     0,    49,    50,   210,    51,     0,     0,
      86,   152,     0,    52,    53,    54,    55,    44,    45,    46,
      47,    48,     0,     0,     0,     0,    51,   183,     0,     0,
       0,     0,    52,    53,    54,    55,    44,    45,    46,    47,
      48,     0,     0,    79,     0,     1,    49,    50,     2,     0,
       3,     4,     5,     0,     6,     0,     0,     7,     0,     0,
       0,     0,     8,     0,     9,    49,    50,    10,    51,   260,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,    27,
       0,     0,    80,    52,    53,    54,    55,     1,     0,     0,
       2,     0,     3,     4,     5,     0,     6,     0,     0,     7,
       0,     0,     0,     0,     8,     0,     9,     0,     0,    10,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119
};

static const yytype_int16 yycheck[] =
{
      49,    50,    23,    33,    51,     6,    92,     0,   213,    41,
      59,     6,    56,    59,    58,    36,    36,    37,    59,    61,
      13,    14,    74,    59,    12,    60,    59,    73,    72,   138,
      18,    55,    73,    33,    72,   240,   145,    73,    70,    39,
      54,   150,    56,    92,     6,    38,    66,    67,    55,   254,
      68,   160,    59,    54,    75,    40,    56,   143,   105,    54,
     208,   128,   129,   130,   131,    61,    61,    97,    64,    65,
     218,   219,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   121,   122,
     123,   239,    54,    81,   143,   142,    55,    97,   207,    61,
      59,    55,    55,    55,   104,    59,    59,    59,    34,    35,
     258,    73,   260,    62,    63,   244,    73,    57,    75,    59,
     120,   269,   251,    69,   272,    55,   255,    38,    39,   277,
     124,   125,   241,   262,   126,   127,    59,   246,    36,    37,
      57,   289,   290,     6,    31,    32,    33,    59,   178,   278,
     279,     6,   281,   132,   133,   264,   205,   206,   267,     6,
      70,   270,   271,    71,    73,    52,    54,    54,     6,    56,
     217,    58,   172,   220,   167,    54,   176,   286,   178,   288,
      73,    71,    54,    75,     6,    71,    57,    54,   274,   236,
      73,    59,   213,    55,    18,   242,    71,    55,    54,    29,
     230,    55,   223,    55,   135,     8,   253,   134,    11,   206,
      13,    14,    15,    31,    17,   136,   205,    20,   143,    25,
      19,   176,    25,   167,    27,   274,   273,    30,   178,   276,
     230,    14,   232,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    98,   223,
      30,     8,    32,    33,    11,    -1,    13,    14,    15,    72,
      17,    74,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,
      27,    -1,    -1,    30,    54,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,     8,    32,    33,    11,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    25,    -1,    27,    -1,    -1,    30,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    -1,    21,    22,    23,    24,
      74,    26,     3,     4,     5,     6,     7,    32,    33,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    32,    33,    -1,    -1,    60,    61,    62,    63,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    73,    74,
      -1,    -1,    -1,    54,    -1,    56,    -1,    58,    -1,    60,
      61,    62,    63,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    74,     3,     4,     5,     6,     7,     8,
      -1,    -1,    11,    74,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,
      -1,    30,    -1,    32,    33,    -1,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,     3,     4,     5,     6,
       7,    60,    61,    62,    63,    32,    33,    -1,    -1,    -1,
      32,    33,    -1,    -1,    73,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    32,    33,    54,    -1,    -1,
      -1,    -1,    54,    60,    61,    62,    63,    -1,    60,    61,
      62,    63,    -1,    -1,    32,    33,    73,    54,    -1,    -1,
      57,    73,    -1,    60,    61,    62,    63,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,     3,     4,     5,     6,
       7,    -1,    -1,     6,    -1,     8,    32,    33,    11,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,    -1,    27,    32,    33,    30,    54,    55,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,     0,
      -1,    -1,    55,    60,    61,    62,    63,     8,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,    30,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72
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
      31,    32,    33,    52,    54,    56,    58,    81,    82,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    72,
      95,    61,    64,    65,    62,    63,    34,    35,    36,    37,
      66,    67,    38,    39,    60,    68,    69,    40,    41,   130,
       6,     9,    10,    12,    16,    18,    19,    21,    22,    23,
      24,    26,    73,    75,    96,    98,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   103,    55,    59,    55,    59,
      57,    55,    59,    93,    97,     6,    73,    75,    59,   110,
      72,   115,     6,    55,    79,    94,    96,     6,    94,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    85,    85,
      86,    86,    87,    88,    89,   129,   129,    70,    71,    73,
      73,    96,    97,    54,   129,     6,    73,    54,    71,   129,
      54,    73,    75,   129,   108,     6,    94,    57,   112,   110,
     113,    55,    59,    57,    90,    91,   129,   116,    73,    71,
      98,   117,    54,    73,    96,   116,   116,    96,   121,   110,
      94,    96,   116,   117,   129,    96,   130,   129,    55,   130,
      55,    96,   117,   130,    55,    18,   116,    71,   116,    55,
     130,    55,   129,    54,   129,   116,   129,   129,   116,    96,
      93,    96,   116,   130,   130,   130,    29,    55,    55,   129,
     129,   116,   116
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
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     3,     2,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
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
#line 95 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyvsp[0].id).loc = current->lookup((yyvsp[0].id).var);
	  						if(!((yyvsp[0].id).loc))
	  							(yyvsp[0].id).loc = global->lookup((yyvsp[0].id).var);
	  						(yyval.exp).loc = (yyvsp[0].id).loc;
	  						(yyval.exp).type = ((yyvsp[0].id).loc)->Type;
	  						(yyval.exp).array = (yyval.exp).loc;
	  						(yyval.exp).loc1 = 0;
					   }
#line 1598 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 106 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).val.int_data = (yyvsp[0].ival);
					  		(yyval.exp).type = new_node(INT_,-1);
					  		(yyval.exp).loc = current->gentemp(INT_);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%d",(yyvsp[0].ival));
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN,0,0,(yyval.exp).loc);
					  		quad_array->emit(x);
					   }
#line 1613 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).val.double_data = (yyvsp[0].fval);
							(yyval.exp).type = new_node(DOUBLE_,-1);
							(yyval.exp).loc = current->gentemp(DOUBLE_);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%lf",(yyvsp[0].fval));
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN,0,0,(yyval.exp).loc);
					  		quad_array->emit(x);
					   }
#line 1628 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 130 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).val.char_data = (yyvsp[0].cval);
					  		(yyval.exp).type = new_node(CHAR_,-1);
					  		(yyval.exp).loc = current->gentemp(CHAR_);
					  		char *arg1 = new char[10];
					  		sprintf(arg1,"%c",(yyvsp[0].cval));
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,0,res,ASSIGN,0,0,(yyval.exp).loc);
					  		quad_array->emit(x);
					   }
#line 1643 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 142 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		// do nothing
					   }
#line 1651 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 147 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp) = (yyvsp[-1].exp);
					   }
#line 1659 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 154 "ass4_15CS10044.y" /* yacc.c:1646  */
    {		
							(yyval.exp) = (yyvsp[0].exp);
						}
#line 1667 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 159 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		(yyval.exp).array = (yyvsp[-3].exp).array;
					  		(yyval.exp).type = ((yyvsp[-3].exp).type)->r;
					  		if(!((yyvsp[-3].exp).loc1)){
					  			(yyval.exp).loc1 = current->gentemp(INT_);
					  			int m = compute_width(((yyvsp[-3].exp).type)->r);
					  			char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",m);
					  			char *res = strdup(((yyval.exp).loc1)->name);
					  			quad_fields y(arg1,arg2,res,INTO,(yyvsp[-1].exp).loc,0,(yyval.exp).loc1);
					  			quad_array->emit(y);
					  		}
					  		else{
					  			symbol_table_fields *temp = current->gentemp(INT_);
						  		(yyval.exp).loc1 = current->gentemp(INT_);
						  		int n = compute_width((yyval.exp).type);
						  		char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
						  		char *arg2 = new char[10];
						  		sprintf(arg2,"%d",n);
						  		char *res = strdup(temp->name);
						  		quad_fields x(arg1,arg2,res,INTO,(yyvsp[-1].exp).loc,0,temp);
						  		quad_array->emit(x);
						  		arg1 = strdup(((yyvsp[-3].exp).loc1)->name);
						  		arg2 = strdup(temp->name);
						  		res = strdup(((yyval.exp).loc1)->name);
						  		quad_fields y(arg1,arg2,res,PLUS,(yyvsp[-3].exp).loc1,temp,(yyval.exp).loc1);
						  		quad_array->emit(y);
					  		}
					  		flag_array = 1;
					  	}
#line 1703 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 192 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  			parameter_list *temp = (yyvsp[-1].parameter_attr);
					  			int count = 0;
					  			while(temp){
					  				char *arg1 = strdup((temp->parameter)->name);
					  				quad_fields x(arg1,0,0,PARAM,temp->parameter,0,0);
					  				quad_array->emit(x);
					 		 				count++;
					  				temp = temp->next;
					  			}
					  			symbol_table_fields *t = global->lookup(((yyvsp[-3].exp).loc)->name);
					  			(yyval.exp).loc = current->gentemp(((((t->nestedTable)->table)[count]).Type)->down);
					  			char *res = strdup(((yyval.exp).loc)->name);
					  			char *arg1 = strdup(((yyvsp[-3].exp).loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call,(yyvsp[-3].exp).loc,0,(yyval.exp).loc);
					  			quad_array->emit(x);
					  			(yyval.exp).type = ((yyval.exp).loc)->Type;
					    }
#line 1728 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 214 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  			int count = 0;
					  			symbol_table_fields *t = global->lookup(((yyvsp[-2].exp).loc)->name);
					  			(yyval.exp).loc = current->gentemp(((((t->nestedTable)->table)[count]).Type)->down);
					  			char *res = strdup(((yyval.exp).loc)->name);
					  			char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  			char *arg2 = new char[10];
					  			sprintf(arg2,"%d",count);
					  			quad_fields x(arg1,arg2,res,call,(yyvsp[-2].exp).loc,0,(yyval.exp).loc);
					  			quad_array->emit(x);
					  			(yyval.exp).type = ((yyval.exp).loc)->Type;
					  	}
#line 1745 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 228 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("postfix-expression -> postfix-expression.IDENTIFIER\n");
					 	}
#line 1753 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 233 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("postfix-expression -> postfix-expression -> IDENTIFIER\n");}
					  	}
#line 1761 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 238 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  			(yyval.exp).loc = current->gentemp(((yyvsp[-1].exp).type)->down);
							  	char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char *res = strdup(((yyval.exp).loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-1].exp).loc,0,(yyval.exp).loc);
							  	quad_array->emit(x);
							  	arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char *arg2 = new char[10];
							  	sprintf(arg2,"1");
							  	res = strdup(((yyvsp[-1].exp).loc)->name);
							  	quad_fields y(arg1,arg2,res,PLUS,(yyvsp[-1].exp).loc,0,(yyvsp[-1].exp).loc);
							  	quad_array->emit(y);
							  	(yyval.exp).type = (yyvsp[-1].exp).type;				
					  	}
#line 1780 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 254 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					  		
						  		(yyval.exp).loc = current->gentemp(((yyvsp[-1].exp).type)->down);
							  	char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char *res = strdup(((yyval.exp).loc)->name);
							  	quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-1].exp).loc,0,(yyval.exp).loc);
							  	quad_array->emit(x);
							  	arg1 = strdup(((yyvsp[-1].exp).loc)->name);
							  	char *arg2 = new char[10];
							  	sprintf(arg2,"1");
							  	res = strdup(((yyvsp[-1].exp).loc)->name);
							  	quad_fields y(arg1,arg2,res,MINUS,(yyvsp[-1].exp).loc,0,(yyvsp[-1].exp).loc);
					  			quad_array->emit(y);
					  			(yyval.exp).type = (yyvsp[-1].exp).type;
					  	}
#line 1800 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 271 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					  		//printf("postfix-expression -> postfix-expression .'\n");}
					  	}
#line 1808 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 277 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							 	(yyval.parameter_attr) = make_param_list((yyvsp[0].exp).loc);
							 }
#line 1816 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 282 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						  	  	(yyval.parameter_attr) = merge_param_list((yyvsp[-2].parameter_attr),make_param_list((yyvsp[0].exp).loc));
						  	 }
#line 1824 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 288 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.unary) = U_ADDR;
					}
#line 1832 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 293 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
						(yyval.unary) = U_STAR;
					}
#line 1840 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 298 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.unary) = U_PLUS;
					}
#line 1848 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 303 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
						(yyval.unary) = U_MINUS;
					}
#line 1856 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 309 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
				  		if((yyvsp[0].exp).loc1){
				  			(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type)->down);
				  			char *arg1 = strdup(((yyvsp[0].exp).array)->name);
				  			char *arg2 = strdup(((yyvsp[0].exp).loc1)->name);
				  			char *res = strdup(((yyval.exp).loc)->name);
				  			quad_fields x(arg1,arg2,res,EQ_BRACKET,(yyvsp[0].exp).loc,(yyvsp[0].exp).loc1,(yyval.exp).loc);
				  			quad_array->emit(x);
						}
					}
#line 1872 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 322 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				   		(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type)->down);
					  	char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
					  	char *arg2 = new char[10];
					  	sprintf(arg2,"1");
					  	char *res = strdup(((yyvsp[0].exp).loc)->name);
					  	quad_fields y(arg1,arg2,res,PLUS,(yyvsp[0].exp).loc,0,(yyvsp[0].exp).loc);
					  	quad_array->emit(y);
					  	arg1 = strdup(((yyvsp[0].exp).loc)->name);
					  	res = strdup(((yyval.exp).loc)->name);
					  	quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,(yyval.exp).loc);
					  	quad_array->emit(x);
					  	(yyval.exp).type = (yyvsp[0].exp).type;
				  
				   }
#line 1892 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 339 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	

				   		(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type)->down);
				  		char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
				  		char *arg2 = new char[10];
				  		sprintf(arg2,"1");
				  		char *res = strdup(((yyvsp[0].exp).loc)->name);
				  		quad_fields y(arg1,arg2,res,MINUS,(yyvsp[0].exp).loc,0,(yyvsp[0].exp).loc);
				  		quad_array->emit(y);
				  		arg1 = strdup(((yyvsp[0].exp).loc)->name);
				  		res = strdup(((yyval.exp).loc)->name);
				  		quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,(yyval.exp).loc);
				  		quad_array->emit(x);
				  		(yyval.exp).type = (yyvsp[0].exp).type;
				  
				   }
#line 1913 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 357 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				   		(yyval.exp).loc = current->gentemp(((yyvsp[0].exp).type)->down);
				  		char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
				  		char *res = strdup(((yyval.exp).loc)->name);
				  		quad_fields x(arg1,0,res,(yyvsp[-1].unary),(yyvsp[0].exp).loc,0,(yyval.exp).loc);
				  		quad_array->emit(x);
				  		(yyval.exp).type = (yyvsp[0].exp).type;
				  	
				   }
#line 1927 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 369 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
					}
#line 1935 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 375 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
									(yyval.exp) = (yyvsp[0].exp);
						      }
#line 1943 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 379 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						   	  		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
						  				(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
						  				char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  				char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  				char *res = strdup(((yyval.exp).loc)->name);
						  				quad_fields x(arg1,arg2,res,INTO,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
						  				quad_array->emit(x);
						  				(yyval.exp).type = (yyvsp[-2].exp).type;
						  			}
						  		
						  			else{
						  				symbol_table_fields *temp1, *temp2;
						  				
						  				if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == DOUBLE_){
						  					temp1 = current->gentemp(DOUBLE_);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp(DOUBLE_);
						  					arg1 = strdup(temp1->name);
						  					char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
							  				res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO,temp1,(yyvsp[0].exp).loc,temp2);
						  					quad_array->emit(y);
						  					(yyval.exp).type = (yyvsp[0].exp).type;
						  				}
						  		

						  				else if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == CHAR_){
						  					temp1 = current->gentemp(INT_);
						  					char *arg1 = new char[100];
						  					sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
						  					char *res = strdup(temp1->name);
						  					quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
						  					quad_array->emit(x);
						  					temp2 = current->gentemp(INT_);
						  					arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  					char *arg2 = strdup(temp1->name);
						  					res = strdup(temp2->name);
						  					quad_fields y(arg1,arg2,res,INTO,(yyvsp[-2].exp).loc,temp1,temp2);
						  					quad_array->emit(y);
						  					(yyval.exp).type = (yyvsp[-2].exp).type;
						  				}
						  		
							  			else if(((yyvsp[-2].exp).type)->down == DOUBLE_ && ((yyvsp[0].exp).type)->down == INT_){
							  				temp1 = current->gentemp(DOUBLE_);
							  				char *arg1 = new char[100];
							  				sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
							  				char *res = strdup(temp1->name);
							  				quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
							  				quad_array->emit(x);
							  				temp2 = current->gentemp(DOUBLE_);
							  				arg1 = strdup(((yyvsp[-2].exp).loc)->name);
							  				char *arg2 = strdup(temp1->name);
									  		res = strdup(temp2->name);
							  				quad_fields y(arg1,arg2,res,INTO,(yyvsp[-2].exp).loc,temp1,temp2);
							  				quad_array->emit(y);
						  					(yyval.exp).type = (yyvsp[-2].exp).type;
						  				}
						  		

								  		else if(((yyvsp[-2].exp).type)->down == CHAR_ && ((yyvsp[0].exp).type)->down == INT_){
								  			temp1 = current->gentemp(INT_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(INT_);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,INTO,temp1,(yyvsp[0].exp).loc,temp2);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[0].exp).type;
								  			}
						  				
						  				(yyval.exp).loc = temp2;
						  			}	
						   	  }
#line 2031 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 464 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
								   	 if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
								  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
								  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
								  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  		char *res = strdup(((yyval.exp).loc)->name);
								  		quad_fields x(arg1,arg2,res,DIV,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
								  		quad_array->emit(x);
								  		(yyval.exp).type = (yyvsp[-2].exp).type;
								  	}
								  	

								  	else{
								  		symbol_table_fields *temp1, *temp2;
								  		
								  		if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == DOUBLE_){
								  			temp1 = current->gentemp(DOUBLE_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(DOUBLE_);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,temp1,(yyvsp[0].exp).loc,temp2);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[0].exp).type;
								  		}
								  		

								  		else if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == CHAR_){
								  			temp1 = current->gentemp(INT_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(INT_);
								  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,(yyvsp[-2].exp).loc,temp1,temp2);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[-2].exp).type;
								  		}
								  		

								  		else if(((yyvsp[-2].exp).type)->down == DOUBLE_ && ((yyvsp[0].exp).type)->down == INT_){
								  			temp1 = current->gentemp(DOUBLE_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(DOUBLE_);
								  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
								  			char *arg2 = strdup(temp1->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,(yyvsp[-2].exp).loc,temp1,temp2);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[-2].exp).type;
								  		}
								  		
								  		else if(((yyvsp[-2].exp).type)->down == CHAR_ && ((yyvsp[0].exp).type)->down == INT_){
								  			temp1 = current->gentemp(INT_);
								  			char *arg1 = new char[100];
								  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
								  			char *res = strdup(temp1->name);
								  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
								  			quad_array->emit(x);
								  			temp2 = current->gentemp(INT_);
								  			arg1 = strdup(temp1->name);
								  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
								  			res = strdup(temp2->name);
								  			quad_fields y(arg1,arg2,res,DIV,temp1,(yyvsp[0].exp).loc,temp2);
								  			quad_array->emit(y);
								  			(yyval.exp).type = (yyvsp[0].exp).type;
								  		}
								  		(yyval.exp).loc = temp2;
								  	}	
						   	  }
#line 2119 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 549 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
									   	  		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
									  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
									  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
									  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
									  		char *res = strdup(((yyval.exp).loc)->name);
									  		quad_fields x(arg1,arg2,res,PERCENT,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
									  		quad_array->emit(x);
									  		(yyval.exp).type = (yyvsp[-2].exp).type;
									  	}
									  	else{
									  		symbol_table_fields *temp1, *temp2;
									  		if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == DOUBLE_){
									  			temp1 = current->gentemp(DOUBLE_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(DOUBLE_);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,temp1,(yyvsp[0].exp).loc,temp2);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[0].exp).type;
									  		}
									  		else if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == CHAR_){
									  			temp1 = current->gentemp(INT_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(INT_);
									  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,(yyvsp[-2].exp).loc,temp1,temp2);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[-2].exp).type;
									  		}
									  		else if(((yyvsp[-2].exp).type)->down == DOUBLE_ && ((yyvsp[0].exp).type)->down == INT_){
									  			temp1 = current->gentemp(DOUBLE_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(DOUBLE_);
									  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
									  			char *arg2 = strdup(temp1->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,(yyvsp[-2].exp).loc,temp1,temp2);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[-2].exp).type;
									  		}
									  		else if(((yyvsp[-2].exp).type)->down == CHAR_ && ((yyvsp[0].exp).type)->down == INT_){
									  			temp1 = current->gentemp(INT_);
									  			char *arg1 = new char[100];
									  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
									  			char *res = strdup(temp1->name);
									  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
									  			quad_array->emit(x);
									  			temp2 = current->gentemp(INT_);
									  			arg1 = strdup(temp1->name);
									  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
									  			res = strdup(temp2->name);
									  			quad_fields y(arg1,arg2,res,PERCENT,temp1,(yyvsp[0].exp).loc,temp2);
									  			quad_array->emit(y);
									  			(yyval.exp).type = (yyvsp[0].exp).type;
									  		}
									  		(yyval.exp).loc = temp2;
									  	}
						   	  }
#line 2199 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 627 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);
						}
#line 2207 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 631 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,PLUS,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
					  		}
					  	
						  	else{
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == DOUBLE_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,temp1,(yyvsp[0].exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == CHAR_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,(yyvsp[-2].exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->down == DOUBLE_ && ((yyvsp[0].exp).type)->down == INT_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,(yyvsp[-2].exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  	
						  		else if(((yyvsp[-2].exp).type)->down == CHAR_ && ((yyvsp[0].exp).type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,PLUS,temp1,(yyvsp[0].exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}
						  		(yyval.exp).loc = temp2;
						  	}
					 	}
#line 2292 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 712 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,MINUS,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
					  		}
					  		
					  		else{
						  		symbol_table_fields *temp1, *temp2;
						  		
						  		if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == DOUBLE_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,temp1,(yyvsp[0].exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == CHAR_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,(yyvsp[-2].exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->down == DOUBLE_ && ((yyvsp[0].exp).type)->down == INT_){
						  			temp1 = current->gentemp(DOUBLE_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2dbl(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(DOUBLE_);
						  			arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  			char *arg2 = strdup(temp1->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,(yyvsp[-2].exp).loc,temp1,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						  		
						  		else if(((yyvsp[-2].exp).type)->down == CHAR_ && ((yyvsp[0].exp).type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"char2int(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			temp2 = current->gentemp(INT_);
						  			arg1 = strdup(temp1->name);
						  			char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  			res = strdup(temp2->name);
						  			quad_fields y(arg1,arg2,res,MINUS,temp1,(yyvsp[0].exp).loc,temp2);
						  			quad_array->emit(y);
						  			(yyval.exp).type = (yyvsp[0].exp).type;
						  		}
						  		(yyval.exp).loc = temp2;
					  		}
					 }
#line 2377 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 795 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
				  	}
#line 2385 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 800 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  	if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,SL,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
		  				}
				  	}
#line 2401 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 812 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
					  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
					  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
					  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
					  		char *res = strdup(((yyval.exp).loc)->name);
					  		quad_fields x(arg1,arg2,res,SR,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
					  		quad_array->emit(x);
					  		(yyval.exp).type = (yyvsp[-2].exp).type;
				  		}
				  	}
#line 2417 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 826 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						  	(yyval.exp) = (yyvsp[0].exp);	
					   }
#line 2425 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 831 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_LT,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,0);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1);
					   }
#line 2441 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 844 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GT,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,0);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1);
					   }
#line 2457 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 857 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_LTE,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,0);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1);
					   }
#line 2473 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 870 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					   		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_GTE,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,0);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1);
					   }
#line 2489 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 884 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);
					 	}
#line 2497 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 889 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		
						  	(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_EQ,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,0);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1);
						}
#line 2514 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 902 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		(yyval.exp).TL = makelist(next_instr);
						  	char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  	char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,arg2,0,goto_NEQ,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,0);
						  	quad_array->emit(x);
						  	(yyval.exp).FL = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	(yyval.exp).type = new_node(BOOL_,-1);
					 	}
#line 2530 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 916 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						(yyval.exp) = (yyvsp[0].exp);
				}
#line 2538 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 921 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
				  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
				  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
				  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
				  		char *res = strdup(((yyval.exp).loc)->name);
				  		quad_fields x(arg1,arg2,res,BW_AND,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
				  		quad_array->emit(x);
				  		(yyval.exp).type = (yyvsp[-2].exp).type;
			  		}
				}
#line 2554 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 935 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
									(yyval.exp) = (yyvsp[0].exp);
						 	}
#line 2562 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 940 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						 		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
							  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
							  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
							  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
							  		char *res = strdup(((yyval.exp).loc)->name);
							  		quad_fields x(arg1,arg2,res,BW_XOR,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
							  		quad_array->emit(x);
							  		(yyval.exp).type = (yyvsp[-2].exp).type;
						  		}
						 	}
#line 2578 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 955 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
								(yyval.exp) = (yyvsp[0].exp);
						 	}
#line 2586 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 960 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						 		if(typecheck((yyvsp[-2].exp).type, (yyvsp[0].exp).type)){
						  		(yyval.exp).loc = current->gentemp(((yyvsp[-2].exp).type)->down);
						  		char *arg1 = strdup(((yyvsp[-2].exp).loc)->name);
						  		char *arg2 = strdup(((yyvsp[0].exp).loc)->name);
						  		char *res = strdup(((yyval.exp).loc)->name);
						  		quad_fields x(arg1,arg2,res,BW_INOR,(yyvsp[-2].exp).loc,(yyvsp[0].exp).loc,(yyval.exp).loc);
						  		quad_array->emit(x);
						  		(yyval.exp).type = (yyvsp[-2].exp).type;
						  	}
						 	}
#line 2602 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 974 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);						}
#line 2609 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 978 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
							backpatch((yyvsp[-3].exp).FL,(yyvsp[-1].instr));
							(yyval.exp).TL = merge((yyvsp[-3].exp).TL,(yyvsp[0].exp).TL);
							(yyval.exp).FL = (yyvsp[0].exp).FL;
							(yyval.exp).type = new_node(BOOL_,-1);
						}
#line 2620 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 987 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						  	(yyval.exp) = (yyvsp[0].exp);
					   }
#line 2628 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 992 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   	  	backpatch((yyvsp[-3].exp).FL,(yyvsp[-1].instr));
					  		(yyval.exp).TL = merge((yyvsp[-3].exp).TL,(yyvsp[0].exp).TL);
						  	(yyval.exp).FL = (yyvsp[0].exp).FL;
						  	(yyval.exp).type = new_node(BOOL_,-1);
					   }
#line 2639 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1001 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[0].exp);
						}
#line 2647 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1006 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp).loc = current->gentemp(((yyvsp[-4].exp).type)->down);
						  	(yyval.exp).type = (yyvsp[-4].exp).type;
						  	char *res = strdup(((yyval.exp).loc)->name);
						  	char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
						  	quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,(yyval.exp).loc);
						  	quad_array->emit(x);
						  	list_node *l = makelist(next_instr);
						  	quad_fields y(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(y);
						  	backpatch((yyvsp[-3].node_attr),next_instr);
						  	res = strdup(((yyval.exp).loc)->name);
						  	arg1 = strdup(((yyvsp[-4].exp).loc)->name);
						  	quad_fields z(arg1,0,res,ASSIGN,(yyvsp[-4].exp).loc,0,(yyval.exp).loc);
						  	quad_array->emit(z);
						  	l = merge(l,makelist(next_instr));
						  	quad_fields a(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(a);
						  	backpatch((yyvsp[-7].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-8].exp));
						  	backpatch((yyvsp[-8].exp).TL,(yyvsp[-5].instr));
						  	backpatch((yyvsp[-8].exp).FL,(yyvsp[-1].instr));
						  	backpatch(l,next_instr);
						}
#line 2676 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1033 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		(yyval.exp) = (yyvsp[0].exp);
					   }
#line 2684 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1038 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		if(typecheck((yyvsp[-2].exp).type,(yyvsp[0].exp).type)){
						  		if((yyvsp[-2].exp).loc1){
							  		//printf("%s\n",($1.loc)->name);
							  		char *arg1 = strdup(((yyvsp[-2].exp).array)->name);
							  		char *arg2 = strdup(((yyvsp[-2].exp).loc1)->name);
							  		char *res = strdup(((yyvsp[0].exp).loc)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ,(yyvsp[-2].exp).loc,(yyvsp[-2].exp).loc1,(yyvsp[0].exp).loc);
							  		quad_array->emit(x);
						  		}
						  		else{
							  		char *arg1 = strdup(((yyvsp[0].exp).loc)->name);
								  	char *res = strdup(((yyvsp[-2].exp).loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,(yyvsp[-2].exp).loc);
								  	quad_array->emit(x);
						  		}
					  		}
						  	
						  	else{
						  		symbol_table_fields *temp1, *temp2;
						  		if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == DOUBLE_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  		}
						  		else if(((yyvsp[-2].exp).type)->down == INT_ && ((yyvsp[0].exp).type)->down == CHAR_){
						  			temp1 = current->gentemp(CHAR_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  			
						  		}
						  		else if(((yyvsp[-2].exp).type)->down == DOUBLE_ && ((yyvsp[0].exp).type)->down == INT_){
						  			temp1 = current->gentemp(INT_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"dbl2int(%s)",((yyvsp[-2].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[-2].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  		}
						  		else if(((yyvsp[-2].exp).type)->down == CHAR_ && ((yyvsp[0].exp).type)->down == INT_){
						  			temp1 = current->gentemp(CHAR_);
						  			char *arg1 = new char[100];
						  			sprintf(arg1,"int2char(%s)",((yyvsp[0].exp).loc)->name);
						  			char *res = strdup(temp1->name);
						  			quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,temp1);
						  			quad_array->emit(x);
						  		}
						  		if((yyvsp[-2].exp).loc1){
							  		//printf("%s\n",($1.loc)->name);
							  		char *arg1 = strdup(((yyvsp[-2].exp).array)->name);
							  		char *arg2 = strdup(((yyvsp[-2].exp).loc1)->name);
							  		char *res = strdup((temp1)->name);
							  		quad_fields x(arg1,arg2,res,BRACKET_EQ,(yyvsp[-2].exp).loc,(yyvsp[-2].exp).loc1,(yyvsp[0].exp).loc);
							  		quad_array->emit(x);
						  		}
						  		else{
							  		char *arg1 = strdup((temp1)->name);
								  	char *res = strdup(((yyvsp[-2].exp).loc)->name);
								  	quad_fields x(arg1,0,res,ASSIGN,(yyvsp[0].exp).loc,0,(yyvsp[-2].exp).loc);
								  	quad_array->emit(x);
						  		}
						  	}
					   }
#line 2758 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1109 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2764 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1110 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2770 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1111 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2776 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1112 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2782 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1113 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2788 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1114 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2794 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1115 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2800 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1116 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2806 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1117 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2812 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1118 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2818 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1119 "ass4_15CS10044.y" /* yacc.c:1646  */
    {}
#line 2824 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1123 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				(yyval.exp) = (yyvsp[0].exp);
			}
#line 2832 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1128 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				// 
			}
#line 2840 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1135 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 	//printf("constant-expression -> conditional-expression\n");
					 }
#line 2848 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1143 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
			 	if(flag1 == 1 && flag2 == 0){
		  		tree_node *temp = new_node(((yyvsp[-2].var_decl).type)->down,-1);
		  		char *temp1 = strdup("retVal");
		  		symbol_table_fields x(temp1,temp,0,(yyvsp[-2].var_decl).width,-1,0);
		  		temp_use->insert(x);
		  		temp = new_node(FUNCTION,-1);
		  		symbol_table_fields y((yyvsp[-1].var_decl).var,temp,0,0,-1,temp_use);
		  		global->insert(y);
			  	}
			  	flag1 = 0;
			  	flag2 = 0;
			  	c = 0;
			 }
#line 2867 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1159 "ass4_15CS10044.y" /* yacc.c:1646  */
    {

			 }
#line 2875 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1165 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							
						}
#line 2883 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1170 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl).type = (yyvsp[0].var_decl).type;
					  		(yyval.var_decl).width = (yyvsp[0].var_decl).width;
					  		t = (yyval.var_decl).type;
					  		w = (yyval.var_decl).width;
	  						}
						}
#line 2896 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1182 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		if(flag1 == 1 && flag2 == 0)
	  						(yyval.var_decl).var = (yyvsp[0].var_decl).var;
					  }
#line 2905 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1188 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		 
					  }
#line 2913 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1194 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		if(flag1 == 0){
					  		tree_node *temp = new_node(t->down,-1);
					  		temp = merge_node((yyvsp[0].var_decl).type,temp);
					  		int temp_size;
					  		if(temp->down == PTR)
					  			temp_size = PTR_SIZE;
					  		else{
						  		switch(t->down){
						  			case INT_ : temp_size = INT_SIZE;
						  					   break;
						  			case DOUBLE_ : temp_size = DOUBLE_SIZE;
						  						  break;
						  			case CHAR_   : temp_size = CHAR_SIZE;
						  						  break; 	
					  			}
					  		}
					  		temp_size = temp_size * (yyvsp[0].var_decl).width;
					  		symbol_table_fields x((yyvsp[0].var_decl).var,temp,0,temp_size,-1,0);
					  		current->insert(x);
					  		//current->print_table();
				  		}
				  	
				  		else if(flag1 == 1 && flag2 == 0){
				  			(yyval.var_decl).var = (yyvsp[0].var_decl).var;
				  		}	
     			 }
#line 2945 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1223 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
     			 		if(flag1 == 0){
					  		tree_node *temp = new_node(t->down,-1);
					  		temp = merge_node((yyvsp[-2].var_decl).type,temp);
					  		void *value;
					  		int *v1;
					  		double *v2;
					  		char *v3;
					  		int temp_size;
					  		switch(t->down){
					  			case INT_ : v1 = (int *)malloc(sizeof(int));
					  					   (*v1) = (yyvsp[0].initializer).int_data; 	
					  					   value = (void *)v1;
					  					   temp_size = INT_SIZE;
					  					   break;
					  			case DOUBLE_ : v2 = (double *)malloc(sizeof(double));
						  					   (*v2) = (yyvsp[0].initializer).double_data;
						  					   //printf("%lf\n",$3.double_data); 	
						  					   value = (void *)v2;
						  					   //printf("%lf\n",*v2);
						  					   temp_size = DOUBLE_SIZE;
						  					   break;
					  			case CHAR_   :v3 = (char *)malloc(sizeof(char));
					  					   (*v3) = (yyvsp[0].initializer).char_data; 	
					  					   value = (void *)v3;
					  					   temp_size = CHAR_SIZE;
					  					   break;
					  			default     : value = 0; 	
					  		}
					  		temp_size = temp_size * (yyvsp[-2].var_decl).width;
					  		symbol_table_fields x((yyvsp[-2].var_decl).var,temp,value,temp_size,-1,0);
					  		current->insert(x);
					  	}
     			 }
#line 2984 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1261 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		if(flag2 == 0 || flag1 == 0){
				  		(yyval.var_decl).type = new_node(VOID_,-1);
				  		(yyval.var_decl).width = 0;
			  	}
				 }
#line 2995 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1269 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		if(flag2 == 0 || flag1 == 0){
				  		(yyval.var_decl).type = new_node(CHAR_,-1);
				  		(yyval.var_decl).width = CHAR_SIZE;
			  	}
				 }
#line 3006 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1277 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("type-specifiers -> SHORT\n");}
				 }
#line 3014 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1282 "ass4_15CS10044.y" /* yacc.c:1646  */
    {		
				 		if(flag2 == 0 || flag1 == 0){
			  			(yyval.var_decl).type = new_node(INT_,-1);
			  			(yyval.var_decl).width = INT_SIZE;
			  			}
				 }
#line 3025 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1290 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("type-specifiers -> FLOAT\n");}
				 }
#line 3033 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1295 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		if(flag2 == 0 || flag1 == 0){
			  			(yyval.var_decl).type = new_node(DOUBLE_,-1);
			  			(yyval.var_decl).width = DOUBLE_SIZE;
			  	}
				 }
#line 3044 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1303 "ass4_15CS10044.y" /* yacc.c:1646  */
    {		
				 		//printf("type-specifiers -> MATRIX\n");}
				 }
#line 3052 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1308 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("type-specifiers -> SIGNED\n");}
				 }
#line 3060 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1313 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				 		//printf("type-specifiers -> UNSIGNED\n");}
				 }
#line 3068 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1318 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("type-specifiers -> BOOL\n");}
				 }
#line 3076 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1324 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					if(flag1 == 0 || flag2 == 0){
			  		(yyval.var_decl).type = merge_node((yyvsp[0].var_decl).type,(yyvsp[-1].var_decl).type);
			  		(yyval.var_decl).width = (yyvsp[0].var_decl).width;
			  		(yyval.var_decl).var = (yyvsp[0].var_decl).var;
		  	}
			}
#line 3088 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1332 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
					(yyval.var_decl).type = (yyvsp[0].var_decl).type;
			  		(yyval.var_decl).var = (yyvsp[0].var_decl).var;
			  		(yyval.var_decl).width = (yyvsp[0].var_decl).width;
			}
#line 3098 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1340 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl).var = (yyvsp[0].id).var;
						  	(yyval.var_decl).type = 0;
						  	(yyval.var_decl).width = 1;
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
#line 3122 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1361 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("direct-declarator -> (declarator)\n");}
				   }
#line 3130 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1366 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		if(flag1 == 0 || flag2 == 0){
					  		tree_node *temp = new_node(ARRAY,(yyvsp[-1].exp).val.int_data);
					  		(yyval.var_decl).type = merge_node((yyvsp[-3].var_decl).type,temp);
					  		(yyval.var_decl).width = (yyvsp[-3].var_decl).width * (yyvsp[-1].exp).val.int_data;
					  		(yyval.var_decl).var = (yyvsp[-3].var_decl).var;
					  	}
				   }
#line 3143 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1376 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				   		
					  	if(flag1 == 0 || flag2 == 0){
					  		(yyval.var_decl).var = (yyvsp[-2].var_decl).var;
						  	(yyval.var_decl).type = (yyvsp[-2].var_decl).type;
						  	(yyval.var_decl).width = (yyvsp[-2].var_decl).width;
					  	}
					    
				   }
#line 3157 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1387 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		flag1 = 1;										
					  	(yyval.var_decl).var = (yyvsp[-3].var_decl).var;
					  	(yyval.var_decl).type = 0;
					  	(yyval.var_decl).width = 1;
				   }
#line 3168 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1395 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("direct-declarator -> direct-declarator(identifier-list)\n");}
				   }
#line 3176 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1400 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		flag1 = 1;
					  	if(flag2 == 0)
					  		temp_use = create_Symbol_Table();
					  	(yyval.var_decl).var = (yyvsp[-2].var_decl).var;
					  	(yyval.var_decl).type = 0;
					  	(yyval.var_decl).width = 1;
				   }
#line 3189 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1414 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		 	tree_node *temp = new_node(PTR,-1);
	  		(yyval.var_decl).type = merge_node((yyvsp[0].var_decl).type,temp);
		 }
#line 3198 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1420 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		 	(yyval.var_decl).type = new_node(PTR,-1);
		 }
#line 3206 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1426 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("parameter-type-list -> parameter-list\n");}
					 }
#line 3214 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1432 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					if(flag2 == 0){										// An indication of the fact that function has not been
			  		temp_use = create_Symbol_Table();				// declared previously
			  		symbol_table_fields x((yyvsp[0].var_decl).var,(yyvsp[0].var_decl).type,0,(yyvsp[0].var_decl).width,-1,0); //Insert in sym tab of function(offset comp.in insert)
			  		temp_use->insert(x);
			  		}
				}
#line 3226 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1441 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					if(flag2 == 0){
			  		symbol_table_fields x((yyvsp[0].var_decl).var,(yyvsp[0].var_decl).type,0,(yyvsp[0].var_decl).width,-1,0); //Insert in sym tab of function(offset comp. in insert)
			  		temp_use->insert(x);
			  		}
				}
#line 3237 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1450 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		if(flag2 == 0){						
					  		(yyval.var_decl).type = merge_node((yyvsp[0].var_decl).type,(yyvsp[-1].var_decl).type);
					  		(yyval.var_decl).var = (yyvsp[0].var_decl).var;
					  		(yyval.var_decl).width = (yyvsp[-1].var_decl).width*(yyvsp[0].var_decl).width;
					  		}	
					   }
#line 3249 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1459 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					   		//printf("parameter-declaration -> declaration-specifiers\n");}
					   }
#line 3257 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1465 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 	//printf("identifier-list -> IDENTIFIER\n");}
				 }
#line 3265 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1470 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				 	//printf("identifier-list -> identifier-list, IDENTIFIER\n");}
				 }
#line 3273 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1476 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
			 	(yyval.initializer) = (yyvsp[0].exp).val;
			 }
#line 3281 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1481 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
			 	//printf("initializer -> { initializer-row-list }\n");}
			 }
#line 3289 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1487 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("initializer-row-list -> initializer-row\n");}
					  }
#line 3297 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1492 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("initializer-row-list -> initializer-row-list ; initializer-row\n");}
					  }
#line 3305 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1498 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("initializer-row -> designation initializer\n");}
				 }
#line 3313 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1503 "ass4_15CS10044.y" /* yacc.c:1646  */
    {  	
				 		//printf("initializer-row -> initializer\n");}
				 }
#line 3321 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1508 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("initializer-row -> initializer-row, designation initializer\n");}
				 }
#line 3329 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1513 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("initializer-row -> initializer-row, initializer\n");}
				 }
#line 3337 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1520 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
			 		//printf("designation -> designator-list =\n");}
			 }
#line 3345 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1526 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 	//printf("designator-list -> designator\n");}
				 }
#line 3353 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1531 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		//printf("designator-list -> designator-list designator\n");}
				 }
#line 3361 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1537 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					//printf("designator -> [constant-expression]");}
    		}
#line 3369 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1542 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
    				//printf("designator -> .IDENTIFIER");}
    		}
#line 3377 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1551 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		//printf("statement -> labeled-statement\n");}
		   }
#line 3385 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1556 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3393 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1561 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3401 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1566 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3409 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1571 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3417 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1575 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		   		(yyval.exp) = (yyvsp[0].exp);
		   }
#line 3425 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1581 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("expression-statement -> expression ;\n");}
					  }
#line 3433 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1586 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("expression-statement -> ;\n");}
					  }
#line 3441 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1593 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("labeled-statement -> IDENTIFIER : statement\n");}
				   }
#line 3449 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1598 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
				   		//printf("labeled-statement -> CASE constant-expression : statement\n");}
				   }
#line 3457 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1603 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				   		//printf("DEFAULT : statement\n");}
				   }
#line 3465 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1609 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							(yyval.exp) = (yyvsp[-1].exp);
					}
#line 3473 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1614 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
							//printf("compound-statement -> {}");}
					}
#line 3481 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1620 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		 (yyval.exp) = (yyvsp[0].exp);
				 }
#line 3489 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1625 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				 		backpatch((yyvsp[-2].exp).NL,(yyvsp[-1].instr));
						(yyval.exp) = (yyvsp[0].exp);
				 }
#line 3498 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1632 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				//printf("block-item -> declaration\n");}
			}
#line 3506 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1637 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				(yyval.exp) = (yyvsp[0].exp);
			}
#line 3514 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1644 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		backpatch((yyvsp[-4].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-5].exp));
						  	backpatch((yyvsp[-5].exp).TL,(yyvsp[-2].instr));
						  	(yyval.exp).NL = merge((yyvsp[-1].exp).NL,(yyvsp[-5].exp).FL);
						  	(yyval.exp).NL = merge((yyval.exp).NL,(yyvsp[0].node_attr));
					 }
#line 3526 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1653 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		list_node *l = 0;
						  	if(((yyvsp[-8].exp).type)->down!=BOOL_){
						  		l = makelist(next_instr);
						  		quad_fields x(0,0,0,GOTO_,0,0,0);
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
#line 3546 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1671 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("selection-statement -> SWITCH (expression) statement\n");}
					 }
#line 3554 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1679 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		char *res = new char[10];
						  	sprintf(res,"%d",(yyvsp[-6].instr));
						  	quad_fields x(0,0,res,GOTO_,0,0,0);
						  	quad_array->emit(x);
						  	backpatch((yyvsp[-3].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-4].exp));
						  	backpatch((yyvsp[0].exp).NL,(yyvsp[-6].instr));
						  	backpatch((yyvsp[-4].exp).TL,(yyvsp[-1].instr));
						  	(yyval.exp).NL = (yyvsp[-4].exp).FL;
					 }
#line 3570 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1692 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		backpatch((yyvsp[-1].node_attr),next_instr);
					  		conv2Bool(&(yyvsp[-2].exp));
					  		backpatch((yyvsp[-2].exp).TL,(yyvsp[-7].instr));
					  		backpatch((yyvsp[-6].exp).NL,(yyvsp[-5].instr));
					  		(yyval.exp).NL = (yyvsp[-2].exp).FL;
					 }
#line 3582 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1701 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		backpatch((yyvsp[-3].node_attr),(yyvsp[-8].instr));
						  	list_node *l = makelist(next_instr);
						  	quad_fields x(0,0,0,GOTO_,0,0,0);
						  	quad_array->emit(x);
						  	(yyvsp[0].exp).NL = merge((yyvsp[0].exp).NL,l);
						  	backpatch((yyvsp[0].exp).NL,(yyvsp[-5].instr));
						  	backpatch((yyvsp[-6].node_attr),next_instr);
						  	conv2Bool(&(yyvsp[-7].exp));
						  	backpatch((yyvsp[-7].exp).TL,(yyvsp[-1].instr));
						  	(yyval.exp).NL = (yyvsp[-7].exp).FL;
					 }
#line 3599 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1715 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("FOR (declaration expression-opt ; expression ) statement\n");}
					 }
#line 3607 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1720 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("FOR (declaration expression-opt ; ) statement\n");}
					 }
#line 3615 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1726 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("jump-statement -> GOTO IDENTIFIER; \n");}
				}
#line 3623 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1730 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						//printf("jump-statement -> CONTINUE;\n");}
				}
#line 3631 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1735 "ass4_15CS10044.y" /* yacc.c:1646  */
    {	
						//printf("jump-statement -> BREAK;\n");}
				}
#line 3639 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1740 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						char *arg1 = strdup(((yyvsp[-1].exp).loc)->name);
			  			quad_fields x(arg1,0,0,RETURN_EXP,(yyvsp[-1].exp).loc,0,0);
			  			quad_array->emit(x);
				}
#line 3649 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1747 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
						quad_fields x(0,0,0,RETURN_,0,0,0);
	  					quad_array->emit(x);
				}
#line 3658 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1755 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		//printf("translation-unit -> external-declaration\n");}
				  }
#line 3666 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1760 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		//printf("translation-unit -> translation-unit external-declaration\n");}
				  }
#line 3674 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1766 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("external-declaration -> function-definition\n");}
					  }
#line 3682 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1771 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					  		//printf("external-declaration -> declaration\n");}
					  }
#line 3690 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1777 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 		//printf("function-definition -> declaration-specifiers declarator declaration-list compound-statement\n");}
					 }
#line 3698 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1782 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					 			current = global;
					 }
#line 3706 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1790 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
				  		//printf("declaration-list -> declaration\n");}
				  }
#line 3714 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1795 "ass4_15CS10044.y" /* yacc.c:1646  */
    {		
				  		//printf("declaration-list -> declaration-list declaration\n");}
				  }
#line 3722 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1802 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
					(yyval.instr) = next_instr;
				}
#line 3730 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1807 "ass4_15CS10044.y" /* yacc.c:1646  */
    {
		(yyval.node_attr) = makelist(next_instr);
		quad_fields x(0,0,0,GOTO_,0,0,0);
		quad_array->emit(x);
	}
#line 3740 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1814 "ass4_15CS10044.y" /* yacc.c:1646  */
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
		quad_fields x(t,0,0,Function,0,0,0);
		quad_array->emit(x);
		flag1 = 0;
		flag2 = 0;
		c = 0;
	}
#line 3761 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
    break;


#line 3765 "ass4_15CS10044.tab.c" /* yacc.c:1646  */
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
#line 1833 "ass4_15CS10044.y" /* yacc.c:1906  */
		


int yyerror(const char *s){
  printf("Parser Error : %s\n",s);
  return -1;
  
}
