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
#line 1 "ass3_15CS10044.y" /* yacc.c:339  */

#include <stdio.h>
int yyerror(char *);


#line 72 "ass3_15CS10044.tab.c" /* yacc.c:339  */

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
   by #include "ass3_15CS10044.tab.h".  */
#ifndef YY_YY_ASS3_15CS10044_TAB_H_INCLUDED
# define YY_YY_ASS3_15CS10044_TAB_H_INCLUDED
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
    CONSTANT = 258,
    IDENTIFIER = 259,
    STRING = 260,
    UNSIGNED = 261,
    BREAK = 262,
    RETURN = 263,
    VOID = 264,
    CASE = 265,
    FLOAT = 266,
    SHORT = 267,
    CHAR = 268,
    FOR = 269,
    SIGNED = 270,
    WHILE = 271,
    GOTO = 272,
    BOOL = 273,
    CONTINUE = 274,
    IF = 275,
    DEFAULT = 276,
    DO = 277,
    INT = 278,
    SWITCH = 279,
    DOUBLE = 280,
    LONG = 281,
    ELSE = 282,
    MATRIX = 283,
    PTR_OP = 284,
    INC_OP = 285,
    DEC_OP = 286,
    LSHIFT_OP = 287,
    RSHIFT_OP = 288,
    LEQ_OP = 289,
    GEQ_OP = 290,
    EQ_OP = 291,
    NEQ_OP = 292,
    AND_OP = 293,
    OR_OP = 294,
    MULA_OP = 295,
    DIVA_OP = 296,
    REMA_OP = 297,
    ADDA_OP = 298,
    SUBA_OP = 299,
    LSA_OP = 300,
    RSA_OP = 301,
    ANDA_OP = 302,
    POWA_OP = 303,
    ORA_OP = 304,
    TRA_OP = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS3_15CS10044_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 174 "ass3_15CS10044.tab.c" /* yacc.c:358  */

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
#define YYLAST   665

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    63,    58,     2,
      52,    53,    59,    60,    57,    61,    56,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    71,
      64,    70,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    67,    73,     2,     2,     2,     2,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    29,    30,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    45,    46,    49,    50,    51,
      52,    55,    56,    57,    58,    61,    64,    65,    66,    67,
      70,    71,    72,    75,    76,    77,    80,    81,    82,    83,
      84,    87,    88,    89,    92,    93,    96,    97,   100,   101,
     104,   105,   108,   109,   112,   113,   116,   117,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   133,
     134,   138,   143,   144,   148,   149,   153,   154,   157,   158,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     173,   174,   177,   178,   179,   180,   181,   182,   183,   189,
     190,   193,   196,   197,   200,   201,   204,   205,   208,   209,
     212,   213,   216,   217,   218,   219,   223,   226,   227,   230,
     231,   237,   238,   239,   240,   241,   242,   245,   246,   250,
     251,   252,   255,   256,   259,   260,   263,   264,   268,   269,
     270,   275,   276,   277,   278,   279,   280,   283,   284,   285,
     286,   287,   291,   292,   295,   296,   299,   300,   305,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT", "IDENTIFIER", "STRING",
  "UNSIGNED", "BREAK", "RETURN", "VOID", "CASE", "FLOAT", "SHORT", "CHAR",
  "FOR", "SIGNED", "WHILE", "GOTO", "BOOL", "CONTINUE", "IF", "DEFAULT",
  "DO", "INT", "SWITCH", "DOUBLE", "LONG", "ELSE", "MATRIX", "PTR_OP",
  "INC_OP", "DEC_OP", "LSHIFT_OP", "RSHIFT_OP", "LEQ_OP", "GEQ_OP",
  "EQ_OP", "NEQ_OP", "AND_OP", "OR_OP", "MULA_OP", "DIVA_OP", "REMA_OP",
  "ADDA_OP", "SUBA_OP", "LSA_OP", "RSA_OP", "ANDA_OP", "POWA_OP", "ORA_OP",
  "TRA_OP", "\"then\"", "'('", "')'", "'['", "']'", "'.'", "','", "'&'",
  "'*'", "'+'", "'-'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "':'", "'='", "';'", "'{'", "'}'", "$accept", "primary-expression",
  "postfix-expression", "argument-expression-list", "unary-operator",
  "unary-expression", "cast-expression", "multiplicative-expression",
  "additive-expression", "shift-expression", "relational-expression",
  "equality-expreesion", "AND-expression", "exclusive-OR-expression",
  "inclusive-OR-expression", "logical-AND-expression",
  "logical-OR-expression", "conditional-expression",
  "assignment-expression", "assignment-operator", "expression",
  "constant-expression", "declaration", "declaration-specifiers",
  "init-declarator-list", "init-declarator", "type-specifiers",
  "declarator", "direct-declarator", "pointer", "parameter-type-list",
  "parameter-list", "parameter-declaration", "identifier-list",
  "initializer", "initializer-row-list", "initializer-row", "designation",
  "designator-list", "designator", "statement", "expression-statement",
  "labeled-statement", "compound-statement", "block-item-list",
  "block-item", "selection-statement", "iteration-statement",
  "jump-statement", "translation-unit", "external-declaration",
  "function-definition", "declaration-list", YY_NULLPTR
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
     305,   306,    40,    41,    91,    93,    46,    44,    38,    42,
      43,    45,    47,    37,    60,    62,    94,   124,    63,    58,
      61,    59,   123,   125
};
# endif

