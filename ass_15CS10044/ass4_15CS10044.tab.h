/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 11 "ass4_15CS10044.y" /* yacc.c:1909  */

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

#line 122 "ass4_15CS10044.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASS4_15CS10044_TAB_H_INCLUDED  */
