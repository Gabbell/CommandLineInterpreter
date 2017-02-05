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
