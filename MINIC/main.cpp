#include <iostream>
#include <stdlib.h>
#include "MINIC.tab.h"
using namespace  std;
extern FILE* yyin;

void main (int argc ,char **argv){

	fopen_s(&yyin, "test.txt", "r");
	yy::parser* p = new yy::parser();
	p->parse();
	
}