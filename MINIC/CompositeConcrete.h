#pragma once
#ifndef COMPOSITE_CONCRETE_
#define COMPOSITE_CONCRETE_
#include "Composite.h"

class CExpression;
class CExpressionIdentifier;

typedef enum nodeType {
	NT_COMPILEUNIT, NT_FUNCTIONDEFINITION, NT_FORMALARGS, NT_ACTUALARGS, NT_DECLARATION,
	NT_EXPRESSIONSTATEMENT, NT_TYPESPECIFIER,
	NT_COMPOUNDSTATEMENT, NT_IFSTATEMENT, NT_WHILESTATEMENT, NT_DOWHILESTATEMENT,
	NT_RETURNSTATEMENT, NT_BREAKSTATEMENT, NT_CONTINUESTATEMENT, NT_NULLSTATEMENT,

	NT_STATEMENTLIST, NT_EXPRESSION_NUMBER, NT_EXPRESSION_VARIABLE, NT_EXPRESSION_FCALL,
	NT_EXPRESSION_ADD, NT_EXPRESSION_MINUS, NT_EXPRESSION_MULT, NT_EXPRESSION_DIV,
	NT_EXPRESSION_UNARYPLUS, NT_EXPRESSION_UNARYMINUS, NT_EXPRESSION_ASSIGN, NT_EXPRESSION_AND,
	NT_EXPRESSION_OR, NT_EXPRESSION_NOT, NT_EXPRESSION_GT, NT_EXPRESSION_GTE, NT_EXPRESSION_LT,
	NT_EXPRESSION_LTE, NT_EXPRESSION_EQUAL, NT_EXPRESSION_NEQUAL, NT_IDENTIFIER
} NodeType;



class CCompileUnit : public CSTNode {
public:
	CCompileUnit(CSTNode* arg1, CSTNode* arg2);
	CCompileUnit(CSTNode* arg1);
	virtual ~CCompileUnit() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};
class CFunctionDefinition : public CSTNode {
public:
	CFunctionDefinition(CSTNode* ts, CSTNode* id, CSTNode* fargs, CSTNode* compoundst);
	CFunctionDefinition(CSTNode* ts, CSTNode* id, CSTNode* compoundst);
	virtual ~CFunctionDefinition() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};
class CFormalArgs : public CSTNode {
public:
	CFormalArgs(CSTNode* fargs, CSTNode* id);
	CFormalArgs(CSTNode* id);
	CFormalArgs();
	virtual ~CFormalArgs() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};

class CDeclaration : public CSTNode {
public:
	CDeclaration(CSTNode* tp, CSTNode* id, CSTNode *expression);
	CDeclaration(CSTNode* tp, CSTNode* id);
	CDeclaration();
	virtual ~CDeclaration() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};

class CTypeSpecifier : public CSTNode {
public:
	CTypeSpecifier(CSTNode* tp);
	CTypeSpecifier();
	virtual ~CTypeSpecifier() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};

class CStatement : public CSTNode {
protected:
	CStatement(CSTNode* arg);
	virtual ~CStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};
class CCompoundStatement : public CStatement {
public:
	CCompoundStatement(CSTNode* arg = nullptr);
	virtual ~CCompoundStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};

class CIfStatement : public CStatement {
public:
	CIfStatement(CSTNode* cond, CSTNode* ifpath, CSTNode* elsepath);
	CIfStatement(CSTNode* cond, CSTNode* ifpath);
	virtual ~CIfStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};

class CWhileStatement : public CStatement {
public:
	CWhileStatement(CSTNode* cond, CSTNode* body);
	virtual ~CWhileStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};

class CDoWhileStatement : public CStatement {
public:
	CDoWhileStatement(CSTNode* cond, CSTNode* body);
	virtual ~CDoWhileStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};

class CStatementList : public CSTNode {
public:
	CStatementList(CSTNode* arg1);
	CStatementList(CSTNode* arg1, CSTNode* arg2);
	virtual ~CStatementList() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};

