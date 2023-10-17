%option yylineno
%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"
#include "constant_table.h"
#include "y.tab.h"
int cnt_ln = 1; 
FILE *output_file;
 FILE *input_file;
	int nested_count = 0;
	int check_nested = 0;
char buf[100];
int ok = 0;
symbol** symbol_table;
constant** constant_table;
%}


/* Regular definitions */
num              	[0-9]
alpha              	[a-zA-Z]
alphanum            {alpha}|{num}
keyword             char|int|main|float|double|short|long|unsigned|signed|main|while|for|break|if|else|continue|return|void|struct|typedef
escape_sequences    0|a|b|f|n|r|t|v|"\\"|"\""|"\'"
ws  				[ \t\r\f\v]+

%x DFA_ML
%s DFA_NUM



%%
"//".* { fprintf(output_file, "Line No. %d SINGLE LINE COMMENT - %s\n", yylineno, yytext); }
"/*" { BEGIN DFA_ML; }
<DFA_ML>"/*" { ++nested_count; check_nested = 1;}	
<DFA_ML>"*"+"/" {
                        if (nested_count) --nested_count;
                        else{ 
                            if(check_nested){
                                fprintf(output_file, "Line No. %d NESTED COMMENT\n", yylineno);
                                check_nested = 0;
                                ok=0;BEGIN INITIAL;
                            }
                            else{
                                fprintf(output_file, "Line No. %d MULTI LINE COMMENT\n", yylineno);
                                ok=0;BEGIN INITIAL;
                            }
                        } 
					}
