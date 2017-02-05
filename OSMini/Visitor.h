#ifndef VISITOR_H
#define VISITOR_H

#include "cliParserBaseVisitor.h"

// Forward declerations
class CommandLineInterpreter;

class Visitor : public cliParserBaseVisitor
{
private:
	CommandLineInterpreter* cli;
public:
	Visitor(CommandLineInterpreter* cli);
	~Visitor();

	virtual antlrcpp::Any visitCommand(cliParserParser::CommandContext * ctx);
};

#endif

