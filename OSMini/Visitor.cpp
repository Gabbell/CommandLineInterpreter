#include "Visitor.h"

#include "CommandLineInterpreter.h"

#include <iostream>

using namespace std;

Visitor::Visitor(CommandLineInterpreter* cli) : cli(cli)
{
}

Visitor::~Visitor()
{
}

antlrcpp::Any Visitor::visitCommand(cliParserParser::CommandContext *ctx) {
	if (ctx->ECHO()) {
		vector<string> args;
		for (cliParserParser::VaridContext* varid : ctx->varid()) {
			args.push_back(visitVarid(varid));
		}
		cli->executeCommand("echo", args);
	}
	return antlrcpp::Any();
}

antlrcpp::Any Visitor::visitVarid(cliParserParser::VaridContext *ctx) {
	string varId;
	for (tree::TerminalNode* character : ctx->LETTER()) {
		varId.append(character->getText());
	}
	return varId;
}

antlrcpp::Any Visitor::visitAssgnmnt(cliParserParser::AssgnmntContext *ctx) {
	string varId = visitVarid(ctx->varid());
	antlrcpp::Any stat = visitStat(ctx->stat());

	cli->addVariable(varId, stat);

	return antlrcpp::Any();
}

antlrcpp::Any Visitor::visitLogicops(cliParserParser::LogicopsContext *ctx) {
	// Assume it is an AND
	char op = 'a';

	// If OR() does not return null then it was actually an OR
	if (ctx->OR()) {
		op = 'o';
	}

	return op;
}

antlrcpp::Any Visitor::visitExprM(cliParserParser::ExprMContext *ctx) {
	string expression = ctx->getText();
	int termIndex = 1;
	int sum = visitTerm(ctx->term(0));


	for (int i = 0; i < expression.length(); i++) {
		char character = expression[i];
		switch (character) {
		case '+':
			sum += (int)visitTerm(ctx->term(termIndex++));
			break;
		case '-':
			sum -= (int)visitTerm(ctx->term(termIndex++));
			break;
		default:
			break;
		}
	}

	return sum;
}

antlrcpp::Any Visitor::visitTerm(cliParserParser::TermContext *ctx) {
	string expression = ctx->getText();
	int factorIndex = 1;
	int product = visitFactor(ctx->factor(0));

	for (int i = 0; i < expression.length(); i++) {
		char character = expression[i];
		switch (character) {
		case '*':
			product *= (int)visitFactor(ctx->factor(factorIndex++));
			break;
		case '/':
			product /= (int)visitFactor(ctx->factor(factorIndex++));
			break;
		default:
			break;
		}
	}

	return product;
}

antlrcpp::Any Visitor::visitFactor(cliParserParser::FactorContext *ctx) {
	string expression = ctx->NUMBER()->getText();
	bool isNumber = true;
	for (int i = 0; i < expression.length(); i++) {
		if (!isdigit(expression[i])) {
			isNumber = false;
		}
	}
	if (isNumber) {
		int value = stoi(ctx->NUMBER()->getText());
		return antlrcpp::Any(value);
	}
	return visitChildren(ctx);
}


antlrcpp::Any Visitor::visitString(cliParserParser::StringContext *ctx) {
	string value = ctx->getText();
	return value;
}

antlrcpp::Any Visitor::visitComparS(cliParserParser::ComparSContext *ctx) {
	string expr1 = visitString(ctx->string(0));
	string expr2 = visitString(ctx->string(1));

	if (expr1 == expr2) {
		cout << "String equal" << endl;
		return true;
	}
	else {
		cout << "String not equal" << endl;
		return false;
	}
}

antlrcpp::Any Visitor::visitComparM(cliParserParser::ComparMContext *ctx) {
	int expr1 = visitExprM(ctx->exprM(0));
	int expr2 = visitExprM(ctx->exprM(1));

	if (expr1 == expr2) {
		cout << "Expression equal" << endl;
		return true;
	}
	else {
		cout << "Expression not equal" << endl;
		return false;
	}
}

antlrcpp::Any Visitor::visitCompar(cliParserParser::ComparContext *ctx) {
	int doublequotes = 0;
	string expression = ctx->getText();
	for (int i = 0; i < expression.length(); i++) {
		char currentchar = expression[i];
		if (currentchar == '"') {
			doublequotes++;
		}
	}

	if (doublequotes % 2 == 0 && doublequotes > 3) {
		cout << "going through comparS" << endl;
		return visitComparS(ctx->comparS());
	}
	else if(doublequotes == 0) {
		cout << "going through comparM" << endl;
		return visitComparM(ctx->comparM());
	}
}

antlrcpp::Any Visitor::visitBool_(cliParserParser::Bool_Context *ctx) {
	string expression = ctx->getText();
	if (expression == "TRUE") {
		return true;
	}
	else if (expression == "FALSE") {
		return false;
	}
}