#define YYPACT_NINF -157

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-157)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     637,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,    25,   637,   617,  -157,  -157,  -157,    26,   -50,
    -157,   -44,  -157,   448,   -21,     6,  -157,  -157,  -157,   -28,
    -157,    26,  -157,   326,   218,  -157,    25,  -157,   466,   588,
     482,   -21,  -157,  -157,   -29,  -157,  -157,  -157,   560,   560,
     560,  -157,  -157,  -157,  -157,   321,  -157,   231,   560,   146,
    -157,   -10,    12,   100,    54,   118,    -3,     8,    16,    52,
     -31,  -157,  -157,  -157,    46,    59,    77,   560,    82,    95,
     135,    86,   130,   134,    40,   157,  -157,  -157,  -157,   -37,
    -157,  -157,  -157,  -157,  -157,   289,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,    26,   158,   155,  -157,    10,  -157,
     159,  -157,  -157,    38,   560,   209,  -157,   -35,   161,   326,
     -30,  -157,   211,  -157,  -157,  -157,   492,   560,   240,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,   560,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   560,   560,   560,   560,   560,   560,   560,   560,
     560,   560,    40,  -157,  -157,   -25,  -157,   176,   391,   560,
     179,  -157,   560,    40,   235,   560,   560,  -157,  -157,  -157,
    -157,  -157,   637,  -157,   243,  -157,  -157,   197,  -157,   321,
    -157,   321,  -157,  -157,  -157,  -157,  -157,    49,  -157,    68,
    -157,  -157,  -157,  -157,  -157,   -10,   -10,    12,    12,   100,
     100,   100,   100,    54,    54,   118,    -3,     8,    16,    52,
     -34,  -157,  -157,    40,   387,   387,    57,  -157,    63,  -157,
     201,    69,  -157,  -157,  -157,  -157,   161,  -157,   326,  -157,
     560,  -157,   560,  -157,   496,   528,    40,    40,   560,    40,
    -157,  -157,  -157,    40,    87,    40,    88,  -157,   227,    89,
    -157,  -157,    40,  -157,    40,    40,  -157,  -157,  -157,  -157
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    88,    80,    84,    82,    81,    87,    89,    83,    85,
      86,   155,     0,    75,     0,   152,   154,    92,     0,   100,
      73,     0,    76,    78,    91,     0,    74,     1,   153,     0,
      99,     0,    72,     0,     0,   158,     0,   157,     0,     0,
       0,    90,    93,    77,    78,     3,     2,     4,     0,     0,
       0,    17,    18,    19,    20,     0,     6,    21,     0,    25,
      26,    30,    33,    36,    41,    44,    46,    48,    50,    52,
      54,    56,   108,    79,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   133,    69,     0,
     136,   137,   123,   121,   122,     0,   134,   124,   125,   126,
     159,   156,   106,    98,   105,     0,   101,   102,     0,    95,
       0,    22,    23,     0,     0,     0,   113,     0,   110,     0,
       0,   117,     0,    12,    13,    14,     0,     0,     0,    25,
      24,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   149,   151,     0,    71,     0,     0,     0,
       0,   148,     0,     0,     0,     0,     0,   127,   132,   135,
     104,    96,     0,    97,     0,    94,     5,     0,   120,     0,
     109,     0,   112,   116,   118,    11,     9,     0,    15,     0,
      10,    57,    27,    28,    29,    31,    32,    34,    35,    39,
      40,    37,    38,    42,    43,    45,    47,    49,    51,    53,
       0,   129,   150,     0,     0,     0,     0,   147,     0,   131,
       0,     0,    70,   103,   107,   119,   111,   115,     0,     8,
       0,     7,     0,   130,     0,     0,     0,     0,     0,     0,
     114,    16,    55,     0,     0,     0,     0,   141,   138,     0,
     140,   146,     0,   144,     0,     0,   142,   145,   143,   139
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,  -157,  -157,    17,   -40,    34,    35,     0,
      44,    99,   101,    98,   104,    97,  -157,   -63,   -33,  -157,
     -48,   150,   -19,     3,  -157,   234,  -157,    -7,   241,   248,
    -157,  -157,    90,  -157,   -32,  -157,    79,    78,  -157,   151,
     -45,  -156,  -157,   -17,  -157,   178,  -157,  -157,  -157,  -157,
     260,  -157,  -157
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,    57,   197,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    88,   142,
      89,   167,    11,    36,    21,    22,    13,    44,    24,    25,
     105,   106,   107,   108,   116,   117,   118,   119,   120,   121,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    14,
      15,    16,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      72,    73,   113,    12,    35,    23,    37,   110,   160,    19,
      17,    29,   225,    31,   166,    90,    26,    12,   130,   100,
     176,   101,    72,   176,   114,    42,   115,    32,   165,    17,
      17,    39,   176,    40,   177,   242,   189,   161,   190,   174,
     193,    33,   104,    45,    74,    47,   222,    75,    76,   143,
      77,   166,   144,   145,    78,   156,    79,    80,    18,    81,
      82,    83,    84,   183,    85,   111,   112,   184,   244,   245,
      48,    49,   146,   147,   157,   129,    90,    18,    18,   199,
      45,    46,    47,   158,    19,    19,    72,   192,   150,   151,
     159,   186,    50,   198,   129,   176,    20,   180,    51,    52,
      53,    54,   239,   202,   203,   204,   240,    48,    49,   201,
     246,    86,    34,   220,   176,   162,   247,   221,   152,   153,
     176,   226,   249,   241,   228,   176,   176,   231,   229,    50,
     163,   129,   148,   149,   168,    51,    52,    53,    54,   170,
     262,   264,   266,   232,   176,   176,   176,   169,   164,   224,
     209,   210,   211,   212,   154,   155,    72,   171,    72,   237,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   243,   252,
     205,   206,   172,   207,   208,   104,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   254,   256,   213,   214,
     259,   257,   258,   173,   260,    72,   250,   251,   261,   175,
     263,   181,   182,   188,   185,   195,   141,   267,   191,   268,
     269,    45,    74,    47,     1,    75,    76,     2,    77,     3,
       4,     5,    78,     6,    79,    80,     7,    81,    82,    83,
      84,     8,    85,     9,   200,   223,    10,   234,    48,    49,
     227,   230,   235,   248,   265,   215,   217,   219,   216,   129,
     122,   123,   124,   218,   187,    43,    41,    30,   236,   238,
      50,   194,   233,   179,    28,     0,    51,    52,    53,    54,
       0,   125,     0,   126,     0,   127,     0,   128,     0,    86,
      34,    87,    45,    74,    47,     1,    75,    76,     2,    77,
       3,     4,     5,    78,     6,    79,    80,     7,    81,    82,
      83,    84,     8,    85,     9,     0,     0,    10,     0,    48,
      49,     0,     0,     0,    45,    46,    47,     0,     0,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    48,    49,     0,     0,     0,    48,    49,     0,     0,
      86,    34,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,   114,     0,   115,    50,    51,
      52,    53,    54,     0,    51,    52,    53,    54,     0,     0,
      45,    46,    47,    55,    45,    46,    47,     1,    55,     0,
       2,     0,     3,     4,     5,     0,     6,     0,     0,     7,
       0,     0,     0,     0,     8,     0,     9,    48,    49,    10,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    50,     0,    51,    52,    53,    54,    51,
      52,    53,    54,     0,     1,     0,     0,     2,    86,     3,
       4,     5,    86,     6,     0,     0,     7,     0,     0,     0,
       0,     8,     1,     9,     0,     2,    10,     3,     4,     5,
       0,     6,     0,     0,     7,    45,    46,    47,     0,     8,
       0,     9,     0,     0,    10,    45,    46,    47,     0,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,    33,     0,
      34,     0,    48,    49,     0,     0,    48,    49,     0,     0,
       0,    45,    46,    47,    50,     0,     0,   109,    34,     0,
      51,    52,    53,    54,    50,   196,     0,     0,    50,   253,
      51,    52,    53,    54,    51,    52,    53,    54,    48,    49,
       0,     0,     0,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,   255,     0,     0,     0,     0,    51,    52,    53,    54,
      48,    49,   102,     0,     1,     0,     0,     2,     0,     3,
       4,     5,     0,     6,     0,     0,     7,     0,     0,     0,
       0,     8,    50,     9,     0,     0,    10,    27,    51,    52,
      53,    54,     0,     1,     0,     0,     2,     0,     3,     4,
       5,     0,     6,     0,     0,     7,     0,     0,     0,     0,
       8,   103,     9,     1,     0,    10,     2,     0,     3,     4,
       5,     0,     6,     0,     0,     7,     0,     0,     0,     0,
       8,     0,     9,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      33,    33,    50,     0,    23,    12,    23,    40,    39,    59,
       4,    18,   168,    57,    77,    34,    13,    14,    58,    38,
      57,    38,    55,    57,    54,    53,    56,    71,    76,     4,
       4,    52,    57,    54,    71,    69,    71,    68,    73,    84,
      70,    70,    39,     3,     4,     5,    71,     7,     8,    59,
      10,   114,    62,    63,    14,    58,    16,    17,    52,    19,
      20,    21,    22,    53,    24,    48,    49,    57,   224,   225,
      30,    31,    60,    61,    66,    58,    95,    52,    52,   127,
       3,     4,     5,    67,    59,    59,   119,   119,    34,    35,
      38,    53,    52,   126,    77,    57,    71,   104,    58,    59,
      60,    61,    53,   143,   144,   145,    57,    30,    31,   142,
      53,    71,    72,   161,    57,    69,    53,   162,    64,    65,
      57,   169,    53,    55,   172,    57,    57,   175,   173,    52,
      71,   114,    32,    33,    52,    58,    59,    60,    61,     4,
      53,    53,    53,   176,    57,    57,    57,    52,    71,   168,
     150,   151,   152,   153,    36,    37,   189,    71,   191,   191,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   223,   242,
     146,   147,    52,   148,   149,   182,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   244,   245,   154,   155,
     248,   246,   247,    69,   249,   238,   238,   240,   253,    52,
     255,    53,    57,     4,    55,     4,    70,   262,    57,   264,
     265,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     4,    69,    28,     4,    30,    31,
      71,    16,    55,    52,    27,   156,   158,   160,   157,   242,
      29,    30,    31,   159,   114,    31,    25,    19,   189,   191,
      52,   120,   182,    95,    14,    -1,    58,    59,    60,    61,
      -1,    50,    -1,    52,    -1,    54,    -1,    56,    -1,    71,
      72,    73,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    30,    31,    -1,    -1,    -1,    30,    31,    -1,    -1,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    56,    52,    58,
      59,    60,    61,    -1,    58,    59,    60,    61,    -1,    -1,
       3,     4,     5,    72,     3,     4,     5,     6,    72,    -1,
       9,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    30,    31,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    52,    -1,    58,    59,    60,    61,    58,
      59,    60,    61,    -1,     6,    -1,    -1,     9,    71,    11,
      12,    13,    71,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,     6,    25,    -1,     9,    28,    11,    12,    13,
      -1,    15,    -1,    -1,    18,     3,     4,     5,    -1,    23,
      -1,    25,    -1,    -1,    28,     3,     4,     5,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    30,    31,    -1,    -1,    30,    31,    -1,    -1,
      -1,     3,     4,     5,    52,    -1,    -1,    55,    72,    -1,
      58,    59,    60,    61,    52,    53,    -1,    -1,    52,    53,
      58,    59,    60,    61,    58,    59,    60,    61,    30,    31,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      30,    31,     4,    -1,     6,    -1,    -1,     9,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    52,    25,    -1,    -1,    28,     0,    58,    59,
      60,    61,    -1,     6,    -1,    -1,     9,    -1,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    53,    25,     6,    -1,    28,     9,    -1,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    11,    12,    13,    15,    18,    23,    25,
      28,    96,    97,   100,   123,   124,   125,     4,    52,    59,
      71,    98,    99,   101,   102,   103,    97,     0,   124,   101,
     103,    57,    71,    70,    72,    96,    97,   117,   126,    52,
      54,   102,    53,    99,   101,     3,     4,     5,    30,    31,
      52,    58,    59,    60,    61,    72,    75,    76,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   108,     4,     7,     8,    10,    14,    16,
      17,    19,    20,    21,    22,    24,    71,    73,    92,    94,
      96,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      96,   117,     4,    53,    97,   104,   105,   106,   107,    55,
      92,    79,    79,    94,    54,    56,   108,   109,   110,   111,
     112,   113,    29,    30,    31,    50,    52,    54,    56,    79,
      80,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    70,    93,    59,    62,    63,    60,    61,    32,    33,
      34,    35,    64,    65,    36,    37,    58,    66,    67,    38,
      39,    68,    69,    71,    71,    94,    91,    95,    52,    52,
       4,    71,    52,    69,   114,    52,    57,    71,    73,   119,
     101,    53,    57,    53,    57,    55,    53,    95,     4,    71,
      73,    57,   108,    70,   113,     4,    53,    77,    92,    94,
       4,    92,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    86,    87,    88,    89,
      94,   114,    71,    69,    96,   115,    94,    71,    94,   114,
      16,    94,    92,   106,     4,    55,   110,   108,   111,    53,
      57,    55,    69,   114,   115,   115,    53,    53,    52,    53,
     108,    92,    91,    53,    94,    53,    94,   114,   114,    94,
     114,   114,    53,   114,    53,    27,    53,   114,   114,   114
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    79,    80,    81,    81,    81,    81,
      82,    82,    82,    83,    83,    83,    84,    84,    84,    84,
      84,    85,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   121,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     3,     2,     2,     2,     1,     3,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     2,
       1,     1,     1,     3,     2,     1,     1,     3,     1,     3,
       1,     3,     2,     1,     4,     3,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       4,     3,     3,     2,     1,     2,     1,     1,     5,     7,
       5,     5,     6,     7,     6,     7,     6,     3,     2,     2,
       3,     2,     1,     2,     1,     1,     4,     3,     1,     2
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
#line 27 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("primary-expression -> IDENTIFIER\n");}
#line 1541 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("primary-expression -> CONSTANT\n");}
#line 1547 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 29 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("primary-expression -> STRING\n"); }
#line 1553 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 30 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("primary-expression -> (expression)\n");}
#line 1559 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 34 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> primary-expression\n");}
#line 1565 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 35 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression[expression]\n");}
#line 1571 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 36 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression(argument-expression-list)\n");}
#line 1577 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 37 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression()\n");}
#line 1583 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 38 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression.IDENTIFIER\n");}
#line 1589 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 39 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression -> IDENTIFIER\n");}
#line 1595 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 40 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression ++\n");}
#line 1601 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 41 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression --\n");}
#line 1607 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 42 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("postfix-expression -> postfix-expression .'\n");}
#line 1613 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 45 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("argument-expression-list -> assignment-expression\n");}
#line 1619 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 46 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("argument-expression-list -> argument-expression-list,assignment-expression\n");}
#line 1625 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 49 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-operator -> &\n");}
#line 1631 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 50 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-operator -> *\n");}
#line 1637 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 51 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-operator -> +\n");}
#line 1643 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 52 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-operator -> -\n");}
#line 1649 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 55 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-expression -> postfix-expression\n");}
#line 1655 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 56 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-expression -> ++ unary-expression\n");}
#line 1661 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 57 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-expression -> -- unary-expression\n");}
#line 1667 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 58 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-expression -> unary-operator cast-expression\n");}
#line 1673 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 61 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("cast-expression -> unary-expression\n");}
#line 1679 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 64 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("multiplicative-expression -> cast-expression\n");}
#line 1685 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 65 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("multiplicative-expression -> multiplicative-expression * cast-expression\n");}
#line 1691 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 66 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("multiplicative-expression -> multiplicative-expression / cast-expression\n");}
#line 1697 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 67 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("multiplicative-expression -> multiplicative-expression MOD cast-expression\n");}
#line 1703 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 70 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("additive-expression -> multiplicative-expression\n");}
#line 1709 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 71 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("additive-expression -> additive-expression + multiplicative-expression\n");}
#line 1715 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 72 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("additive-expression -> additive-expression - multiplicative-expression\n");}
#line 1721 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 75 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("shift-expression -> additive-expression\n");}
#line 1727 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 76 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("shift-expression -> shift-expression << additive-expression\n");}
#line 1733 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 77 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("shift-expression -> shift-expression >> additive-expression\n");}
#line 1739 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 80 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("relational-expression -> shift-expression\n");}
#line 1745 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 81 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("relational-expression -> relational-expression < shift-expression\n");}
#line 1751 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 82 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("relational-expression -> relational-expression > shift-expression\n");}
#line 1757 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 83 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("relational-expression -> relational-expression <= shift-expression\n");}
#line 1763 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 84 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("relational-expression -> relational-expression >= shift-expression\n");}
#line 1769 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 87 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("equality-expreesion -> relational-expression\n");}
#line 1775 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 88 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("equality-expreesion -> equality-expreesion == relational-expression\n");}
#line 1781 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 89 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("equality-expreesion -> equality-expression != relational-expression\n");}
#line 1787 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 92 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("AND-expression -> equality-expreesion\n");}
#line 1793 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 93 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("AND-expression -> AND-expression & equality-expreesion\n");}
#line 1799 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 96 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("exclusive-OR-expression -> AND-expression\n");}
#line 1805 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 97 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("exclusive-OR-expression -> exclusive-OR-expression ^ AND-expression\n");}
#line 1811 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 100 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("inclusive-OR-expression -> exclusive-OR-expression\n");}
#line 1817 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 101 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("inclusive-OR-expression -> inclusive-OR-expression | exclusive-OR-expression\n");}
#line 1823 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 104 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("logical-AND-expression -> inclusive-OR-expression\n");}
#line 1829 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 105 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("logical-AND-expression -> logical-AND-expression && inclusive-OR-expression\n");}
#line 1835 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 108 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("logical-OR-expression -> logical-AND-expression\n");}
#line 1841 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 109 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("logical-OR-expression -> logical-OR-expression || logical-AND-expression\n");}
#line 1847 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 112 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("conditional-expression -> logical-OR-expression\n");}
#line 1853 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 113 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("conditional-expression -> logical-OR-expression ? expression : conditional-expression\n");}
#line 1859 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 116 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-expression -> conditional-expression\n");}
#line 1865 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 117 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("unary-expression assignment-operator assignment-expression\n");}
#line 1871 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 120 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> =\n");}
#line 1877 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 121 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> *=\n");}
#line 1883 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 122 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> /=\n");}
#line 1889 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 123 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> MOD=\n");}
#line 1895 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 124 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> +=\n");}
#line 1901 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 125 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> -=\n");}
#line 1907 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 126 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> <<=\n");}
#line 1913 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 127 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> >>=\n");}
#line 1919 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 128 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> &=\n");}
#line 1925 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 129 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> ^=\n");}
#line 1931 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 130 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("assignment-operator -> |=\n");}
#line 1937 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 133 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("expression -> assignment-expression\n");}
#line 1943 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 134 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("expression -> expression, assignment-expression\n");}
#line 1949 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 138 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("constant-expression -> conditional-expression\n");}
#line 1955 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 143 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declaration -> declaration-specifiers init-declarator-list ;\n");}
#line 1961 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 144 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declaration -> declaration-specifiers ;\n");}
#line 1967 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 148 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declaration-specifiers -> type-specifiers declaration-specifiers\n");}
#line 1973 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 149 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declaration-specifiers -> type-specifiers\n");}
#line 1979 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 153 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("init-declarator-list -> init-declarator\n");}
#line 1985 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 154 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("init-declarator-list -> init-declarator-list, init-declarator\n");}
#line 1991 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 157 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("init-declarator -> declarator\n");}
#line 1997 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 158 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("init-declarator -> declarator = initializer\n");}
#line 2003 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 161 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> VOID\n");}
#line 2009 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 162 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> CHAR\n");}
#line 2015 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 163 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> SHORT\n");}
#line 2021 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 164 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> INT\n");}
#line 2027 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 165 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> FLOAT\n");}
#line 2033 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 166 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> DOUBLE\n");}
#line 2039 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 167 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> MATRIX\n");}
#line 2045 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 168 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> SIGNED\n");}
#line 2051 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 169 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> UNSIGNED\n");}
#line 2057 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 170 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("type-specifiers -> BOOL\n");}
#line 2063 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 173 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declarator -> pointer direct-declarator\n");}
#line 2069 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 174 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declarator -> direct-declarator\n");}
#line 2075 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 177 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("direct-declarator -> IDENTIFIER\n");}
#line 2081 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 178 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("direct-declarator -> (declarator)\n");}
#line 2087 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 179 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("direct-declarator -> direct-declarator[assignment-expression]\n");}
#line 2093 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 180 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("direct-declarator -> direct-declarator[]\n");}
#line 2099 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 181 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("direct-declarator -> direct-declarator(parameter-type-list)\n");}
#line 2105 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 182 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("direct-declarator -> direct-declarator(identifier-list)\n");}
#line 2111 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 183 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("direct-declarator -> direct-declarator()\n");}
#line 2117 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 189 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("pointer -> *pointer\n");}
#line 2123 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 190 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("pointer -> *\n");}
#line 2129 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 193 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("parameter-type-list -> parameter-list\n");}
#line 2135 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 196 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("parameter-list -> parameter-declaration\n");}
#line 2141 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 197 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("parameter-list -> parameter-list, parameter-declaration\n");}
#line 2147 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 200 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("parameter-declaration -> declaration-specifiers declarator\n");}
#line 2153 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 201 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("parameter-declaration -> declaration-specifiers\n");}
#line 2159 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 204 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("identifier-list -> IDENTIFIER\n");}
#line 2165 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 205 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("identifier-list -> identifier-list, IDENTIFIER\n");}
#line 2171 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 208 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer -> assignment-expression\n");}
#line 2177 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 209 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer -> { initializer-row-list }\n");}
#line 2183 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 212 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer-row-list -> initializer-row\n");}
#line 2189 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 213 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer-row-list -> initializer-row-list ; initializer-row\n");}
#line 2195 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 216 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer-row -> designation initializer\n");}
#line 2201 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 217 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer-row -> initializer\n");}
#line 2207 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 218 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer-row -> initializer-row, designation initializer\n");}
#line 2213 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 219 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("initializer-row -> initializer-row, initializer\n");}
#line 2219 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 223 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("designation -> designator-list =\n");}
#line 2225 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 226 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("designator-list -> designator\n");}
#line 2231 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 227 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("designator-list -> designator-list designator\n");}
#line 2237 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 230 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("designator -> [constant-expression]");}
#line 2243 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 231 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("designator -> .IDENTIFIER");}
#line 2249 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 237 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("statement -> labeled-statement\n");}
#line 2255 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 238 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("statement -> compound-statement\n");}
#line 2261 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 239 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("statement -> expression-statement\n");}
#line 2267 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 240 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("statement -> selection-statement\n");}
#line 2273 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 241 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("statement -> iteration-statement\n");}
#line 2279 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 242 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("statement -> jump-statement\n");}
#line 2285 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 245 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("expression-statement -> expression ;\n");}
#line 2291 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 246 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("expression-statement -> ;\n");}
#line 2297 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 250 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("labeled-statement -> IDENTIFIER : statement\n");}
#line 2303 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 251 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("labeled-statement -> CASE constant-expression : statement\n");}
#line 2309 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 252 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("DEFAULT : statement\n");}
#line 2315 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 255 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("compound-statement -> { block-item-list }\n");}
#line 2321 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 256 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("compound-statement -> {}");}
#line 2327 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 259 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("block-item-list -> block-item\n");}
#line 2333 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 260 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("block-item-list -> block-item-list block-item\n");}
#line 2339 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 263 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("block-item -> declaration\n");}
#line 2345 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 264 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("block-item -> statement\n");}
#line 2351 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 268 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("selection-statement -> IF(expression) statement\n");}
#line 2357 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 269 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("selection-statement -> IF(expression) statement ELSE statement\n");}
#line 2363 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 270 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("selection-statement -> SWITCH (expression) statement\n");}
#line 2369 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 275 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("iteration-statement -> WHILE(expression) statement\n");}
#line 2375 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 276 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("iteration-statement -> DO statement WHILE (expression)\n");}
#line 2381 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 277 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("iteration-statement -> FOR (expression-opt;expression-opt;expression) statement\n");}
#line 2387 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 278 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("iteration-statement -> FOR (expression-opt;expression-opt;) statement\n");}
#line 2393 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 279 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("FOR (declaration expression-opt ; expression ) statement\n");}
#line 2399 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 280 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("FOR (declaration expression-opt ; ) statement\n");}
#line 2405 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 283 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("jump-statement -> GOTO IDENTIFIER; \n");}
#line 2411 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 284 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("jump-statement -> CONTINUE;\n");}
#line 2417 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 285 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("jump-statement -> BREAK;\n");}
#line 2423 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 286 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("jump-statement -> RETURN expression;\n");}
#line 2429 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 287 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("jump-statement -> RETURN;\n");}
#line 2435 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 291 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("translation-unit -> external-declaration\n");}
#line 2441 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 292 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("translation-unit -> translation-unit external-declaration\n");}
#line 2447 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 295 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("external-declaration -> function-definition\n");}
#line 2453 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 296 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("external-declaration -> declaration\n");}
#line 2459 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 299 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("function-definition -> declaration-specifiers declarator declaration-list compound-statement\n");}
#line 2465 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 300 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("function-definition -> declaration-specifiers declarator compound-statement\n");}
#line 2471 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 305 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declaration-list -> declaration\n");}
#line 2477 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 306 "ass3_15CS10044.y" /* yacc.c:1646  */
    {printf("declaration-list -> declaration-list declaration\n");}
#line 2483 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
    break;


#line 2487 "ass3_15CS10044.tab.c" /* yacc.c:1646  */
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
#line 311 "ass3_15CS10044.y" /* yacc.c:1906  */
		


int yyerror(char *s){
  printf("Parser Error : %s\n",s);
  return -1;
}
