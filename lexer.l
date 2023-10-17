%option yylineno
%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"
#include "constant_table.h"
#include "parser1.tab.h"
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


/* Regular definitions */
num                 [0-9]
alpha               [a-zA-Z]
alphanum            {alpha}|{num}
keyword             char|int|main|float|double|short|long|unsigned|signed|main|while|for|break|if|else|continue|return|void|struct|typedef
escape_sequences    0|a|b|f|n|r|t|v|"\\"|"\""|"\'"
ws                  [ \t\r\f\v]+

%x DFA_ML
%s DFA_NUM



%%
"//".* { printf( "Line No. %d SINGLE LINE COMMENT - %s\n", yylineno, yytext); }
"/*" { BEGIN DFA_ML; }
<DFA_ML>"/*" { ++nested_count; check_nested = 1;}   
<DFA_ML>"*"+"/" {
                        if (nested_count) --nested_count;
                        else{ 
                            if(check_nested){
                                printf( "Line No. %d NESTED COMMENT\n", yylineno);
                                check_nested = 0;
                                ok=0;BEGIN INITIAL;
                            }
                            else{
                                printf( "Line No. %d MULTI LINE COMMENT\n", yylineno);
                                ok=0;BEGIN INITIAL;
                            }
                        } 
                    }
<DFA_ML>"*"+ ;
<DFA_ML>[^/*\n]+ ;
<DFA_ML>[/] ;
<DFA_ML>\n ;
<DFA_ML><<EOF>> { printf( "Line No. %d ERROR: MULTI LINE COMMENT NOT CLOSED\n", yylineno); return 0;}
#include[ ]*[/"<]{alpha}+\.h[/">]   { printf( "Line No. %d HEADER - %s\n", yylineno, yytext);}
("\"")[^\n\"]*("\"") { printf( "Line No. %d STRING - %s\n", yylineno, yytext);}
("\"")[^\n\"]* { printf( "Line No. %d ERROR: UNCLOSED STRING - %s\n", yylineno, yytext); return 0;}
("\'")(("\\"({escape_sequences}))|.)("\'") {  printf( "Line No. %d CHARACTER - %s\n", yylineno, yytext);}
("\'")(((("\\")[^0abfnrtv\\\"\'][^\n\']*))|[^\n\''][^\n\'']+)("\'") { printf( "Line No. %d ERROR: NOT A CHARACTER - %s\n", yylineno, yytext); return 0;}                        
"int" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return INT;}
"float" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return FLOAT;}
"double" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return DOUBLE;}
"long" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return LONG;}
"short" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return SHORT;}
"signed" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return SIGNED;}
"unsigned" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return UNSIGNED;}
"struct" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return STRUCT;}
"if" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return IF;}
"while" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return WHILE;}
"return" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return RETURN;}
"do" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return DO;}
"for" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return FOR;}
"else" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return ELSE;}
"break" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return BREAK;}
"switch" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return SWITCH;}
"default" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return DEFAULT;}
"continue" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return CONTINUE;}
"goto" { printf( "Line No. %d KEYWORD - %s\n", yylineno, yytext); return GOTO;}

0[bB][01]+[uU]?[lL]{0,2} { printf( "Line No. %d Binary - %s\n", yylineno, yytext); return binary_constant;}
0[0-7]+[uU]?[lL]{0,2} {printf( "Line No. %d Octal - %s\n", yylineno, yytext); return octal_constant;}
0[xX][A-Fa-f0-9]+[uU]?[lL]{0,2} {printf( "Line No. %d Hexadecimal - %s\n", yylineno, yytext); return hexadecimal_constant;}
[0-9]+ {printf( "Line No. %d NUMBER - %s", yylineno, yytext); return integer_constant; }
[1-9][0-9]*\.[0-9]*[eE][+-]?[0-9]+ {printf( "Line No. %d NUMBER - %s", yylineno, yytext); return exponent_constant;}
[1-9][0-9]*\.[0-9]+[fF]? {printf( "Line No. %d NUMBER - %s", yylineno, yytext); return float_constant;}
[1-9][0-9]*[fF] {printf( "Line No. %d NUMBER - %s", yylineno, yytext); return float_constant; }
[1-9][0-9]*[uU] {printf( "Line No. %d NUMBER - %s", yylineno, yytext); return integer_constant;}
[1-9][0-9]*[lL] {printf( "Line No. %d NUMBER - %s", yylineno, yytext); return integer_constant;}


[1-9][0-9]*\.[0-9]*[eE][+-]?[0-9]+[ ]*[^&+\-*\/\^%<>\|!?[)\]},;\\] {printf( "ERROR! Line No. %d NUMBER - %s", yylineno, yytext); exit(1);}
[1-9][0-9]*\.[0-9]+[fF]?[ ]*[^&+\-*\/\^%<>\|!?[)\]},;\\] {printf( "ERROR! Line No. %d NUMBER - %s", yylineno, yytext); exit(1);}
[1-9][0-9]*[fF][ ]*[^&+\-*\/\^%<>\|!?[)\]},;\\] {printf( "ERROR! Line No. %d NUMBER - %s", yylineno, yytext); exit(1);}
[1-9][0-9]*[uU][ ]*[^&+\-*\/\^%<>\|!?[)\]},;\\] {printf( "ERROR! ine No. %d NUMBER - %s", yylineno, yytext); exit(1);}
[1-9][0-9]*[lL][ ]*[^&+\-*\/\^%<>\|!?[)\]},;\\] {printf( "ERROR! Line No. %d NUMBER - %s", yylineno, yytext); exit(1);}

 /*
((_|{alpha})({alphanum}|_)*)[ ]*[(] {sym_add(symbol_table, yytext, yylineno, "function"); printf( "Line No. %d FUNCTION - %s\n", yylineno, yytext);}
    */
(_|{alpha})({alphanum}|_)* {printf( "Line No. %d IDENTIFIER - %s\n", yylineno, yytext); return identifier;}
"&&" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext);return AND_AND;}
"+" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext; }
"-" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"++" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return INCREMENT;}
"--" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return DECREMENT;}
"!" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return NOT;}
"~" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"*" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext; }
"/" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"%" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
">>" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return RIGHT_SHIFT;}
"<<" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return LEFT_SHIFT;}
"&" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"^" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext);return *yytext; }
\| { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
\|\| { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return OR_OR;}
"=" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext; }
">" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return GREAT;}
"<" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return LESS; }
">=" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return GREAT_EQUAL; }
"<=" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return LESS_EQUAL;}
"==" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return EQUAL;}
"!=" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return NOT_EQUAL;}
"?:" { printf( "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"[" { printf("Line No. %d LEFT BRACKET - %s\n", yylineno, yytext);return *yytext; }
"]" { printf("Line No. %d RIGHT BRACKET - %s\n", yylineno, yytext);return *yytext; }
"(" { printf("Line No. %d LEFT PARENTHESIS - %s\n", yylineno, yytext);return *yytext; }
")" { printf("Line No. %d RIGHT PARENTHESIS - %s\n", yylineno, yytext);return *yytext; }
"{" { printf("Line No. %d LEFT BRACE - %s\n", yylineno, yytext);return *yytext; }
"}" { printf("Line No. %d RIGHT BRACE - %s\n", yylineno, yytext);return *yytext; }
"," { printf("Line No. %d COMMA - %s\n", yylineno, yytext);return *yytext; }
";" { printf("Line No. %d SEMICOLON - %s\n", yylineno, yytext);return *yytext; }
#define[ \t]+[a-zA-Z_][a-zA-Z0-9_]*[ \t]+.* { printf("Line No. %d #define preprocessor directive- %s\n", yylineno, yytext); }
([ \t\n])+ ; 
. { 
    if(yytext[0] == '#')
        printf("Line No. %d PREPROCESSOR ERROR - %s\n", yylineno, yytext);
    else
        printf("Line No. %d ERROR ILLEGAL CHARACTER - %s\n", yylineno, yytext);
    return 0;
  }
%%

// int yywrap()
// {
//     return 1;
// }

// int main()
// {
//     yyin=fopen("test15.c", "r");
//     yylex();
//     fclose(yyin);
// }