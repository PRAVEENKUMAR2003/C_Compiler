%{
	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"


%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT
%token RETURN MAIN
%token VOID
%token WHILE FOR DO 
%token BREAK CONTINUE GOTO
%token ENDIF
%token SWITCH CASE DEFAULT
%expect 2

%token identifier
%token integer_constant string_constant float_constant character_constant binary_constant hexadecimal_constant exponent_constant octal_constant
%token LEFT_SHIFT RIGHT_SHIFT
%nonassoc ELSE

%right MOD_EQUAL
%right MULTIPLY_EQUAL DIVIDE_EQUAL
%right ADD_EQUAL SUBTRACT_EQUAL
%right '='

%left OR_OR
%left AND_AND
%left '^'
%left EQUAL NOT_EQUAL
%left LESS_EQUAL LESS GREAT_EQUAL GREAT
%left '+' '-'
%left '*' '/' '%'

%right SIZEOF
%right NOT
%left INCREMENT DECREMENT 


%start begin_parse

%%
begin_parse
			: declarations {printf("valid syntax\n"); exit(0);};

declarations
			: declaration declarations 
			|	
			;

declaration
			: variable_dec 
			| function_dec
			| structure_dec;

structure_dec
			: STRUCT identifier '{' structure_content  '}' ';';

structure_content : variable_dec structure_content | ;

variable_dec
			: datatype variables ';' 
			| structure_initialize;

structure_initialize 
			: STRUCT identifier variables;

variables
			: identifier_name multiple_variables;

multiple_variables
			: ',' variables 
			| ;

identifier_name 
			: identifier {printf("found identifier\n");} extended_identifier;

extended_identifier : array_identifier | '=' expression ; 

array_identifier
			: '[' array_dims
			| ;

array_dims
			: integer_constant  ']' initilization
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

string_initilization
			: '='  string_constant ;

array_initialization
			: '=' '{' array_values '}';

array_values
			: integer_constant multiple_array_values;

multiple_array_values
			: ',' array_values 
			| ;


datatype 
			: INT {printf("found int\n");}| CHAR | FLOAT | DOUBLE 
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			| VOID ;

unsigned_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT | ;

short_grammar 
			: INT | ;

function_dec
			: function_datatype function_parameters;

function_datatype
			: datatype identifier '(' ;

function_parameters
			: parameters ')' statement;

parameters 
			: datatype all_parameter_identifiers | ;

all_parameter_identifiers 
			: parameter_identifier multiple_parameters;

multiple_parameters
			: ',' parameters 
			| ;

parameter_identifier 
			: identifier extended_parameter;

extended_parameter
			: '[' ']'
			| ;

statement 
			: expression_statment | multiple_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_dec;

multiple_statement 
			: '{' statments '}' ;

statments 
			: statement statments
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' statement extended_conditional_statements;

extended_conditional_statements
			: ELSE statement
			| ;

iterative_statements 
			: WHILE '(' simple_expression ')' statement 
			| FOR '(' for_initialization simple_expression ';' expression ')' 
			| DO statement WHILE '(' simple_expression ')' ';';

for_initialization
			: variable_dec
			| expression ';'
			| ';' ;

return_statement 
			: RETURN return_suffix;

return_suffix
			: ';' 
			| expression ';' ;

break_statement 
			: BREAK ';' ;

expression 
			: iden expressions
			| simple_expression ;

expressions
			: '=' expression 
			| ADD_EQUAL expression 
			| SUBTRACT_EQUAL expression 
			| MULTIPLY_EQUAL expression 
			| DIVIDE_EQUAL expression 
			| MOD_EQUAL expression 
			| INCREMENT 
			| DECREMENT ;

simple_expression 
			: and_expression simple_expression_breakup;

simple_expression_breakup 
			: OR_OR and_expression simple_expression_breakup | ;

and_expression 
			: unary_relation_expression and_expression_breakup;

and_expression_breakup
			: AND_AND unary_relation_expression and_expression_breakup
			| ;

unary_relation_expression 
			: NOT unary_relation_expression 
			| regular_expression ;

regular_expression 
			: sum_expression regular_expression_breakup;

regular_expression_breakup
			: relational_operators sum_expression 
			| ;

relational_operators 
			: GREAT_EQUAL
			| LESS_EQUAL
			| GREAT 
			| LESS
			| EQUAL
			| NOT_EQUAL ;

sum_expression 
			: sum_expression sum_operators term 
			| term ;

sum_operators 
			: '+' 
			| '-' ;

term
			: term multiply_operators factor 
			| factor ;

multiply_operators 
			: '*' | '/' | '%' ;

factor 
			: func | iden ;

iden 
			: identifier 
			| iden extended_iden;

extended_iden
			: '[' expression ']' 
			| '.' identifier;

func 
			: '(' expression ')' 
			| func_call | constant;

func_call
			: identifier '(' arguments ')';

arguments 
			: arguments_list | ;

arguments_list 
			: expression extended_arguments;

extended_arguments
			: ',' expression extended_arguments 
			| ;

constant 
			: integer_constant 	 
			| string_constant	 
			| float_constant	 
			| character_constant;

%%

extern FILE *yyin;
extern int yylineno;
extern char *yytext;



int main()
{
	yyin = fopen("test15.c", "r");
	printf("entering the parsing phase\n");
	int ok=yyparse();



	if(ok == 0)
	{
		printf("VALID PARSE\n");
	
	}
}

void yyerror(char *s)
{
	printf("Line No. : %d %s %s\n",yylineno, s, yytext);
	
}




int yywrap()
{
	return 1;
}