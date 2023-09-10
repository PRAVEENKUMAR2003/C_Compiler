%option yylineno
%{
#include <stdio.h>
#include "symbol_table.h"
#include "constant_table.h"
int cnt_ln = 1; 
FILE *output_file;
 FILE *input_file;
	int nested_count = 0;
	int check_nested = 0;
%}


/* Regular definitions */
num              	[0-9]
alpha              	[a-zA-Z]
alphanum            {alpha}|{num}
keyword             char|int|main|float|double|short|long|unsigned|signed|main|while|for|break|if|else|continue|return|void|struct
escape_sequences    0|a|b|f|n|r|t|v|"\\"|"\""|"\'"
ws  				[ \t\r\f\v]+

%x DFA_ML



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
                                BEGIN INITIAL;
                            }
                            else{
                                fprintf(output_file, "Line No. %d MULTI LINE COMMENT\n", yylineno);
                                BEGIN INITIAL;
                            }
                        } 
					}
<DFA_ML>"*"+ ;
<DFA_ML>[^/*\n]+ ;
<DFA_ML>[/] ;
<DFA_ML>\n ;
<DFA_ML><<EOF>> { fprintf(output_file, "Line No. %d ERROR: MULTI LINE COMMENT NOT CLOSED\n", yylineno); return 0;}
#include[ ]*[/"<]{alpha}+\.h[/">]   { fprintf(output_file, "Line No. %d HEADER - %s\n", yylineno, yytext);}
("\"")[^\n\"]*("\"") { fprintf(output_file, "Line No. %d STRING - %s\n", yylineno, yytext);}
("\"")[^\n\"]* { fprintf(output_file, "Line No. %d ERROR: UNCLOSED STRING - %s\n", yylineno, yytext); return 0;}
("\'")(("\\"({escape_sequences}))|.)("\'") { fprintf(output_file, "Line No. %d CHARACTER - %s\n", yylineno, yytext);}
("\'")(((("\\")[^0abfnrtv\\\"\'][^\n\']*))|[^\n\''][^\n\'']+)("\'") { fprintf(output_file, "Line No. %d ERROR: NOT A CHARACTER - %s\n", yylineno, yytext); return 0;}						 
(keyword) { fprintf(output_file, "Line No. %d KEYWORD - %s\n", yylineno, yytext);}
0[bB][01]+[uU]?[lL]{0,2} { fprintf(output_file, "Line No. %d Binary - %s\n", yylineno, yytext); }
0[0-7]+[uU]?[lL]{0,2} { fprintf(output_file, "Line No. %d Octal - %s\n", yylineno, yytext); }
0[xX][A-Fa-f0-9]+[uU]?[lL]{0,2} { fprintf(output_file, "Line No. %d Hexadecimal - %s\n", yylineno, yytext); }
[0-9]*\.[0-9]+[eE][+-]?[0-9]+[fF]? { fprintf(output_file, "Line No. %d Float - %s\n", yylineno, yytext); }
[0-9]+\.[0-9]*[eE][+-]?[0-9]+[fF]? { fprintf(output_file, "Line No. %d Float - %s\n", yylineno, yytext); }
[0-9]+\.[0-9]+[fF]? { fprintf(output_file, "Line No. %d Float - %s\n", yylineno, yytext); }
[0-9]+[fF] { fprintf(output_file, "Line No. %d Integer - %s\n", yylineno, yytext); }
[0-9]+[uU]?[lL]{0,2} { fprintf(output_file, "Line No. %d Integer - %s\n", yylineno, yytext); }
[0-9]+[eE][+-]?[0-9]+[fF]? { fprintf(output_file, "Line No. %d Integer - %s\n", yylineno, yytext); }
"&&" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext);}
"+"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"-"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"++" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"--" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"!"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"~"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"*"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"/"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"%"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
">>" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"<<" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"&"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"^"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
\| { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
\|\| { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"="	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
">"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"<"	{ fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
">=" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"<=" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"==" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
"!=" { fprintf(output_file, "Line No. %d OPERATOR - %s\n", yylineno, yytext); }
((_|{alpha})({alphanum}|_)*)[ ]*[(]	{ fprintf(output_file, "Line No. %d FUNCTION - %s\n", yylineno, yytext);}
(_|{alpha})({alphanum}|_)* { fprintf(output_file, "Line No. %d IDENTIFIER - %s\n", yylineno, yytext);}
[+-]?{num}+ { fprintf(output_file, "Line No. %d INTEGER - %s\n", yylineno, yytext);}
[+-]?{num}+\.({num}+)? { fprintf(output_file, "Line No. %d FLOATING POINT - %s\n", yylineno, yytext);}
([ \t\n])+ ; 
"[" { fprintf(output_file,"Line No. %d LEFT BRACKET - %s\n", yylineno, yytext); }
"]" { fprintf(output_file,"Line No. %d RIGHT BRACKET - %s\n", yylineno, yytext); }
"(" { fprintf(output_file,"Line No. %d LEFT PARENTHESIS - %s\n", yylineno, yytext); }
")" { fprintf(output_file,"Line No. %d RIGHT PARENTHESIS - %s\n", yylineno, yytext); }
"{" { fprintf(output_file,"Line No. %d LEFT BRACE - %s\n", yylineno, yytext); }
"}" { fprintf(output_file,"Line No. %d RIGHT BRACE - %s\n", yylineno, yytext); }
"," { fprintf(output_file,"Line No. %d COMMA - %s\n", yylineno, yytext); }
";" { fprintf(output_file,"Line No. %d SEMICOLON - %s\n", yylineno, yytext); }
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

    yylex();

    fclose(input_file);
    fclose(output_file);
    return 0;
}
