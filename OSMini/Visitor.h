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
	virtual antlrcpp::Any visitExprM(cliParserParser::ExprMContext *ctx);
	virtual antlrcpp::Any visitComparM(cliParserParser::ComparMContext *ctx);
	virtual antlrcpp::Any visitComparS(cliParserParser::ComparSContext *ctx);
	virtual antlrcpp::Any visitCompar(cliParserParser::ComparContext *ctx);
	virtual antlrcpp::Any visitTerm(cliParserParser::TermContext *ctx);
	virtual antlrcpp::Any visitFactor(cliParserParser::FactorContext *ctx);
	virtual antlrcpp::Any visitBool_(cliParserParser::Bool_Context *ctx);
	virtual antlrcpp::Any visitString(cliParserParser::StringContext *ctx);
	virtual antlrcpp::Any visitLogicops(cliParserParser::LogicopsContext *ctx);
	virtual antlrcpp::Any visitVarid(cliParserParser::VaridContext *ctx);
	virtual antlrcpp::Any visitAssgnmnt(cliParserParser::AssgnmntContext *ctx);
	virtual antlrcpp::Any visitBlockstat(cliParserParser::BlockstatContext *ctx);
	virtual antlrcpp::Any visitStat(cliParserParser::StatContext *ctx);
	virtual antlrcpp::Any visitIfstat(cliParserParser::IfstatContext *ctx);

};

#endif