class CActualArgs : public CSTNode {
public:

	CActualArgs(CSTNode* actargs, CSTNode* expr);
	CActualArgs(CSTNode* expr);
	virtual ~CActualArgs() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
};

class CExpressionStatement : public CStatement {
public:
	CExpressionStatement(CSTNode* arg);
	virtual ~CExpressionStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};

class CReturnStatement : public CStatement {
public:
	CFunctionDefinition* m_hostFunction;
	CReturnStatement(CSTNode* expr);
	virtual ~CReturnStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CBreakStatement : public CStatement {
public:
	CBreakStatement();
	virtual ~CBreakStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};

class CContinueStatement : public CStatement {
public:
	CContinueStatement();
	virtual ~CContinueStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};
class CNullStatement : public CStatement {
public:
	CNullStatement();
	virtual ~CNullStatement() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;

};
class CExpression : public CSTNode {
public:
	CExpression(int tp, int children, CSTNode* arg1, CSTNode* arg2);
	CExpression(int tp, int children, CSTNode* arg1);
	CExpression(int tp);
	virtual ~CExpression() {}
};

class CExpressionNUMBER : public CExpression {
public:
	double m_value;
	string m_text;
	
	CExpressionNUMBER(const char* text, double value);
	virtual ~CExpressionNUMBER() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionVariable : public CExpression {
public:
	string m_text;
	CExpressionVariable(CSTNode* id);
	virtual ~CExpressionVariable() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};

class CIDENTIFIER : public CSTNode {
public:
	string m_text;
	CIDENTIFIER(const char* text);
	virtual ~CIDENTIFIER();
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionFCall : public CExpression {
public:
	list<CExpression*>* m_actualArguments = nullptr;
	list<CIDENTIFIER*>* m_formalArguments = nullptr;
	CExpressionFCall(CSTNode* id, CSTNode* actual);
	CExpressionFCall(CSTNode* id);
	virtual ~CExpressionFCall() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
	double GetActualArgument(int index);
	void MapActualToFormalArguments();
};
class CExpressionAdd : public CExpression {
public:
	CExpressionAdd(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionAdd() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionMinus : public CExpression {
public:
	CExpressionMinus(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionMinus() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionMult : public CExpression {
public:
	CExpressionMult(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionMult() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionDiv : public CExpression {
public:
	CExpressionDiv(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionDiv() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionUnaryPlus : public CExpression {
public:
	CExpressionUnaryPlus(CSTNode* arg1);
	virtual ~CExpressionUnaryPlus() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionUnaryMinus : public CExpression {
public:
	CExpressionUnaryMinus(CSTNode* arg1);
	virtual ~CExpressionUnaryMinus() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionAssign : public CExpression {
public:
	CExpressionAssign(CSTNode* id, CSTNode* expr);
	virtual ~CExpressionAssign() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionAND : public CExpression {
public:
	CExpressionAND(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionAND() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionOR : public CExpression {
public:
	CExpressionOR(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionOR() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionNOT : public CExpression {
public:
	CExpressionNOT(CSTNode* expr);
	virtual ~CExpressionNOT() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionGT : public CExpression {
public:
	CExpressionGT(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionGT() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionGTE : public CExpression {
public:
	CExpressionGTE(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionGTE() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionLT : public CExpression {
public:
	CExpressionLT(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionLT() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionLTE : public CExpression {
public:
	CExpressionLTE(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionLTE() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionEQUAL : public CExpression {
public:
	CExpressionEQUAL(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionEQUAL() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
class CExpressionNEQUAL : public CExpression {
public:
	CExpressionNEQUAL(CSTNode* arg1, CSTNode* arg2);
	virtual ~CExpressionNEQUAL() {}
	virtual void PrintSyntaxTree(ofstream* dotfile, CSTNode* parent) override;
	
};
#endif