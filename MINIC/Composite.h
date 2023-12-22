#ifndef COMPOSITE_
#define COMPOSITE_
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <stdarg.h>
using namespace std;

class CSTNode;
extern CSTNode* g_root;

class CSTNode {
public:
	CSTNode(int, int, string, ...);
	virtual ~CSTNode();

	//  ********* QUERY METHODS **************
	int Getint();
	virtual string GetGraphVizLabel();
	CSTNode* GetChild(int index);
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent);
protected:
	
	// Type of node
	int m_nodeType;
	// A label that will be used to render the node in graphviz
	string m_graphvizLabel;
	int m_serial;
	// A counter counting the nodes created for giving a
	// unique serial counter
	static int ms_serialCounter;
	list<CSTNode*>* m_children;
};

#endif
