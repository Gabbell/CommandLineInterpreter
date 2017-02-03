
// Generated from cliParser.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"


using namespace antlr4;



class cliParserLexer : public Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, PLUS = 3, MINUS = 4, MULT = 5, DIV = 6, RED = 7, 
    REDD = 8, BACKGrnd = 9, AND = 10, OR = 11, WHILE = 12, IF = 13, TRUE = 14, 
    FALSE = 15, ELSE = 16, EQ = 17, ASSGNMNT = 18, ECHO = 19, OBRACE = 20, 
    CBRACE = 21, NUMBER = 22, WHITESPACE = 23, LETTER = 24
  };

  cliParserLexer(CharStream *input);
  ~cliParserLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const atn::ATN& getATN() const override;


private:
  static std::vector<dfa::DFA> _decisionToDFA;
  static atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static dfa::Vocabulary _vocabulary;
  static atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

