%option yylineno
%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"
#include "constant_table.h"
//#include "parser1.tab.h"
int cnt_ln = 1; 
FILE *output_file;
 FILE *input_file;
    int nested_count = 0;
    int check_nested = 0;
char buf[100];
int ok = 0;
symbol** symbol_table;
constant** constant_table;

/* 
extra tokens to be defined:
exponent_constant
binary constant
octal constant
hexadecimal constant

*/
%}







%%

[1-9]* {sym_add(symbol_table, yytext, yylineno, "identifier"); printf( "Line No. %d IDENTIFIER - %s\n", yylineno, yytext); return identifier;}

ws ; 
. { 
    if(yytext[0] == '#')
        printf("Line No. %d PREPROCESSOR ERROR - %s\n", yylineno, yytext);
    else
        printf("Line No. %d ERROR ILLEGAL CHARACTER - %s\n", yylineno, yytext);
    return 0;
  }
%%

int yywrap()
{
    return 1;
}

int main()
{
    yyin=fopen("test15.c", "r");
    yylex();
    fclose(yyin);
}