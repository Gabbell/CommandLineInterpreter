
// Generated from cliParser.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "cliParserParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by cliParserParser.
 */
class cliParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by cliParserParser.
   */
    virtual antlrcpp::Any visitString(cliParserParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitExprM(cliParserParser::ExprMContext *context) = 0;

    virtual antlrcpp::Any visitVarid(cliParserParser::VaridContext *context) = 0;

    virtual antlrcpp::Any visitTerm(cliParserParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitFactor(cliParserParser::FactorContext *context) = 0;

    virtual antlrcpp::Any visitBool_(cliParserParser::Bool_Context *context) = 0;

    virtual antlrcpp::Any visitComparM(cliParserParser::ComparMContext *context) = 0;

    virtual antlrcpp::Any visitComparS(cliParserParser::ComparSContext *context) = 0;

    virtual antlrcpp::Any visitCompar(cliParserParser::ComparContext *context) = 0;

    virtual antlrcpp::Any visitLogicops(cliParserParser::LogicopsContext *context) = 0;

    virtual antlrcpp::Any visitAssgnmnt(cliParserParser::AssgnmntContext *context) = 0;

    virtual antlrcpp::Any visitRedir(cliParserParser::RedirContext *context) = 0;

    virtual antlrcpp::Any visitBackgrnd(cliParserParser::BackgrndContext *context) = 0;

    virtual antlrcpp::Any visitCommand(cliParserParser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitIfstat(cliParserParser::IfstatContext *context) = 0;

    virtual antlrcpp::Any visitWhilestat(cliParserParser::WhilestatContext *context) = 0;

    virtual antlrcpp::Any visitStat(cliParserParser::StatContext *context) = 0;

    virtual antlrcpp::Any visitBlockstat(cliParserParser::BlockstatContext *context) = 0;


};

