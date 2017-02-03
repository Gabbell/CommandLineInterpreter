
// Generated from cliParser.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"


using namespace antlr4;



class cliParserParser : public Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, PLUS = 3, MINUS = 4, MULT = 5, DIV = 6, RED = 7, 
    REDD = 8, BACKGrnd = 9, AND = 10, OR = 11, WHILE = 12, IF = 13, TRUE = 14, 
    FALSE = 15, ELSE = 16, EQ = 17, ASSGNMNT = 18, ECHO = 19, OBRACE = 20, 
    CBRACE = 21, NUMBER = 22, WHITESPACE = 23, LETTER = 24
  };

  enum {
    RuleString = 0, RuleExprM = 1, RuleVarid = 2, RuleTerm = 3, RuleFactor = 4, 
    RuleBool_ = 5, RuleComparM = 6, RuleComparS = 7, RuleCompar = 8, RuleLogicops = 9, 
    RuleAssgnmnt = 10, RuleRedir = 11, RuleBackgrnd = 12, RuleCommand = 13, 
    RuleIfstat = 14, RuleWhilestat = 15, RuleStat = 16, RuleBlockstat = 17
  };

  cliParserParser(TokenStream *input);
  ~cliParserParser();

  virtual std::string getGrammarFileName() const override;
  virtual const atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual dfa::Vocabulary& getVocabulary() const override;


  class StringContext;
  class ExprMContext;
  class VaridContext;
  class TermContext;
  class FactorContext;
  class Bool_Context;
  class ComparMContext;
  class ComparSContext;
  class ComparContext;
  class LogicopsContext;
  class AssgnmntContext;
  class RedirContext;
  class BackgrndContext;
  class CommandContext;
  class IfstatContext;
  class WhilestatContext;
  class StatContext;
  class BlockstatContext; 

  class StringContext : public ParserRuleContext {
  public:
    StringContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<tree::TerminalNode *> LETTER();
    tree::TerminalNode* LETTER(size_t i);
    std::vector<tree::TerminalNode *> NUMBER();
    tree::TerminalNode* NUMBER(size_t i);
    std::vector<tree::TerminalNode *> WHITESPACE();
    tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class ExprMContext : public ParserRuleContext {
  public:
    ExprMContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<tree::TerminalNode *> PLUS();
    tree::TerminalNode* PLUS(size_t i);
    std::vector<tree::TerminalNode *> MINUS();
    tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprMContext* exprM();

  class VaridContext : public ParserRuleContext {
  public:
    VaridContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<tree::TerminalNode *> LETTER();
    tree::TerminalNode* LETTER(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  VaridContext* varid();

  class TermContext : public ParserRuleContext {
  public:
    TermContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<tree::TerminalNode *> MULT();
    tree::TerminalNode* MULT(size_t i);
    std::vector<tree::TerminalNode *> DIV();
    tree::TerminalNode* DIV(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class FactorContext : public ParserRuleContext {
  public:
    FactorContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *NUMBER();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class Bool_Context : public ParserRuleContext {
  public:
    Bool_Context(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *TRUE();
    tree::TerminalNode *FALSE();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_Context* bool_();

  class ComparMContext : public ParserRuleContext {
  public:
    ComparMContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprMContext *> exprM();
    ExprMContext* exprM(size_t i);
    tree::TerminalNode *EQ();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparMContext* comparM();

  class ComparSContext : public ParserRuleContext {
  public:
    ComparSContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    tree::TerminalNode *EQ();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparSContext* comparS();

  class ComparContext : public ParserRuleContext {
  public:
    ComparContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComparSContext *comparS();
    ComparMContext *comparM();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparContext* compar();

  class LogicopsContext : public ParserRuleContext {
  public:
    LogicopsContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *AND();
    tree::TerminalNode *OR();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicopsContext* logicops();

  class AssgnmntContext : public ParserRuleContext {
  public:
    AssgnmntContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VaridContext *varid();
    tree::TerminalNode *ASSGNMNT();
    StatContext *stat();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  AssgnmntContext* assgnmnt();

  class RedirContext : public ParserRuleContext {
  public:
    RedirContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *RED();
    tree::TerminalNode *REDD();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  RedirContext* redir();

  class BackgrndContext : public ParserRuleContext {
  public:
    BackgrndContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *BACKGrnd();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  BackgrndContext* backgrnd();

  class CommandContext : public ParserRuleContext {
  public:
    CommandContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *ECHO();
    StringContext *string();
    std::vector<VaridContext *> varid();
    VaridContext* varid(size_t i);
    std::vector<ExprMContext *> exprM();
    ExprMContext* exprM(size_t i);
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    tree::TerminalNode *BACKGrnd();
    tree::TerminalNode *RED();
    tree::TerminalNode *REDD();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  CommandContext* command();

  class IfstatContext : public ParserRuleContext {
  public:
    IfstatContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *IF();
    std::vector<ComparContext *> compar();
    ComparContext* compar(size_t i);
    std::vector<tree::TerminalNode *> OBRACE();
    tree::TerminalNode* OBRACE(size_t i);
    std::vector<BlockstatContext *> blockstat();
    BlockstatContext* blockstat(size_t i);
    std::vector<tree::TerminalNode *> CBRACE();
    tree::TerminalNode* CBRACE(size_t i);
    std::vector<LogicopsContext *> logicops();
    LogicopsContext* logicops(size_t i);
    tree::TerminalNode *ELSE();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstatContext* ifstat();

  class WhilestatContext : public ParserRuleContext {
  public:
    WhilestatContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *WHILE();
    std::vector<ComparContext *> compar();
    ComparContext* compar(size_t i);
    tree::TerminalNode *OBRACE();
    BlockstatContext *blockstat();
    tree::TerminalNode *CBRACE();
    std::vector<LogicopsContext *> logicops();
    LogicopsContext* logicops(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  WhilestatContext* whilestat();

  class StatContext : public ParserRuleContext {
  public:
    StatContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfstatContext *ifstat();
    WhilestatContext *whilestat();
    AssgnmntContext *assgnmnt();
    std::vector<ComparContext *> compar();
    ComparContext* compar(size_t i);
    std::vector<LogicopsContext *> logicops();
    LogicopsContext* logicops(size_t i);
    ExprMContext *exprM();
    CommandContext *command();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class BlockstatContext : public ParserRuleContext {
  public:
    BlockstatContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockstatContext* blockstat();


private:
  static std::vector<dfa::DFA> _decisionToDFA;
  static atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static dfa::Vocabulary _vocabulary;
  static atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

