/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    PRINT = 259,                   /* PRINT  */
    LET = 260,                     /* LET  */
    END = 261,                     /* END  */
    NOT = 262,                     /* NOT  */
    OR = 263,                      /* OR  */
    XOR = 264,                     /* XOR  */
    AND = 265,                     /* AND  */
    VAR = 266,                     /* VAR  */
    NUM = 267,                     /* NUM  */
    DATA = 268,                    /* DATA  */
    FLOAT = 269,                   /* FLOAT  */
    STRING = 270,                  /* STRING  */
    DIM = 271,                     /* DIM  */
    DIMDATA = 272,                 /* DIMDATA  */
    GOTO = 273,                    /* GOTO  */
    GOTOID = 274,                  /* GOTOID  */
    GOSUB = 275,                   /* GOSUB  */
    GOSUBID = 276,                 /* GOSUBID  */
    RETURN = 277,                  /* RETURN  */
    STOP = 278,                    /* STOP  */
    IF = 279,                      /* IF  */
    THEN = 280,                    /* THEN  */
    IFNUM = 281,                   /* IFNUM  */
    IFVAR = 282,                   /* IFVAR  */
    INPUT = 283,                   /* INPUT  */
    INPUTTOKEN = 284,              /* INPUTTOKEN  */
    REM = 285,                     /* REM  */
    FOR = 286,                     /* FOR  */
    NEXT = 287,                    /* NEXT  */
    TO = 288,                      /* TO  */
    STEP = 289,                    /* STEP  */
    DEF = 290,                     /* DEF  */
    FN = 291                       /* FN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define PRINT 259
#define LET 260
#define END 261
#define NOT 262
#define OR 263
#define XOR 264
#define AND 265
#define VAR 266
#define NUM 267
#define DATA 268
#define FLOAT 269
#define STRING 270
#define DIM 271
#define DIMDATA 272
#define GOTO 273
#define GOTOID 274
#define GOSUB 275
#define GOSUBID 276
#define RETURN 277
#define STOP 278
#define IF 279
#define THEN 280
#define IFNUM 281
#define IFVAR 282
#define INPUT 283
#define INPUTTOKEN 284
#define REM 285
#define FOR 286
#define NEXT 287
#define TO 288
#define STEP 289
#define DEF 290
#define FN 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
