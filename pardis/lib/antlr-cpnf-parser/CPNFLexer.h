
// Generated from C.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


namespace antlr_CPNF {


class  CLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, Auto = 22, Break = 23, Case = 24, Char = 25, Const = 26, 
    Continue = 27, Default = 28, Do = 29, Double = 30, Else = 31, Enum = 32, 
    Extern = 33, Float = 34, For = 35, Goto = 36, If = 37, Inline = 38, 
    Int = 39, Long = 40, Register = 41, Restrict = 42, Return = 43, Short = 44, 
    Signed = 45, Sizeof = 46, Static = 47, Struct = 48, Switch = 49, Typedef = 50, 
    Union = 51, Unsigned = 52, Void = 53, Volatile = 54, While = 55, Alignas = 56, 
    Alignof = 57, Atomic = 58, Bool = 59, Complex = 60, Generic = 61, Imaginary = 62, 
    Noreturn = 63, StaticAssert = 64, ThreadLocal = 65, LeftParen = 66, 
    RightParen = 67, LeftBracket = 68, RightBracket = 69, LeftBrace = 70, 
    RightBrace = 71, Less = 72, LessEqual = 73, Greater = 74, GreaterEqual = 75, 
    LeftShift = 76, RightShift = 77, Plus = 78, PlusPlus = 79, Minus = 80, 
    MinusMinus = 81, Star = 82, Div = 83, Mod = 84, And = 85, Or = 86, AndAnd = 87, 
    OrOr = 88, Caret = 89, Not = 90, Tilde = 91, Question = 92, Colon = 93, 
    Semi = 94, Comma = 95, Assign = 96, StarAssign = 97, DivAssign = 98, 
    ModAssign = 99, PlusAssign = 100, MinusAssign = 101, LeftShiftAssign = 102, 
    RightShiftAssign = 103, AndAssign = 104, XorAssign = 105, OrAssign = 106, 
    Equal = 107, NotEqual = 108, Arrow = 109, Dot = 110, Ellipsis = 111, 
    RealPart = 112, ImaginaryPart = 113, Identifier = 114, Constant = 115, 
    StringLiteral = 116, ComplexDefine = 117, LineAfterPreprocessing = 118, 
    LineDirective = 119, IncludeDirective = 120, PragmaDirective = 121, 
    Whitespace = 122, Newline = 123, BlockComment = 124, LineComment = 125
  };

  CLexer(antlr4::CharStream *input);
  ~CLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlr_CPNF
