#include "CompositeConcrete.h"

const char* g_nodeTypeLabels[] = { "COMPILEUNIT","FUNCTIONDEFINITION" ,"FORMALARGS" ,"ACTUALARGS","DECLARATION",
									"EXPRESSIONSTATEMENT","TYPESPECIFIER",
								  "COMPOUNDSTATEMENT", "IFSTATEMENT", "WHILESTATEMENT","DOWHILESTATEMENT",
								  "RETURNSTATEMENT","BREAKSTATEMENT", "CONTINUESTATEMENT","NULLSTATEMENT",
								  "STATEMENTLIST", "EXPRESSION_NUMBER", "EXPRESSION_VARIABLE", "EXPRESSION_FCALL",
								  "EXPRESSION_ADD", "EXPRESSION_MINUS", "EXPRESSION_MULT", "EXPRESSION_DIV" ,
								  "NT_EXPRESSION_UNARYPLUS", "NT_EXPRESSION_UNARYMINUS", "NT_EXPRESSION_ASSIGN", "NT_EXPRESSION_AND",
								  "NT_EXPRESSION_OR", "NT_EXPRESSION_NOT", "NT_EXPRESSION_GT", "NT_EXPRESSION_GTE", "NT_EXPRESSION_LT",
								  "NT_EXPRESSION_LTE", "NT_EXPRESSION_EQUAL", "NT_EXPRESSION_NEQUAL", "NT_IDENTIFIER" };

CCompileUnit::CCompileUnit(CSTNode* arg1, CSTNode* arg2) : CSTNode(NT_COMPILEUNIT, 2, arg1, arg2) {}
CCompileUnit::CCompileUnit(CSTNode* arg1) :CSTNode(NT_COMPILEUNIT, 1, arg1) {}
CFunctionDefinition::CFunctionDefinition(CSTNode* id, CSTNode* fargs, CSTNode* compoundst) :CSTNode(NT_FUNCTIONDEFINITION, 3, id, fargs, compoundst) {}
CFunctionDefinition::CFunctionDefinition(CSTNode* id, CSTNode* compoundst) :CSTNode(NT_FUNCTIONDEFINITION, 3, id, new CFormalArgs(), compoundst) {}
CFormalArgs::CFormalArgs(CSTNode* fargs, CSTNode* id) :CSTNode(NT_FORMALARGS, 2, fargs, id) {}
CFormalArgs::CFormalArgs(CSTNode* id) :CSTNode(NT_FORMALARGS, 1, id) {}
CFormalArgs::CFormalArgs() :CSTNode(NT_FORMALARGS, 0) {}
CActualArgs::CActualArgs(CSTNode* actargs, CSTNode* expr) :CSTNode(NT_ACTUALARGS, 2, actargs, expr) {}
CActualArgs::CActualArgs(CSTNode* expr) :CSTNode(NT_ACTUALARGS, 1, expr) {}
CStatement::CStatement(NodeType tp, int children, CSTNode* arg) :CSTNode(tp, children, arg) {}
CStatement::CStatement(NodeType tp, int children) : CSTNode(tp, children) {}
CStatement::CStatement(NodeType tp, int children, CSTNode* arg1, CSTNode* arg2) : CSTNode(tp, children, arg1, arg2) {}
CStatement::CStatement(NodeType tp, int children, CSTNode* arg1, CSTNode* arg2, CSTNode* arg3) : CSTNode(tp, children, arg1, arg2, arg3) {}
CStatement::CStatement(NodeType tp) :CSTNode(tp, 0) {}
CExpressionStatement::CExpressionStatement(CSTNode* arg) :CStatement(NT_EXPRESSIONSTATEMENT, 1, arg) {}
CCompoundStatement::CCompoundStatement(CSTNode* arg) :CStatement(NT_COMPOUNDSTATEMENT, 1, arg) {}
CIfStatement::CIfStatement(CSTNode* cond, CSTNode* ifpath, CSTNode* elsepath) :CStatement(NT_IFSTATEMENT, 3, cond, ifpath, elsepath) {}
CIfStatement::CIfStatement(CSTNode* cond, CSTNode* ifpath) :CStatement(NT_IFSTATEMENT, 2, cond, ifpath) {}
CWhileStatement::CWhileStatement(CSTNode* cond, CSTNode* body) :CStatement(NT_WHILESTATEMENT, 2, cond, body) {}
CReturnStatement::CReturnStatement(CSTNode* expr) :CStatement(NT_RETURNSTATEMENT, 1, expr) {}
CBreakStatement::CBreakStatement() :CStatement(NT_BREAKSTATEMENT, 0) {}
CNullStatement::CNullStatement() : CStatement(NT_EXPRESSION_NUMBER, 0) {}
CStatementList::CStatementList(CSTNode* arg1, CSTNode* arg2) :CSTNode(NT_STATEMENTLIST, 2, arg1, arg2) {}
CStatementList::CStatementList(CSTNode* arg1) : CSTNode(NT_STATEMENTLIST, 1, arg1) {}
CExpression::CExpression(NodeType tp, int children, CSTNode* arg1, CSTNode* arg2) :CSTNode(tp, 2, arg1, arg2) {}
CExpression::CExpression(NodeType tp, int children, CSTNode* arg1) :CSTNode(tp, children, arg1) {}
CExpression::CExpression(NodeType tp) : CSTNode(tp, 0) {}
CExpressionNUMBER::CExpressionNUMBER(const char* text, double value) :CExpression(NT_EXPRESSION_NUMBER) {
	m_value = value;
	m_text = string(text);
}
CExpressionVariable::CExpressionVariable(CSTNode* id) : CExpression(NT_EXPRESSION_VARIABLE) {
	m_text = _strdup(((CIDENTIFIER*)id)->m_text.c_str());
}
CIDENTIFIER::CIDENTIFIER(const char* text) :CSTNode(NT_IDENTIFIER, 0) {
	m_text = _strdup(text);
}