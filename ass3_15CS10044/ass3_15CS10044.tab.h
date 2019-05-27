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
