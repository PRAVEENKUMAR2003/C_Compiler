
%{
#include <stdio.h>
int cnt_ln = 1; 
FILE *output_file;
 FILE *input_file;
%}

%%
\/\/.* ;
\/\*(.*\n)*\*\/ ;
^#include[ \t]+<.*> { fprintf(output_file, "HEADER: %s\n", yytext); }
(auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short) {fprintf(output_file, "KEYWORD: %s\n", yytext);}
([a-zA-Z]|_)(([a-zA-Z]|[0-9]|_)*) {fprintf(output_file, "IDENTIFIER: %s\n", yytext);}
[\n] {cnt_ln++;}
[0-9]+\.[0-9]* {fprintf(output_file, "FLOAT: %s\n", yytext);}
[0-9]+[Ee][+-]?[0-9]+ {fprintf(output_file, "EXPONENTIAL: %s\n", yytext);}
[0-9]+[Ll] {fprintf(output_file, "LONG INTEGER: %s\n", yytext);}
[0-9]+ {fprintf(output_file, "INTEGER: %s\n", yytext);}
[+]    { fprintf(output_file, "Operator: +\n"); }
[-]    { fprintf(output_file, "Operator: -\n"); }
[*]    { fprintf(output_file, "Operator: *\n"); }
[/]    { fprintf(output_file, "Operator: /\n"); }
[%%]   { fprintf(output_file, "Operator: %%\n"); }
"--"   { fprintf(output_file, "Operator: --\n"); }
"++"   { fprintf(output_file, "Operator: ++\n"); }
[=]    { fprintf(output_file, "Operator: =\n"); }
">="   { fprintf(output_file, "Operator: >=\n"); }
"<="   { fprintf(output_file, "Operator: <=\n"); }
">"   { fprintf(output_file, "Operator: >\n"); }
"<"   { fprintf(output_file, "Operator: <\n"); }
"!="   { fprintf(output_file, "Operator: !=\n"); }
"=="   { fprintf(output_file, "Operator: ==\n"); }
[&]    { fprintf(output_file, "Operator: &\n"); }
[\|]   { fprintf(output_file, "Operator: |\n"); }
"\|\|" { fprintf(output_file, "Operator: ||\n"); }
"&&"   { fprintf(output_file, "Operator: &&\n"); }
[\^]   { fprintf(output_file, "Operator: ^\n"); }
[!]    { fprintf(output_file, "Operator: !\n"); } 
[;]    { fprintf(output_file, "Operator: ;\n"); }
\"([^\\\n]|(\\.))*\" { fprintf(output_file, "STRING: %s\n", yytext); }
\'([^\\\n]|(\\.))*\' { fprintf(output_file, "CHARACTER: %s\n", yytext); }
[(]    { fprintf(output_file, "Left Parenthesis\n"); }
[)]    { fprintf(output_file, "Right Parenthesis\n"); }
[{]    { fprintf(output_file, "Left Curly Brace\n"); }
[}]    { fprintf(output_file, "Right Curly Brace\n"); }
[\[]   { fprintf(output_file, "Left Square Bracket\n"); }
[\]]   { fprintf(output_file, "Right Square Bracket\n"); }
[,]    { fprintf(output_file, "Comma\n"); }
([ \t\n])+ ; 
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
