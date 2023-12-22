%language "C++"

%{
#include <iostream>
#include "MINIC.tab.h"

using namespace std;
extern int yylex(yy::parser::semantic_type *yylval ,yy::parser::location_type *yylloc);
extern FILE *yyin;

%}

%verbose
%locations
%debug

%initial-action {
// Filename for locations here
@$.begin.filename = @$.end.filename = new std::string("test.txt");
}

%start compile_unit
%token IDENTIFIER INT FLOAT CONTINUE RETURN BREAK IF WHILE DO NUMBER

// LOW PRIORITY
%right '='
%left OR
%left AND
%nonassoc GT GTE LT LTE EQUAL NEQUAL
%left  PLUS MINUS 
%left  MULT DIV 
%nonassoc NOT
%nonassoc IFPREC
%nonassoc ELSE
// HIGH PRIORITY

%%

compile_unit: statement							
			| compile_unit statement			
			| function_definition				
			| declaration ';'
			| compile_unit function_definition 
			| compile_unit declaration ';'
			;

function_definition : type_specifier  IDENTIFIER '(' fargs ')' compound_statement 
				|	  type_specifier  IDENTIFIER '('  ')' compound_statement  
				;

fargs :   declaration 		
		| fargs ',' declaration
		;

declaration : type_specifier IDENTIFIER
			;

type_specifier : INT
			   | FLOAT
			   ;

statement : expression ';'			
		  | compound_statement	    
		  | if_statement 
		  | while_statement			
		  | do_while_statement ';'
		  | RETURN expression ';'	
		  | BREAK ';'			
		  | CONTINUE ';'
		  | ';'		

compound_statement : '{' '}'
					| '{' statement_list '}'  
					;

if_statement : IF '(' expression ')' statement %prec IFPREC   
			 | IF '(' expression ')' statement ELSE statement  
			;

while_statement : WHILE '(' expression ')' statement  
			;

do_while_statement : DO statement WHILE '(' expression ')' 
				;

statement_list : statement					
			   | statement_list statement	
			   ;

expression: NUMBER							
		  | IDENTIFIER						
		  | IDENTIFIER '(' ')'				
		  | IDENTIFIER '(' args ')'			
		  | expression PLUS expression		 
		  | expression MINUS expression		 
		  | expression MULT expression		 
		  | expression DIV expression		 
		  | PLUS expression					 
		  | MINUS expression				 
		  | '(' expression ')'				 
		  | IDENTIFIER '=' expression		 
		  | expression AND expression		 
		  | expression OR expression		 
		  | NOT expression					 
		  | expression GT expression		 
		  | expression GTE expression		 
		  | expression LT expression		 
		  | expression LTE expression		 
		  | expression EQUAL expression		 
		  | expression NEQUAL expression	 
		  ;

args : expression							 	
	 | args ',' expression					 	
	 ;
	 
%%

namespace yy{
	void parser::error(yy::location const &loc, const string &message){
		std::cerr << "error at " << loc << ": " << message << std::endl;
	}
}