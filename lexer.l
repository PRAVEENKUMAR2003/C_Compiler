%{
    int cnt_ln=0;
    const int MAX_SIZE=1000;
    struct ref_node {
        int ref_line;
        struct ref_node* next;
    };

    struct symbol {
        char* name;
        int length;
        int scope;
        int type;
        struct ref_node* head;
        struct symbol* next;
    };

    //struct symbol* symbol_table[MAX_SIZE];
%}

DIGIT [0-9]
LETTER [a-zA-Z]
ID ([a-zA-Z]|_)(([a-zA-Z]|[0-9]|_)*)
INT {[0-9]}+
WS [ \t\n]



%%
(auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short) {printf("\nKEYWORD\n");} 
([a-zA-Z]|_)(([a-zA-Z]|[0-9]|_)*) {printf("\nIDENTIFIER\n");}
\/\/.* ;
\/\*(.*\n)\*\/ ;
[\n] {cnt_ln++;}
[0-9]+ {printf("\nINTEGER\n");}
[+]    { printf("Operator: +\n"); }
[-]    { printf("Operator: -\n"); }
[*]    { printf("Operator: *\n"); }
[/]    { printf("Operator: /\n"); }
[%%]   { printf("Operator: %%\n"); }
"--"   { printf("Operator: --\n"); }
"++"   { printf("Operator: ++\n"); }
[=]    { printf("Operator: =\n"); }
">="   { printf("Operator: >=\n"); }
"<="   { printf("Operator: <=\n"); }
"!="   { printf("Operator: !=\n"); }
"=="   { printf("Operator: ==\n"); }
[&]    { printf("Operator: &\n"); }
[\|]  { printf("Operator: |\n"); }
"\|\|" { printf("Operator: ||\n"); }
"&&"   { printf("Operator: &&\n"); }
[\^]   { printf("Operator: ^\n"); }
[!]    { printf("Operator: !\n"); } 
[;]    { printf("Operator: ;\n"); }
([ \t\n])+ ;
%%

int yywrap() {
    return 1;
}

int main(int argc, char* argv[])
{
    yylex();
    return 0;
}