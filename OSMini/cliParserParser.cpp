
// Generated from cliParser.g4 by ANTLR 4.5.3


#include "cliParserListener.h"
#include "cliParserVisitor.h"

#include "cliParserParser.h"


using namespace antlrcpp;
using namespace antlr4;

cliParserParser::cliParserParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

cliParserParser::~cliParserParser() {
  delete _interpreter;
}

std::string cliParserParser::getGrammarFileName() const {
  return "cliParser.g4";
}

const std::vector<std::string>& cliParserParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& cliParserParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StringContext ------------------------------------------------------------------

cliParserParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> cliParserParser::StringContext::LETTER() {
  return getTokens(cliParserParser::LETTER);
}

tree::TerminalNode* cliParserParser::StringContext::LETTER(size_t i) {
  return getToken(cliParserParser::LETTER, i);
}

std::vector<tree::TerminalNode *> cliParserParser::StringContext::NUMBER() {
  return getTokens(cliParserParser::NUMBER);
}

tree::TerminalNode* cliParserParser::StringContext::NUMBER(size_t i) {
  return getToken(cliParserParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> cliParserParser::StringContext::WHITESPACE() {
  return getTokens(cliParserParser::WHITESPACE);
}

tree::TerminalNode* cliParserParser::StringContext::WHITESPACE(size_t i) {
  return getToken(cliParserParser::WHITESPACE, i);
}


size_t cliParserParser::StringContext::getRuleIndex() const {
  return cliParserParser::RuleString;
}

void cliParserParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void cliParserParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any cliParserParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitString(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::StringContext* cliParserParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 0, cliParserParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(cliParserParser::T__0);
    setState(38); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(37);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << cliParserParser::NUMBER)
        | (1ULL << cliParserParser::WHITESPACE)
        | (1ULL << cliParserParser::LETTER))) != 0))) {
      _errHandler->recoverInline(this);
      } else {
        consume();
      }
      setState(40); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cliParserParser::NUMBER)
      | (1ULL << cliParserParser::WHITESPACE)
      | (1ULL << cliParserParser::LETTER))) != 0));
    setState(42);
    match(cliParserParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprMContext ------------------------------------------------------------------

cliParserParser::ExprMContext::ExprMContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cliParserParser::TermContext *> cliParserParser::ExprMContext::term() {
  return getRuleContexts<cliParserParser::TermContext>();
}

cliParserParser::TermContext* cliParserParser::ExprMContext::term(size_t i) {
  return getRuleContext<cliParserParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> cliParserParser::ExprMContext::PLUS() {
  return getTokens(cliParserParser::PLUS);
}

tree::TerminalNode* cliParserParser::ExprMContext::PLUS(size_t i) {
  return getToken(cliParserParser::PLUS, i);
}

std::vector<tree::TerminalNode *> cliParserParser::ExprMContext::MINUS() {
  return getTokens(cliParserParser::MINUS);
}

tree::TerminalNode* cliParserParser::ExprMContext::MINUS(size_t i) {
  return getToken(cliParserParser::MINUS, i);
}


size_t cliParserParser::ExprMContext::getRuleIndex() const {
  return cliParserParser::RuleExprM;
}

void cliParserParser::ExprMContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprM(this);
}

void cliParserParser::ExprMContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprM(this);
}


antlrcpp::Any cliParserParser::ExprMContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitExprM(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::ExprMContext* cliParserParser::exprM() {
  ExprMContext *_localctx = _tracker.createInstance<ExprMContext>(_ctx, getState());
  enterRule(_localctx, 2, cliParserParser::RuleExprM);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    term();
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cliParserParser::PLUS

    || _la == cliParserParser::MINUS) {
      setState(45);
      _la = _input->LA(1);
      if (!(_la == cliParserParser::PLUS

      || _la == cliParserParser::MINUS)) {
      _errHandler->recoverInline(this);
      } else {
        consume();
      }
      setState(46);
      term();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VaridContext ------------------------------------------------------------------

cliParserParser::VaridContext::VaridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> cliParserParser::VaridContext::LETTER() {
  return getTokens(cliParserParser::LETTER);
}

tree::TerminalNode* cliParserParser::VaridContext::LETTER(size_t i) {
  return getToken(cliParserParser::LETTER, i);
}


size_t cliParserParser::VaridContext::getRuleIndex() const {
  return cliParserParser::RuleVarid;
}

void cliParserParser::VaridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarid(this);
}

void cliParserParser::VaridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarid(this);
}


