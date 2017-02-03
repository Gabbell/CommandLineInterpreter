
// Generated from cliParser.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "cliParserParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by cliParserParser.
 */
class cliParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterString(cliParserParser::StringContext *ctx) = 0;
  virtual void exitString(cliParserParser::StringContext *ctx) = 0;

  virtual void enterExprM(cliParserParser::ExprMContext *ctx) = 0;
  virtual void exitExprM(cliParserParser::ExprMContext *ctx) = 0;

  virtual void enterVarid(cliParserParser::VaridContext *ctx) = 0;
  virtual void exitVarid(cliParserParser::VaridContext *ctx) = 0;

  virtual void enterTerm(cliParserParser::TermContext *ctx) = 0;
  virtual void exitTerm(cliParserParser::TermContext *ctx) = 0;

  virtual void enterFactor(cliParserParser::FactorContext *ctx) = 0;
  virtual void exitFactor(cliParserParser::FactorContext *ctx) = 0;

  virtual void enterBool_(cliParserParser::Bool_Context *ctx) = 0;
  virtual void exitBool_(cliParserParser::Bool_Context *ctx) = 0;

  virtual void enterComparM(cliParserParser::ComparMContext *ctx) = 0;
  virtual void exitComparM(cliParserParser::ComparMContext *ctx) = 0;

  virtual void enterComparS(cliParserParser::ComparSContext *ctx) = 0;
  virtual void exitComparS(cliParserParser::ComparSContext *ctx) = 0;

  virtual void enterCompar(cliParserParser::ComparContext *ctx) = 0;
  virtual void exitCompar(cliParserParser::ComparContext *ctx) = 0;

  virtual void enterLogicops(cliParserParser::LogicopsContext *ctx) = 0;
  virtual void exitLogicops(cliParserParser::LogicopsContext *ctx) = 0;

  virtual void enterAssgnmnt(cliParserParser::AssgnmntContext *ctx) = 0;
  virtual void exitAssgnmnt(cliParserParser::AssgnmntContext *ctx) = 0;

  virtual void enterRedir(cliParserParser::RedirContext *ctx) = 0;
  virtual void exitRedir(cliParserParser::RedirContext *ctx) = 0;

  virtual void enterBackgrnd(cliParserParser::BackgrndContext *ctx) = 0;
  virtual void exitBackgrnd(cliParserParser::BackgrndContext *ctx) = 0;

  virtual void enterCommand(cliParserParser::CommandContext *ctx) = 0;
  virtual void exitCommand(cliParserParser::CommandContext *ctx) = 0;

  virtual void enterIfstat(cliParserParser::IfstatContext *ctx) = 0;
  virtual void exitIfstat(cliParserParser::IfstatContext *ctx) = 0;

  virtual void enterWhilestat(cliParserParser::WhilestatContext *ctx) = 0;
  virtual void exitWhilestat(cliParserParser::WhilestatContext *ctx) = 0;

  virtual void enterStat(cliParserParser::StatContext *ctx) = 0;
  virtual void exitStat(cliParserParser::StatContext *ctx) = 0;

  virtual void enterBlockstat(cliParserParser::BlockstatContext *ctx) = 0;
  virtual void exitBlockstat(cliParserParser::BlockstatContext *ctx) = 0;


};

