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
	cout << "COMMAND EXECUTED" << endl;
	return visitChildren(ctx);
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
	int value = stoi(ctx->NUMBER()->getText());
	return antlrcpp::Any(value);
}


antlrcpp::Any Visitor::visitString(cliParserParser::StringContext *ctx) {
	string value = ctx->getText();
	return value;
}

antlrcpp::Any Visitor::visitComparS(cliParserParser::ComparSContext *ctx) {
	string expr1 = visitString(ctx->string(0));
	string expr2 = visitString(ctx->string(1));

	if (expr1 == expr2) {
		return true;
	}
	else {
		return false;
	}
}

antlrcpp::Any Visitor::visitComparM(cliParserParser::ComparMContext *ctx) {
	int expr1 = visitExprM(ctx->exprM(0));
	int expr2 = visitExprM(ctx->exprM(1));

	if (expr1 == expr2) {
		return true;
	}
	else {
		return false;
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