antlrcpp::Any cliParserParser::VaridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitVarid(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::VaridContext* cliParserParser::varid() {
  VaridContext *_localctx = _tracker.createInstance<VaridContext>(_ctx, getState());
  enterRule(_localctx, 4, cliParserParser::RuleVarid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(53); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(52);
              match(cliParserParser::LETTER);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(55); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

cliParserParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cliParserParser::FactorContext *> cliParserParser::TermContext::factor() {
  return getRuleContexts<cliParserParser::FactorContext>();
}

cliParserParser::FactorContext* cliParserParser::TermContext::factor(size_t i) {
  return getRuleContext<cliParserParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> cliParserParser::TermContext::MULT() {
  return getTokens(cliParserParser::MULT);
}

tree::TerminalNode* cliParserParser::TermContext::MULT(size_t i) {
  return getToken(cliParserParser::MULT, i);
}

std::vector<tree::TerminalNode *> cliParserParser::TermContext::DIV() {
  return getTokens(cliParserParser::DIV);
}

tree::TerminalNode* cliParserParser::TermContext::DIV(size_t i) {
  return getToken(cliParserParser::DIV, i);
}


size_t cliParserParser::TermContext::getRuleIndex() const {
  return cliParserParser::RuleTerm;
}

void cliParserParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void cliParserParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


antlrcpp::Any cliParserParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::TermContext* cliParserParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 6, cliParserParser::RuleTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    factor();
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cliParserParser::MULT

    || _la == cliParserParser::DIV) {
      setState(58);
      _la = _input->LA(1);
      if (!(_la == cliParserParser::MULT

      || _la == cliParserParser::DIV)) {
      _errHandler->recoverInline(this);
      } else {
        consume();
      }
      setState(59);
      factor();
      setState(64);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

cliParserParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::FactorContext::NUMBER() {
  return getToken(cliParserParser::NUMBER, 0);
}


size_t cliParserParser::FactorContext::getRuleIndex() const {
  return cliParserParser::RuleFactor;
}

void cliParserParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void cliParserParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


antlrcpp::Any cliParserParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::FactorContext* cliParserParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 8, cliParserParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(cliParserParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_Context ------------------------------------------------------------------

cliParserParser::Bool_Context::Bool_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::Bool_Context::TRUE() {
  return getToken(cliParserParser::TRUE, 0);
}

tree::TerminalNode* cliParserParser::Bool_Context::FALSE() {
  return getToken(cliParserParser::FALSE, 0);
}


size_t cliParserParser::Bool_Context::getRuleIndex() const {
  return cliParserParser::RuleBool_;
}

void cliParserParser::Bool_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_(this);
}

void cliParserParser::Bool_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_(this);
}


antlrcpp::Any cliParserParser::Bool_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitBool_(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::Bool_Context* cliParserParser::bool_() {
  Bool_Context *_localctx = _tracker.createInstance<Bool_Context>(_ctx, getState());
  enterRule(_localctx, 10, cliParserParser::RuleBool_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    _la = _input->LA(1);
    if (!(_la == cliParserParser::TRUE

    || _la == cliParserParser::FALSE)) {
    _errHandler->recoverInline(this);
    } else {
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparMContext ------------------------------------------------------------------

cliParserParser::ComparMContext::ComparMContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cliParserParser::ExprMContext *> cliParserParser::ComparMContext::exprM() {
  return getRuleContexts<cliParserParser::ExprMContext>();
}

cliParserParser::ExprMContext* cliParserParser::ComparMContext::exprM(size_t i) {
  return getRuleContext<cliParserParser::ExprMContext>(i);
}

tree::TerminalNode* cliParserParser::ComparMContext::EQ() {
  return getToken(cliParserParser::EQ, 0);
}


size_t cliParserParser::ComparMContext::getRuleIndex() const {
  return cliParserParser::RuleComparM;
}

void cliParserParser::ComparMContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparM(this);
}

void cliParserParser::ComparMContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparM(this);
}


antlrcpp::Any cliParserParser::ComparMContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitComparM(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::ComparMContext* cliParserParser::comparM() {
  ComparMContext *_localctx = _tracker.createInstance<ComparMContext>(_ctx, getState());
  enterRule(_localctx, 12, cliParserParser::RuleComparM);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    exprM();
    setState(70);
    match(cliParserParser::EQ);
    setState(71);
    exprM();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparSContext ------------------------------------------------------------------

cliParserParser::ComparSContext::ComparSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cliParserParser::StringContext *> cliParserParser::ComparSContext::string() {
  return getRuleContexts<cliParserParser::StringContext>();
}

cliParserParser::StringContext* cliParserParser::ComparSContext::string(size_t i) {
  return getRuleContext<cliParserParser::StringContext>(i);
}

tree::TerminalNode* cliParserParser::ComparSContext::EQ() {
  return getToken(cliParserParser::EQ, 0);
}


size_t cliParserParser::ComparSContext::getRuleIndex() const {
  return cliParserParser::RuleComparS;
}

void cliParserParser::ComparSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparS(this);
}

void cliParserParser::ComparSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparS(this);
}


antlrcpp::Any cliParserParser::ComparSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitComparS(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::ComparSContext* cliParserParser::comparS() {
  ComparSContext *_localctx = _tracker.createInstance<ComparSContext>(_ctx, getState());
  enterRule(_localctx, 14, cliParserParser::RuleComparS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    string();
    setState(74);
    match(cliParserParser::EQ);
    setState(75);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparContext ------------------------------------------------------------------

cliParserParser::ComparContext::ComparContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cliParserParser::ComparSContext* cliParserParser::ComparContext::comparS() {
  return getRuleContext<cliParserParser::ComparSContext>(0);
}

cliParserParser::ComparMContext* cliParserParser::ComparContext::comparM() {
  return getRuleContext<cliParserParser::ComparMContext>(0);
}


size_t cliParserParser::ComparContext::getRuleIndex() const {
  return cliParserParser::RuleCompar;
}

void cliParserParser::ComparContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompar(this);
}

void cliParserParser::ComparContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompar(this);
}


antlrcpp::Any cliParserParser::ComparContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitCompar(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::ComparContext* cliParserParser::compar() {
  ComparContext *_localctx = _tracker.createInstance<ComparContext>(_ctx, getState());
  enterRule(_localctx, 16, cliParserParser::RuleCompar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cliParserParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(77);
        comparS();
        break;
      }

      case cliParserParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(78);
        comparM();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicopsContext ------------------------------------------------------------------

cliParserParser::LogicopsContext::LogicopsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::LogicopsContext::AND() {
  return getToken(cliParserParser::AND, 0);
}

tree::TerminalNode* cliParserParser::LogicopsContext::OR() {
  return getToken(cliParserParser::OR, 0);
}


size_t cliParserParser::LogicopsContext::getRuleIndex() const {
  return cliParserParser::RuleLogicops;
}

void cliParserParser::LogicopsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicops(this);
}

void cliParserParser::LogicopsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicops(this);
}


antlrcpp::Any cliParserParser::LogicopsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitLogicops(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::LogicopsContext* cliParserParser::logicops() {
  LogicopsContext *_localctx = _tracker.createInstance<LogicopsContext>(_ctx, getState());
  enterRule(_localctx, 18, cliParserParser::RuleLogicops);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    _la = _input->LA(1);
    if (!(_la == cliParserParser::AND

    || _la == cliParserParser::OR)) {
    _errHandler->recoverInline(this);
    } else {
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssgnmntContext ------------------------------------------------------------------

cliParserParser::AssgnmntContext::AssgnmntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cliParserParser::VaridContext* cliParserParser::AssgnmntContext::varid() {
  return getRuleContext<cliParserParser::VaridContext>(0);
}

tree::TerminalNode* cliParserParser::AssgnmntContext::ASSGNMNT() {
  return getToken(cliParserParser::ASSGNMNT, 0);
}

cliParserParser::StatContext* cliParserParser::AssgnmntContext::stat() {
  return getRuleContext<cliParserParser::StatContext>(0);
}


size_t cliParserParser::AssgnmntContext::getRuleIndex() const {
  return cliParserParser::RuleAssgnmnt;
}

void cliParserParser::AssgnmntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssgnmnt(this);
}

void cliParserParser::AssgnmntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssgnmnt(this);
}


antlrcpp::Any cliParserParser::AssgnmntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitAssgnmnt(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::AssgnmntContext* cliParserParser::assgnmnt() {
  AssgnmntContext *_localctx = _tracker.createInstance<AssgnmntContext>(_ctx, getState());
  enterRule(_localctx, 20, cliParserParser::RuleAssgnmnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    varid();
    setState(84);
    match(cliParserParser::ASSGNMNT);
    setState(85);
    stat();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RedirContext ------------------------------------------------------------------

cliParserParser::RedirContext::RedirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::RedirContext::RED() {
  return getToken(cliParserParser::RED, 0);
}

tree::TerminalNode* cliParserParser::RedirContext::REDD() {
  return getToken(cliParserParser::REDD, 0);
}


size_t cliParserParser::RedirContext::getRuleIndex() const {
  return cliParserParser::RuleRedir;
}

void cliParserParser::RedirContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRedir(this);
}

void cliParserParser::RedirContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRedir(this);
}


antlrcpp::Any cliParserParser::RedirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitRedir(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::RedirContext* cliParserParser::redir() {
  RedirContext *_localctx = _tracker.createInstance<RedirContext>(_ctx, getState());
  enterRule(_localctx, 22, cliParserParser::RuleRedir);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    _la = _input->LA(1);
    if (!(_la == cliParserParser::RED

    || _la == cliParserParser::REDD)) {
    _errHandler->recoverInline(this);
    } else {
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BackgrndContext ------------------------------------------------------------------

cliParserParser::BackgrndContext::BackgrndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::BackgrndContext::BACKGrnd() {
  return getToken(cliParserParser::BACKGrnd, 0);
}


size_t cliParserParser::BackgrndContext::getRuleIndex() const {
  return cliParserParser::RuleBackgrnd;
}

void cliParserParser::BackgrndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBackgrnd(this);
}

void cliParserParser::BackgrndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBackgrnd(this);
}


antlrcpp::Any cliParserParser::BackgrndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitBackgrnd(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::BackgrndContext* cliParserParser::backgrnd() {
  BackgrndContext *_localctx = _tracker.createInstance<BackgrndContext>(_ctx, getState());
  enterRule(_localctx, 24, cliParserParser::RuleBackgrnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(cliParserParser::BACKGrnd);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

cliParserParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::CommandContext::ECHO() {
  return getToken(cliParserParser::ECHO, 0);
}

cliParserParser::StringContext* cliParserParser::CommandContext::string() {
  return getRuleContext<cliParserParser::StringContext>(0);
}

std::vector<cliParserParser::VaridContext *> cliParserParser::CommandContext::varid() {
  return getRuleContexts<cliParserParser::VaridContext>();
}

cliParserParser::VaridContext* cliParserParser::CommandContext::varid(size_t i) {
  return getRuleContext<cliParserParser::VaridContext>(i);
}

std::vector<cliParserParser::ExprMContext *> cliParserParser::CommandContext::exprM() {
  return getRuleContexts<cliParserParser::ExprMContext>();
}

cliParserParser::ExprMContext* cliParserParser::CommandContext::exprM(size_t i) {
  return getRuleContext<cliParserParser::ExprMContext>(i);
}

std::vector<cliParserParser::StatContext *> cliParserParser::CommandContext::stat() {
  return getRuleContexts<cliParserParser::StatContext>();
}

cliParserParser::StatContext* cliParserParser::CommandContext::stat(size_t i) {
  return getRuleContext<cliParserParser::StatContext>(i);
}

tree::TerminalNode* cliParserParser::CommandContext::BACKGrnd() {
  return getToken(cliParserParser::BACKGrnd, 0);
}

tree::TerminalNode* cliParserParser::CommandContext::RED() {
  return getToken(cliParserParser::RED, 0);
}

tree::TerminalNode* cliParserParser::CommandContext::REDD() {
  return getToken(cliParserParser::REDD, 0);
}


size_t cliParserParser::CommandContext::getRuleIndex() const {
  return cliParserParser::RuleCommand;
}

void cliParserParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void cliParserParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}


antlrcpp::Any cliParserParser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::CommandContext* cliParserParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 26, cliParserParser::RuleCommand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case cliParserParser::ECHO: {
        setState(91);
        match(cliParserParser::ECHO);
        break;
      }

      case cliParserParser::T__0: {
        setState(92);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(98); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(98);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(95);
                varid();
                break;
              }

              case 2: {
                setState(96);
                exprM();
                break;
              }

              case 3: {
                setState(97);
                stat();
                break;
              }

              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(100); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(104);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(102);
      _la = _input->LA(1);
      if (!(_la == cliParserParser::RED

      || _la == cliParserParser::REDD)) {
      _errHandler->recoverInline(this);
      } else {
        consume();
      }
      setState(103);
      varid();
      break;
    }

    }
    setState(107);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(106);
      match(cliParserParser::BACKGrnd);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstatContext ------------------------------------------------------------------

cliParserParser::IfstatContext::IfstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::IfstatContext::IF() {
  return getToken(cliParserParser::IF, 0);
}

std::vector<cliParserParser::ComparContext *> cliParserParser::IfstatContext::compar() {
  return getRuleContexts<cliParserParser::ComparContext>();
}

cliParserParser::ComparContext* cliParserParser::IfstatContext::compar(size_t i) {
  return getRuleContext<cliParserParser::ComparContext>(i);
}

std::vector<tree::TerminalNode *> cliParserParser::IfstatContext::OBRACE() {
  return getTokens(cliParserParser::OBRACE);
}

tree::TerminalNode* cliParserParser::IfstatContext::OBRACE(size_t i) {
  return getToken(cliParserParser::OBRACE, i);
}

std::vector<cliParserParser::BlockstatContext *> cliParserParser::IfstatContext::blockstat() {
  return getRuleContexts<cliParserParser::BlockstatContext>();
}

cliParserParser::BlockstatContext* cliParserParser::IfstatContext::blockstat(size_t i) {
  return getRuleContext<cliParserParser::BlockstatContext>(i);
}

std::vector<tree::TerminalNode *> cliParserParser::IfstatContext::CBRACE() {
  return getTokens(cliParserParser::CBRACE);
}

tree::TerminalNode* cliParserParser::IfstatContext::CBRACE(size_t i) {
  return getToken(cliParserParser::CBRACE, i);
}

std::vector<cliParserParser::LogicopsContext *> cliParserParser::IfstatContext::logicops() {
  return getRuleContexts<cliParserParser::LogicopsContext>();
}

cliParserParser::LogicopsContext* cliParserParser::IfstatContext::logicops(size_t i) {
  return getRuleContext<cliParserParser::LogicopsContext>(i);
}

tree::TerminalNode* cliParserParser::IfstatContext::ELSE() {
  return getToken(cliParserParser::ELSE, 0);
}


size_t cliParserParser::IfstatContext::getRuleIndex() const {
  return cliParserParser::RuleIfstat;
}

void cliParserParser::IfstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfstat(this);
}

void cliParserParser::IfstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfstat(this);
}


antlrcpp::Any cliParserParser::IfstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitIfstat(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::IfstatContext* cliParserParser::ifstat() {
  IfstatContext *_localctx = _tracker.createInstance<IfstatContext>(_ctx, getState());
  enterRule(_localctx, 28, cliParserParser::RuleIfstat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(cliParserParser::IF);
    setState(110);
    compar();
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cliParserParser::AND

    || _la == cliParserParser::OR) {
      setState(111);
      logicops();
      setState(112);
      compar();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(119);
    match(cliParserParser::OBRACE);
    setState(120);
    blockstat();
    setState(121);
    match(cliParserParser::CBRACE);
    setState(127);

    _la = _input->LA(1);
    if (_la == cliParserParser::ELSE) {
      setState(122);
      match(cliParserParser::ELSE);
      setState(123);
      match(cliParserParser::OBRACE);
      setState(124);
      blockstat();
      setState(125);
      match(cliParserParser::CBRACE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhilestatContext ------------------------------------------------------------------

cliParserParser::WhilestatContext::WhilestatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cliParserParser::WhilestatContext::WHILE() {
  return getToken(cliParserParser::WHILE, 0);
}

std::vector<cliParserParser::ComparContext *> cliParserParser::WhilestatContext::compar() {
  return getRuleContexts<cliParserParser::ComparContext>();
}

cliParserParser::ComparContext* cliParserParser::WhilestatContext::compar(size_t i) {
  return getRuleContext<cliParserParser::ComparContext>(i);
}

tree::TerminalNode* cliParserParser::WhilestatContext::OBRACE() {
  return getToken(cliParserParser::OBRACE, 0);
}

cliParserParser::BlockstatContext* cliParserParser::WhilestatContext::blockstat() {
  return getRuleContext<cliParserParser::BlockstatContext>(0);
}

tree::TerminalNode* cliParserParser::WhilestatContext::CBRACE() {
  return getToken(cliParserParser::CBRACE, 0);
}

std::vector<cliParserParser::LogicopsContext *> cliParserParser::WhilestatContext::logicops() {
  return getRuleContexts<cliParserParser::LogicopsContext>();
}

cliParserParser::LogicopsContext* cliParserParser::WhilestatContext::logicops(size_t i) {
  return getRuleContext<cliParserParser::LogicopsContext>(i);
}


size_t cliParserParser::WhilestatContext::getRuleIndex() const {
  return cliParserParser::RuleWhilestat;
}

void cliParserParser::WhilestatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhilestat(this);
}

void cliParserParser::WhilestatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhilestat(this);
}


antlrcpp::Any cliParserParser::WhilestatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitWhilestat(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::WhilestatContext* cliParserParser::whilestat() {
  WhilestatContext *_localctx = _tracker.createInstance<WhilestatContext>(_ctx, getState());
  enterRule(_localctx, 30, cliParserParser::RuleWhilestat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(cliParserParser::WHILE);
    setState(130);
    compar();
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cliParserParser::AND

    || _la == cliParserParser::OR) {
      setState(131);
      logicops();
      setState(132);
      compar();
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    match(cliParserParser::OBRACE);
    setState(140);
    blockstat();
    setState(141);
    match(cliParserParser::CBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

cliParserParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cliParserParser::IfstatContext* cliParserParser::StatContext::ifstat() {
  return getRuleContext<cliParserParser::IfstatContext>(0);
}

cliParserParser::WhilestatContext* cliParserParser::StatContext::whilestat() {
  return getRuleContext<cliParserParser::WhilestatContext>(0);
}

cliParserParser::AssgnmntContext* cliParserParser::StatContext::assgnmnt() {
  return getRuleContext<cliParserParser::AssgnmntContext>(0);
}

std::vector<cliParserParser::ComparContext *> cliParserParser::StatContext::compar() {
  return getRuleContexts<cliParserParser::ComparContext>();
}

cliParserParser::ComparContext* cliParserParser::StatContext::compar(size_t i) {
  return getRuleContext<cliParserParser::ComparContext>(i);
}

std::vector<cliParserParser::LogicopsContext *> cliParserParser::StatContext::logicops() {
  return getRuleContexts<cliParserParser::LogicopsContext>();
}

cliParserParser::LogicopsContext* cliParserParser::StatContext::logicops(size_t i) {
  return getRuleContext<cliParserParser::LogicopsContext>(i);
}

cliParserParser::ExprMContext* cliParserParser::StatContext::exprM() {
  return getRuleContext<cliParserParser::ExprMContext>(0);
}

cliParserParser::CommandContext* cliParserParser::StatContext::command() {
  return getRuleContext<cliParserParser::CommandContext>(0);
}


size_t cliParserParser::StatContext::getRuleIndex() const {
  return cliParserParser::RuleStat;
}

void cliParserParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void cliParserParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


antlrcpp::Any cliParserParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitStat(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::StatContext* cliParserParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 32, cliParserParser::RuleStat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(143);
      ifstat();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(144);
      whilestat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(145);
      assgnmnt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(146);
      compar();
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == cliParserParser::AND

      || _la == cliParserParser::OR) {
        setState(147);
        logicops();
        setState(148);
        compar();
        setState(154);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(155);
      exprM();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(156);
      command();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(157);
      match(cliParserParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockstatContext ------------------------------------------------------------------

cliParserParser::BlockstatContext::BlockstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cliParserParser::StatContext *> cliParserParser::BlockstatContext::stat() {
  return getRuleContexts<cliParserParser::StatContext>();
}

cliParserParser::StatContext* cliParserParser::BlockstatContext::stat(size_t i) {
  return getRuleContext<cliParserParser::StatContext>(i);
}


size_t cliParserParser::BlockstatContext::getRuleIndex() const {
  return cliParserParser::RuleBlockstat;
}

void cliParserParser::BlockstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockstat(this);
}

void cliParserParser::BlockstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cliParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockstat(this);
}


antlrcpp::Any cliParserParser::BlockstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<cliParserVisitor*>(visitor) != nullptr)
    return ((cliParserVisitor *)visitor)->visitBlockstat(this);
  else
    return visitor->visitChildren(this);
}

cliParserParser::BlockstatContext* cliParserParser::blockstat() {
  BlockstatContext *_localctx = _tracker.createInstance<BlockstatContext>(_ctx, getState());
  enterRule(_localctx, 34, cliParserParser::RuleBlockstat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(160);
      stat();
      setState(163); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cliParserParser::T__0)
      | (1ULL << cliParserParser::T__1)
      | (1ULL << cliParserParser::WHILE)
      | (1ULL << cliParserParser::IF)
      | (1ULL << cliParserParser::ECHO)
      | (1ULL << cliParserParser::NUMBER)
      | (1ULL << cliParserParser::LETTER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> cliParserParser::_decisionToDFA;
atn::PredictionContextCache cliParserParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN cliParserParser::_atn;
std::vector<uint16_t> cliParserParser::_serializedATN;

std::vector<std::string> cliParserParser::_ruleNames = {
  "string", "exprM", "varid", "term", "factor", "bool_", "comparM", "comparS", 
  "compar", "logicops", "assgnmnt", "redir", "backgrnd", "command", "ifstat", 
  "whilestat", "stat", "blockstat"
};

std::vector<std::string> cliParserParser::_literalNames = {
  "", "'\"'", "';'", "'+'", "'-'", "'*'", "'/'", "'->'", "'->>'", "'&'", 
  "'and'", "'or'", "'while'", "'if'", "'TRUE'", "'FALSE'", "'else'", "'=='", 
  "':='", "'echo'", "'{'", "'}'"
};

std::vector<std::string> cliParserParser::_symbolicNames = {
  "", "", "", "PLUS", "MINUS", "MULT", "DIV", "RED", "REDD", "BACKGrnd", 
  "AND", "OR", "WHILE", "IF", "TRUE", "FALSE", "ELSE", "EQ", "ASSGNMNT", 
  "ECHO", "OBRACE", "CBRACE", "NUMBER", "WHITESPACE", "LETTER"
};

dfa::Vocabulary cliParserParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> cliParserParser::_tokenNames;

cliParserParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd, 
    0x3, 0x1a, 0xa8, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x29, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x2a, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x32, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x35, 0xb, 
    0x3, 0x3, 0x4, 0x6, 0x4, 0x38, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x39, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x3f, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x42, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x52, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x60, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x6, 0xf, 0x65, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x66, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x6b, 0xa, 0xf, 0x3, 0xf, 0x5, 0xf, 0x6e, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x75, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0x78, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x82, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0x89, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x8c, 0xb, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x99, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x9c, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0xa1, 0xa, 0x12, 0x3, 0x13, 0x6, 0x13, 0xa4, 0xa, 0x13, 0xd, 
    0x13, 0xe, 0x13, 0xa5, 0x3, 0x13, 0x2, 0x2, 0x14, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x2, 0x8, 0x3, 0x2, 0x18, 0x1a, 0x3, 0x2, 0x5, 0x6, 0x3, 
    0x2, 0x7, 0x8, 0x3, 0x2, 0x10, 0x11, 0x3, 0x2, 0xc, 0xd, 0x3, 0x2, 0x9, 
    0xa, 0xab, 0x2, 0x26, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x37, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0xc, 0x45, 0x3, 0x2, 0x2, 0x2, 0xe, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x53, 0x3, 0x2, 0x2, 0x2, 0x16, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x83, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0x26, 0x28, 0x7, 0x3, 0x2, 0x2, 0x27, 0x29, 
    0x9, 0x2, 0x2, 0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x3, 0x2, 
    0x2, 0x2d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x33, 0x5, 0x8, 0x5, 0x2, 
    0x2f, 0x30, 0x9, 0x3, 0x2, 0x2, 0x30, 0x32, 0x5, 0x8, 0x5, 0x2, 0x31, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x7, 0x1a, 
    0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x40, 0x5, 0xa, 0x6, 0x2, 0x3c, 
    0x3d, 0x9, 0x4, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0xa, 0x6, 0x2, 0x3e, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 0x18, 0x2, 
    0x2, 0x44, 0xb, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x9, 0x5, 0x2, 0x2, 
    0x46, 0xd, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0x4, 0x3, 0x2, 0x48, 
    0x49, 0x7, 0x13, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x4, 0x3, 0x2, 0x4a, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 
    0x13, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x2, 0x2, 0x2, 0x4e, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x52, 0x5, 0x10, 0x9, 0x2, 0x50, 0x52, 0x5, 0xe, 0x8, 
    0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x13, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x9, 0x6, 0x2, 0x2, 0x54, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0x6, 0x4, 0x2, 0x56, 0x57, 
    0x7, 0x14, 0x2, 0x2, 0x57, 0x58, 0x5, 0x22, 0x12, 0x2, 0x58, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x9, 0x7, 0x2, 0x2, 0x5a, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0x5c, 0x7, 0xb, 0x2, 0x2, 0x5c, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x5d, 0x60, 0x7, 0x15, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x2, 0x2, 0x2, 
    0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x61, 0x65, 0x5, 0x6, 0x4, 0x2, 0x62, 0x65, 
    0x5, 0x4, 0x3, 0x2, 0x63, 0x65, 0x5, 0x22, 0x12, 0x2, 0x64, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x9, 0x7, 0x2, 0x2, 0x69, 0x6b, 0x5, 0x6, 0x4, 0x2, 0x6a, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x7, 0xb, 0x2, 0x2, 0x6d, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x70, 0x7, 0xf, 0x2, 0x2, 0x70, 0x76, 0x5, 0x12, 0xa, 
    0x2, 0x71, 0x72, 0x5, 0x14, 0xb, 0x2, 0x72, 0x73, 0x5, 0x12, 0xa, 0x2, 
    0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 0x74, 0x71, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x16, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x24, 
    0x13, 0x2, 0x7b, 0x81, 0x7, 0x17, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x12, 0x2, 
    0x2, 0x7d, 0x7e, 0x7, 0x16, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x24, 0x13, 0x2, 
    0x7f, 0x80, 0x7, 0x17, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0xe, 0x2, 0x2, 0x84, 0x8a, 0x5, 
    0x12, 0xa, 0x2, 0x85, 0x86, 0x5, 0x14, 0xb, 0x2, 0x86, 0x87, 0x5, 0x12, 
    0xa, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 0x88, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x16, 0x2, 0x2, 0x8e, 0x8f, 
    0x5, 0x24, 0x13, 0x2, 0x8f, 0x90, 0x7, 0x17, 0x2, 0x2, 0x90, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0xa1, 0x5, 0x1e, 0x10, 0x2, 0x92, 0xa1, 0x5, 0x20, 
    0x11, 0x2, 0x93, 0xa1, 0x5, 0x16, 0xc, 0x2, 0x94, 0x9a, 0x5, 0x12, 0xa, 
    0x2, 0x95, 0x96, 0x5, 0x14, 0xb, 0x2, 0x96, 0x97, 0x5, 0x12, 0xa, 0x2, 
    0x97, 0x99, 0x3, 0x2, 0x2, 0x2, 0x98, 0x95, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0xa1, 0x5, 0x4, 0x3, 0x2, 0x9e, 0xa1, 0x5, 0x1c, 
    0xf, 0x2, 0x9f, 0xa1, 0x7, 0x4, 0x2, 0x2, 0xa0, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0x92, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x94, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0x5, 0x22, 0x12, 0x2, 0xa3, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x2a, 0x33, 0x39, 0x40, 0x51, 0x5f, 0x64, 0x66, 0x6a, 0x6d, 
    0x76, 0x81, 0x8a, 0x9a, 0xa0, 0xa5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

cliParserParser::Initializer cliParserParser::_init;
