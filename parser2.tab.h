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

#ifndef YY_YY_PARSER2_TAB_H_INCLUDED
# define YY_YY_PARSER2_TAB_H_INCLUDED
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
    IF = 258,                      /* IF  */
    WHILE = 259,                   /* WHILE  */
    FOR = 260,                     /* FOR  */
    DO = 261,                      /* DO  */
    SWITCH = 262,                  /* SWITCH  */
    CASE = 263,                    /* CASE  */
    DEFAULT = 264,                 /* DEFAULT  */
    INT = 265,                     /* INT  */
    CHAR = 266,                    /* CHAR  */
    FLOAT = 267,                   /* FLOAT  */
    DOUBLE = 268,                  /* DOUBLE  */
    LONG = 269,                    /* LONG  */
    SHORT = 270,                   /* SHORT  */
    SIGNED = 271,                  /* SIGNED  */
    UNSIGNED = 272,                /* UNSIGNED  */
    STRUCT = 273,                  /* STRUCT  */
    UNION = 274,                   /* UNION  */
    RETURN = 275,                  /* RETURN  */
    MAIN = 276,                    /* MAIN  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    GOTO = 279,                    /* GOTO  */
    ENDIF = 280,                   /* ENDIF  */
    VOID = 281,                    /* VOID  */
    identifier = 282,              /* identifier  */
    integer_constant = 283,        /* integer_constant  */
    string_constant = 284,         /* string_constant  */
    float_constant = 285,          /* float_constant  */
    character_constant = 286,      /* character_constant  */
    binary_constant = 287,         /* binary_constant  */
    hexadecimal_constant = 288,    /* hexadecimal_constant  */
    exponent_constant = 289,       /* exponent_constant  */
    octal_constant = 290,          /* octal_constant  */
    LEFT_SHIFT = 291,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 292,             /* RIGHT_SHIFT  */
    ELSE = 293,                    /* ELSE  */
    MOD_EQUAL = 294,               /* MOD_EQUAL  */
    MULTIPLY_EQUAL = 295,          /* MULTIPLY_EQUAL  */
    DIVIDE_EQUAL = 296,            /* DIVIDE_EQUAL  */
    ADD_EQUAL = 297,               /* ADD_EQUAL  */
    SUBTRACT_EQUAL = 298,          /* SUBTRACT_EQUAL  */
    LOGICAL_OR = 299,              /* LOGICAL_OR  */
    LOGICAL_AND = 300,             /* LOGICAL_AND  */
    EQUAL = 301,                   /* EQUAL  */
    NOT_EQUAL = 302,               /* NOT_EQUAL  */
    LESS_EQUAL = 303,              /* LESS_EQUAL  */
    LESS = 304,                    /* LESS  */
    GREAT_EQUAL = 305,             /* GREAT_EQUAL  */
    GREAT = 306,                   /* GREAT  */
    SIZEOF = 307,                  /* SIZEOF  */
    NOT = 308,                     /* NOT  */
    INCREMENT = 309,               /* INCREMENT  */
    DECREMENT = 310                /* DECREMENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER2_TAB_H_INCLUDED  */
