
// Generated from cliParser.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "cliParserListener.h"


/**
 * This class provides an empty implementation of cliParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class cliParserBaseListener : public cliParserListener {
public:

  virtual void enterString(cliParserParser::StringContext * /*ctx*/) override { }
  virtual void exitString(cliParserParser::StringContext * /*ctx*/) override { }

  virtual void enterExprM(cliParserParser::ExprMContext * /*ctx*/) override { }
  virtual void exitExprM(cliParserParser::ExprMContext * /*ctx*/) override { }

  virtual void enterVarid(cliParserParser::VaridContext * /*ctx*/) override { }
  virtual void exitVarid(cliParserParser::VaridContext * /*ctx*/) override { }

  virtual void enterTerm(cliParserParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(cliParserParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(cliParserParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(cliParserParser::FactorContext * /*ctx*/) override { }

  virtual void enterBool_(cliParserParser::Bool_Context * /*ctx*/) override { }
  virtual void exitBool_(cliParserParser::Bool_Context * /*ctx*/) override { }

  virtual void enterComparM(cliParserParser::ComparMContext * /*ctx*/) override { }
  virtual void exitComparM(cliParserParser::ComparMContext * /*ctx*/) override { }

  virtual void enterComparS(cliParserParser::ComparSContext * /*ctx*/) override { }
  virtual void exitComparS(cliParserParser::ComparSContext * /*ctx*/) override { }

  virtual void enterCompar(cliParserParser::ComparContext * /*ctx*/) override { }
  virtual void exitCompar(cliParserParser::ComparContext * /*ctx*/) override { }

  virtual void enterLogicops(cliParserParser::LogicopsContext * /*ctx*/) override { }
  virtual void exitLogicops(cliParserParser::LogicopsContext * /*ctx*/) override { }

  virtual void enterAssgnmnt(cliParserParser::AssgnmntContext * /*ctx*/) override { }
  virtual void exitAssgnmnt(cliParserParser::AssgnmntContext * /*ctx*/) override { }

  virtual void enterRedir(cliParserParser::RedirContext * /*ctx*/) override { }
  virtual void exitRedir(cliParserParser::RedirContext * /*ctx*/) override { }

  virtual void enterBackgrnd(cliParserParser::BackgrndContext * /*ctx*/) override { }
  virtual void exitBackgrnd(cliParserParser::BackgrndContext * /*ctx*/) override { }

  virtual void enterCommand(cliParserParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(cliParserParser::CommandContext * /*ctx*/) override { }

  virtual void enterIfstat(cliParserParser::IfstatContext * /*ctx*/) override { }
  virtual void exitIfstat(cliParserParser::IfstatContext * /*ctx*/) override { }

  virtual void enterWhilestat(cliParserParser::WhilestatContext * /*ctx*/) override { }
  virtual void exitWhilestat(cliParserParser::WhilestatContext * /*ctx*/) override { }

  virtual void enterStat(cliParserParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(cliParserParser::StatContext * /*ctx*/) override { }

  virtual void enterBlockstat(cliParserParser::BlockstatContext * /*ctx*/) override { }
  virtual void exitBlockstat(cliParserParser::BlockstatContext * /*ctx*/) override { }


  virtual void enterEveryRule(ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(tree::ErrorNode * /*node*/) override { }

};