<DFA_ML>"*"+ ;
<DFA_ML>[^/*\n]+ ;
<DFA_ML>[/] ;
<DFA_ML>\n ;
<DFA_ML><<EOF>> { fprintf(output_file, "Line No. %d ERROR: MULTI LINE COMMENT NOT CLOSED\n", yylineno); return 0;}
#include[ ]*[/"<]{alpha}+\.h[/">]   { fprintf(output_file, "Line No. %d HEADER - %s\n", yylineno, yytext);}
("\"")[^\n\"]*("\"") { add(constant_table, yytext, "String");fprintf(output_file, "Line No. %d STRING - %s\n", yylineno, yytext);}
("\"")[^\n\"]* { fprintf(output_file, "Line No. %d ERROR: UNCLOSED STRING - %s\n", yylineno, yytext); return 0;}
("\'")(("\\"({escape_sequences}))|.)("\'") { add(constant_table, yytext, "Char"); fprintf(output_file, "Line No. %d CHARACTER - %s\n", yylineno, yytext);}
("\'")(((("\\")[^0abfnrtv\\\"\'][^\n\']*))|[^\n\''][^\n\'']+)("\'") { fprintf(output_file, "Line No. %d ERROR: NOT A CHARACTER - %s\n", yylineno, yytext); return 0;}						 
"int" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return INT;}
"float" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return FLOAT;}
"double" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return DOUBLE;}
"long" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return LONG;}
"short" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return SHORT;}
"signed" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return SIGNED;}
"unsigned" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return UNSIGNED;}
"struct" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return STRUCT;}
"if" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return IF;}
"while" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return WHILE;}
"return" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return RETURN;}
"do" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return DO;}
"for" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return FOR;}
"else" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return ELSE;}
"break" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return BREAK;}
"switch" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return SWITCH;}
"default" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return DEFAULT;}
"continue" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return CONTINUE;}
"goto" { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext); return GOTO;}


0[bB][01]+[uU]?[lL]{0,2} {add(constant_table, yytext, "binary constant"); fprintf(output_file, "Line No. %d Binary - %s\n", yylineno, yytext);}
0[0-7]+[uU]?[lL]{0,2} {add(constant_table, yytext, "octal constant"); fprintf(output_file, "Line No. %d Octal - %s\n", yylineno, yytext);}
0[xX][A-Fa-f0-9]+[uU]?[lL]{0,2} {add(constant_table, yytext, "hexadecimal constant"); fprintf(output_file, "Line No. %d Hexadecimal - %s\n", yylineno, yytext);}
[0] {add(constant_table, yytext, "integer constant"); fprintf(output_file, "Line No. %d NUMBER - %s", yylineno, yytext); }
[1-9][0-9]* { strcpy(buf, yytext); BEGIN DFA_NUM;fprintf(output_file, "Line No. %d NUMBER - %s", yylineno, yytext); }
<DFA_NUM>{
\.[0-9]+[eE][+-]?[0-9]+[fF]? {add(constant_table, buf, "exponent/float constant");if (!ok){ok=1;fprintf(output_file, "%s\n", yytext);}  else {fprintf(output_file, "\nLine No. %d NUMBER ERROR!!!! - %s\n", yylineno, yytext); return 0;}}
\.[0-9]*[eE][+-]?[0-9]+[fF]? {add(constant_table, buf, "exponent/float constant");if (!ok){ok=1;fprintf(output_file, "%s\n", yytext);}  else {fprintf(output_file, "\nLine No. %d NUMBER ERROR!!!! - %s\n", yylineno, yytext); return 0;}}
\.[0-9]+[fF]? {add(constant_table, buf, "float constant");if (!ok){ok=1;fprintf(output_file, "%s\n", yytext);}else {fprintf(output_file, "\nLine No. %d NUMBER ERROR!!!! - %s\n", yylineno, yytext); return 0;}}
[fF] {if (!ok){add(constant_table, buf, "float constant"); ok=1;fprintf(output_file, "%s\n", yytext);}else {fprintf(output_file, "\nLine No. %d NUMBER ERROR!!!! - %s\n", yylineno, yytext); return 0;}}
[uU]?[lL]{0,2} {add(constant_table, buf, "unsigned/long integer_constant");if (!ok){ok=1;fprintf(output_file, "%s\n", yytext);}else {fprintf(output_file, "\nLine No. %d NUMBER ERROR!!!! - %s\n", yylineno, yytext); return 0;}}
[eE][+-]?[0-9]+[fF]? {if (!ok){ok=1;fprintf(output_file, "%s\n", yytext);}else {fprintf(output_file, "\nLine No. %d NUMBER ERROR!!!! - %s\n", yylineno, yytext); return 0;}}
"&&" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"+"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"-"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"*"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"/"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"%"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
">>" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"<<" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"&"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"^"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
\| {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
\|\| { add(constant_table, buf, "integer constant");if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"="	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
">"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"<"	{add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
">=" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"<=" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"==" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"!=" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
"?" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); ok=0;BEGIN INITIAL;}
([ \t\n])+ {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n");ok=0;BEGIN INITIAL;} 
")" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file,"Line No. %d RIGHT PARENTHESIS - %s\n", yylineno, yytext); ok=0;BEGIN INITIAL;}
"]" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file,"Line No. %d RIGHT BRACKET - %s\n", yylineno, yytext); ok=0;BEGIN INITIAL;}
"}" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file,"Line No. %d RIGHT BRACE - %s\n", yylineno, yytext); ok=0;BEGIN INITIAL;}
"," {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file,"Line No. %d COMMA - %s\n", yylineno, yytext); ok=0;BEGIN INITIAL;}
":" {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file,"Line No. %d COMMA - %s\n", yylineno, yytext); ok=0;BEGIN INITIAL;}
[;] {add(constant_table, buf, "integer constant"); if (!ok)fprintf(output_file, "\n"); fprintf(output_file,"Line No. %d SEMICOLON - %s\n", yylineno, yytext); ok=0;BEGIN INITIAL; }
. { fprintf(output_file, "\nLine No. %d NUMBER ERROR!!!! - %s\n", yylineno, yytext); return 0;}
}
 /*
((_|{alpha})({alphanum}|_)*)[ ]*[(]	{sym_add(symbol_table, yytext, yylineno, "function"); fprintf(output_file, "Line No. %d FUNCTION - %s\n", yylineno, yytext);}
    */
(_|{alpha})({alphanum}|_)* {sym_add(symbol_table, yytext, yylineno, "identifier"); fprintf(output_file, "Line No. %d IDENTIFIER - %s\n", yylineno, yytext); return identifer;}
"&&" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext);return AND_AND;}
"+"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext; }
"-"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"++" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return INCREMENT;}
"--" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return DECREMENT;}
"!"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return NOT;}
"~"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"*"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext; }
"/"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"%"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
">>" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return RIGHT_SHIFT;}
"<<" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return LEFT_SHIFT;}
"&"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"^"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext);return *yytext; }
\| { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
\|\| { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return OR_OR}
"="	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext; }
">"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return GREAT;}
"<"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return LESS; }
">=" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext);return return GREAT_EQUAL; }
"<=" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return LESS_EQUAL;}
"==" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return EQUAL;}
"!=" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return NOT_EQUAL;}
"?:" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno,yytext); return *yytext;}
"[" { fprintf(output_file,"Line No. %d LEFT BRACKET - %s\n", yylineno, yytext);return *yytext; }
"]" { fprintf(output_file,"Line No. %d RIGHT BRACKET - %s\n", yylineno, yytext);return *yytext; }
"(" { fprintf(output_file,"Line No. %d LEFT PARENTHESIS - %s\n", yylineno, yytext);return *yytext; }
")" { fprintf(output_file,"Line No. %d RIGHT PARENTHESIS - %s\n", yylineno, yytext);return *yytext; }
"{" { fprintf(output_file,"Line No. %d LEFT BRACE - %s\n", yylineno, yytext);return *yytext; }
"}" { fprintf(output_file,"Line No. %d RIGHT BRACE - %s\n", yylineno, yytext);return *yytext; }
"," { fprintf(output_file,"Line No. %d COMMA - %s\n", yylineno, yytext);return *yytext; }
";" { fprintf(output_file,"Line No. %d SEMICOLON - %s\n", yylineno, yytext);return *yytext; }
#define[ \t]+[a-zA-Z_][a-zA-Z0-9_]*[ \t]+.* { fprintf(output_file,"Line No. %d #define preprocessor directive- %s\n", yylineno, yytext); }
([ \t\n])+ ; 
. { 
    if(yytext[0] == '#')
		fprintf(output_file,"Line No. %d PREPROCESSOR ERROR - %s\n", yylineno, yytext);
	else
		fprintf(output_file,"Line No. %d ERROR ILLEGAL CHARACTER - %s\n", yylineno, yytext);
    return 0;
  }
%%

int yywrap() {
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s input_file output_file\n", argv[0]);
        return 1;
    }

    input_file = fopen(argv[1], "r");
    if (!input_file) {
        perror("Error opening input file");
        return 1;
    }

    output_file = fopen(argv[2], "w");
    if (!output_file) {
        perror("Error opening output file");
        fclose(input_file);
        return 1;
    }

    yyin = input_file;
     symbol_table= symboltable();
    constant_table=constanttable();
    yylex();
   
    print_table(symbol_table);
    print_const_table(constant_table);
    fclose(input_file);
    fclose(output_file);
    printf("Scanned Successfully\n");
    return 0;
}