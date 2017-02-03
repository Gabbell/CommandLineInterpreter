
// Generated from cliParser.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "cliParserVisitor.h"


/**
 * This class provides an empty implementation of cliParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class cliParserBaseVisitor : public cliParserVisitor {
public:

  virtual antlrcpp::Any visitString(cliParserParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprM(cliParserParser::ExprMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarid(cliParserParser::VaridContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(cliParserParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactor(cliParserParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_(cliParserParser::Bool_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparM(cliParserParser::ComparMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparS(cliParserParser::ComparSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompar(cliParserParser::ComparContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicops(cliParserParser::LogicopsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssgnmnt(cliParserParser::AssgnmntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRedir(cliParserParser::RedirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBackgrnd(cliParserParser::BackgrndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand(cliParserParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfstat(cliParserParser::IfstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhilestat(cliParserParser::WhilestatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStat(cliParserParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockstat(cliParserParser::BlockstatContext *ctx) override {
    return visitChildren(ctx);
  }


};

