%option noyywrap

%{
#include <iostream>
#include <cstdlib>
#include "MINIC.tab.h"
#define YY_DECL int yylex(yy::parser::semantic_type *yylval ,yy::parser::location_type *yylloc)
typedef yy::parser::token token;
// make location include the current token
# define YY_USER_ACTION yylloc->columns(yyleng);
%}

INT "0"|[1-9][0-9]*


%%

%{
// start where previous token ended
yylloc->step ();
%}

"if"			{ return token::IF;}
"do"			{ return token::DO;}
"else"			{ return token::ELSE; }
"return"		{ return token::RETURN; }
"break"			{ return token::BREAK; }
"continue"		{ return token::CONTINUE; }
"while"			{ return token::WHILE; }
"int"			{ return token::INT; }
"float"			{ return token::FLOAT; }

"("				{ return '(';}
")"				{ return ')';}
"{"				{ return '{';}
"}"				{ return '}';}
";"				{ return ';';}
","				{ return ',';}
"+"				{ return token::PLUS;}
"-"				{ return token::MINUS;}
"*"				{ return token::MULT;}
"/"				{ return token::DIV;}
"&&"			{ return token::AND;}
"||"			{ return token::OR;}
"!"				{ return token::NOT;}
"<"				{ return token::LT;}
">"				{ return token::GT;}
">="			{ return token::GTE;}
"<="			{ return token::LTE;}
"=="			{ return token::EQUAL;}
"!="			{ return token::NEQUAL;}
"="				{ return '=';}

({INT}?\.{INT})|({INT}\.{INT}?)		{	return token::NUMBER; }
{INT}								{   return token::NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]*				{   return token::IDENTIFIER; }

[ \t]									{ yylloc->step (); }
[\r\n]									{ yylloc->lines(1);}

%%