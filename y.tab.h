/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NUMI = 258,
    NUMF = 259,
    ID = 260,
    BOOLB = 261,
    CHARC = 262,
    STRINGS = 263,
    POWER = 264,
    PRINT = 265,
    NL = 266,
    INT = 267,
    FLOAT = 268,
    CHAR = 269,
    STRING = 270,
    BOOL = 271,
    EQ = 272,
    GE = 273,
    LE = 274,
    IF = 275,
    ELSE = 276,
    FOR = 277,
    INC = 278,
    DEC = 279,
    WHILE = 280,
    DO = 281,
    VOID = 282,
    RETURN = 283,
    SWITCH = 284,
    CASE = 285,
    DEFAULT = 286,
    NE = 287,
    PRO = 288,
    MUL = 289,
    REM = 290
  };
#endif
/* Tokens.  */
#define NUMI 258
#define NUMF 259
#define ID 260
#define BOOLB 261
#define CHARC 262
#define STRINGS 263
#define POWER 264
#define PRINT 265
#define NL 266
#define INT 267
#define FLOAT 268
#define CHAR 269
#define STRING 270
#define BOOL 271
#define EQ 272
#define GE 273
#define LE 274
#define IF 275
#define ELSE 276
#define FOR 277
#define INC 278
#define DEC 279
#define WHILE 280
#define DO 281
#define VOID 282
#define RETURN 283
#define SWITCH 284
#define CASE 285
#define DEFAULT 286
#define NE 287
#define PRO 288
#define MUL 289
#define REM 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "pro.y" /* yacc.c:1921  */

    int i;
    float f;
    char c;
    char s [1000];
    int b;

#line 136 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
