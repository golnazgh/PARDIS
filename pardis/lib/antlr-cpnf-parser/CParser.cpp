
// Generated from C.g4 by ANTLR 4.7


#include "CListener.h"
#include "CPNFVisitor.h"

#include "CPNFParser.h"


using namespace antlrcpp;
using namespace antlr_CPNF;
using namespace antlr4;

CParser::CParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CParser::~CParser() {
  delete _interpreter;
}

std::string CParser::getGrammarFileName() const {
  return "C.g4";
}

const std::vector<std::string>& CParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

CParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::PointerContext* CParser::AbstractDeclaratorContext::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}

CParser::Pnf_option_pointer_26Context* CParser::AbstractDeclaratorContext::pnf_option_pointer_26() {
  return getRuleContext<CParser::Pnf_option_pointer_26Context>(0);
}

CParser::DirectAbstractDeclaratorContext* CParser::AbstractDeclaratorContext::directAbstractDeclarator() {
  return getRuleContext<CParser::DirectAbstractDeclaratorContext>(0);
}

CParser::Pnf_star_declarator_63Context* CParser::AbstractDeclaratorContext::pnf_star_declarator_63() {
  return getRuleContext<CParser::Pnf_star_declarator_63Context>(0);
}


size_t CParser::AbstractDeclaratorContext::getRuleIndex() const {
  return CParser::RuleAbstractDeclarator;
}

void CParser::AbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclarator(this);
}

void CParser::AbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclarator(this);
}


antlrcpp::Any CParser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::AbstractDeclaratorContext* CParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 0, CParser::RuleAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(411);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(406);
      pointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(407);
      pnf_option_pointer_26();
      setState(408);
      directAbstractDeclarator();
      setState(409);
      pnf_star_declarator_63();
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

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

CParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::MultiplicativeExpressionContext* CParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<CParser::MultiplicativeExpressionContext>(0);
}

CParser::Pnf_star_additiveExpression_49Context* CParser::AdditiveExpressionContext::pnf_star_additiveExpression_49() {
  return getRuleContext<CParser::Pnf_star_additiveExpression_49Context>(0);
}


size_t CParser::AdditiveExpressionContext::getRuleIndex() const {
  return CParser::RuleAdditiveExpression;
}

void CParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void CParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


antlrcpp::Any CParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::AdditiveExpressionContext* CParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, CParser::RuleAdditiveExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    multiplicativeExpression();
    setState(414);
    pnf_star_additiveExpression_49();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentSpecifierContext ------------------------------------------------------------------

CParser::AlignmentSpecifierContext::AlignmentSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::TypeNameContext* CParser::AlignmentSpecifierContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

CParser::ConditionalExpressionContext* CParser::AlignmentSpecifierContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::AlignmentSpecifierContext::getRuleIndex() const {
  return CParser::RuleAlignmentSpecifier;
}

void CParser::AlignmentSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentSpecifier(this);
}

void CParser::AlignmentSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentSpecifier(this);
}


antlrcpp::Any CParser::AlignmentSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAlignmentSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::AlignmentSpecifierContext* CParser::alignmentSpecifier() {
  AlignmentSpecifierContext *_localctx = _tracker.createInstance<AlignmentSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 4, CParser::RuleAlignmentSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(426);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(416);
      match(CParser::Alignas);
      setState(417);
      match(CParser::LeftParen);
      setState(418);
      typeName();
      setState(419);
      match(CParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(421);
      match(CParser::Alignas);
      setState(422);
      match(CParser::LeftParen);
      setState(423);
      conditionalExpression();
      setState(424);
      match(CParser::RightParen);
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

//----------------- ArgumentExpressionList_block_1Context ------------------------------------------------------------------

CParser::ArgumentExpressionList_block_1Context::ArgumentExpressionList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::ArgumentExpressionList_block_1Context::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}


size_t CParser::ArgumentExpressionList_block_1Context::getRuleIndex() const {
  return CParser::RuleArgumentExpressionList_block_1;
}

void CParser::ArgumentExpressionList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentExpressionList_block_1(this);
}

void CParser::ArgumentExpressionList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentExpressionList_block_1(this);
}


antlrcpp::Any CParser::ArgumentExpressionList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitArgumentExpressionList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::ArgumentExpressionList_block_1Context* CParser::argumentExpressionList_block_1() {
  ArgumentExpressionList_block_1Context *_localctx = _tracker.createInstance<ArgumentExpressionList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 6, CParser::RuleArgumentExpressionList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(CParser::Comma);
    setState(429);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmNameContext ------------------------------------------------------------------

CParser::AsmNameContext::AsmNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::AsmNameContext::getRuleIndex() const {
  return CParser::RuleAsmName;
}

void CParser::AsmNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsmName(this);
}

void CParser::AsmNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsmName(this);
}


antlrcpp::Any CParser::AsmNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAsmName(this);
  else
    return visitor->visitChildren(this);
}

CParser::AsmNameContext* CParser::asmName() {
  AsmNameContext *_localctx = _tracker.createInstance<AsmNameContext>(_ctx, getState());
  enterRule(_localctx, 8, CParser::RuleAsmName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

CParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_star_assignmentExpression_105Context* CParser::AssignmentExpressionContext::pnf_star_assignmentExpression_105() {
  return getRuleContext<CParser::Pnf_star_assignmentExpression_105Context>(0);
}

CParser::ConditionalExpressionContext* CParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::AssignmentExpressionContext::getRuleIndex() const {
  return CParser::RuleAssignmentExpression;
}

void CParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void CParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any CParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::AssignmentExpressionContext* CParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, CParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    pnf_star_assignmentExpression_105();
    setState(434);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

CParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::AssignmentOperatorContext::getRuleIndex() const {
  return CParser::RuleAssignmentOperator;
}

void CParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void CParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any CParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::AssignmentOperatorContext* CParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, CParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    _la = _input->LA(1);
    if (!(((((_la - 96) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 96)) & ((1ULL << (CParser::Assign - 96))
      | (1ULL << (CParser::StarAssign - 96))
      | (1ULL << (CParser::DivAssign - 96))
      | (1ULL << (CParser::ModAssign - 96))
      | (1ULL << (CParser::PlusAssign - 96))
      | (1ULL << (CParser::MinusAssign - 96))
      | (1ULL << (CParser::LeftShiftAssign - 96))
      | (1ULL << (CParser::RightShiftAssign - 96))
      | (1ULL << (CParser::AndAssign - 96))
      | (1ULL << (CParser::XorAssign - 96))
      | (1ULL << (CParser::OrAssign - 96)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- AtomicTypeSpecifierContext ------------------------------------------------------------------

CParser::AtomicTypeSpecifierContext::AtomicTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::TypeNameContext* CParser::AtomicTypeSpecifierContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}


size_t CParser::AtomicTypeSpecifierContext::getRuleIndex() const {
  return CParser::RuleAtomicTypeSpecifier;
}

void CParser::AtomicTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicTypeSpecifier(this);
}

void CParser::AtomicTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicTypeSpecifier(this);
}


antlrcpp::Any CParser::AtomicTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitAtomicTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::AtomicTypeSpecifierContext* CParser::atomicTypeSpecifier() {
  AtomicTypeSpecifierContext *_localctx = _tracker.createInstance<AtomicTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 14, CParser::RuleAtomicTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    match(CParser::Atomic);
    setState(439);
    match(CParser::LeftParen);
    setState(440);
    typeName();
    setState(441);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

CParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DeclarationContext* CParser::BlockItemContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}

CParser::StatementContext* CParser::BlockItemContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

CParser::FunctionDefinitionContext* CParser::BlockItemContext::functionDefinition() {
  return getRuleContext<CParser::FunctionDefinitionContext>(0);
}


size_t CParser::BlockItemContext::getRuleIndex() const {
  return CParser::RuleBlockItem;
}

void CParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void CParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


antlrcpp::Any CParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

CParser::BlockItemContext* CParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 16, CParser::RuleBlockItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(446);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(443);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(444);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(445);
      functionDefinition();
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

//----------------- CastExpressionContext ------------------------------------------------------------------

CParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_star_castExpression_107Context* CParser::CastExpressionContext::pnf_star_castExpression_107() {
  return getRuleContext<CParser::Pnf_star_castExpression_107Context>(0);
}

CParser::UnaryExpressionContext* CParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

CParser::TypeNameContext* CParser::CastExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

CParser::InitializerContext* CParser::CastExpressionContext::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}


size_t CParser::CastExpressionContext::getRuleIndex() const {
  return CParser::RuleCastExpression;
}

void CParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void CParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}


antlrcpp::Any CParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::CastExpressionContext* CParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CParser::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(457);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(448);
      pnf_star_castExpression_107();
      setState(449);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(451);
      pnf_star_castExpression_107();
      setState(452);
      match(CParser::LeftParen);
      setState(453);
      typeName();
      setState(454);
      match(CParser::RightParen);
      setState(455);
      initializer();
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

//----------------- CompilationUnitContext ------------------------------------------------------------------

CParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_compilationUnit_98Context* CParser::CompilationUnitContext::pnf_option_compilationUnit_98() {
  return getRuleContext<CParser::Pnf_option_compilationUnit_98Context>(0);
}

tree::TerminalNode* CParser::CompilationUnitContext::EOF() {
  return getToken(CParser::EOF, 0);
}


size_t CParser::CompilationUnitContext::getRuleIndex() const {
  return CParser::RuleCompilationUnit;
}

void CParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void CParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any CParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

CParser::CompilationUnitContext* CParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 20, CParser::RuleCompilationUnit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    pnf_option_compilationUnit_98();
    setState(460);
    match(CParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

CParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_compoundStatement_87Context* CParser::CompoundStatementContext::pnf_option_compoundStatement_87() {
  return getRuleContext<CParser::Pnf_option_compoundStatement_87Context>(0);
}


size_t CParser::CompoundStatementContext::getRuleIndex() const {
  return CParser::RuleCompoundStatement;
}

void CParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void CParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


antlrcpp::Any CParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::CompoundStatementContext* CParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, CParser::RuleCompoundStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    match(CParser::LeftBrace);
    setState(463);
    pnf_option_compoundStatement_87();
    setState(464);
    match(CParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

CParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_primaryExpression_41Context* CParser::ConditionalExpressionContext::pnf_option_primaryExpression_41() {
  return getRuleContext<CParser::Pnf_option_primaryExpression_41Context>(0);
}

CParser::Pnf_list_left_1Context* CParser::ConditionalExpressionContext::pnf_list_left_1() {
  return getRuleContext<CParser::Pnf_list_left_1Context>(0);
}

CParser::Pnf_option_conditionalExpression_46Context* CParser::ConditionalExpressionContext::pnf_option_conditionalExpression_46() {
  return getRuleContext<CParser::Pnf_option_conditionalExpression_46Context>(0);
}


size_t CParser::ConditionalExpressionContext::getRuleIndex() const {
  return CParser::RuleConditionalExpression;
}

void CParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void CParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


antlrcpp::Any CParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConditionalExpressionContext* CParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, CParser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    pnf_option_primaryExpression_41();
    setState(467);
    pnf_list_left_1();
    setState(468);
    pnf_option_conditionalExpression_46();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpression_block_1Context ------------------------------------------------------------------

CParser::ConditionalExpression_block_1Context::ConditionalExpression_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_conditionalExpression_block_1_34Context* CParser::ConditionalExpression_block_1Context::pnf_option_conditionalExpression_block_1_34() {
  return getRuleContext<CParser::Pnf_option_conditionalExpression_block_1_34Context>(0);
}

CParser::ConditionalExpressionContext* CParser::ConditionalExpression_block_1Context::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::ConditionalExpression_block_1Context::getRuleIndex() const {
  return CParser::RuleConditionalExpression_block_1;
}

void CParser::ConditionalExpression_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression_block_1(this);
}

void CParser::ConditionalExpression_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression_block_1(this);
}


antlrcpp::Any CParser::ConditionalExpression_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::ConditionalExpression_block_1Context* CParser::conditionalExpression_block_1() {
  ConditionalExpression_block_1Context *_localctx = _tracker.createInstance<ConditionalExpression_block_1Context>(_ctx, getState());
  enterRule(_localctx, 26, CParser::RuleConditionalExpression_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(CParser::Question);
    setState(471);
    pnf_option_conditionalExpression_block_1_34();
    setState(472);
    match(CParser::Colon);
    setState(473);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::DeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::Pnf_option_declaration_14Context* CParser::DeclarationContext::pnf_option_declaration_14() {
  return getRuleContext<CParser::Pnf_option_declaration_14Context>(0);
}

CParser::StaticAssertDeclarationContext* CParser::DeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CParser::StaticAssertDeclarationContext>(0);
}


size_t CParser::DeclarationContext::getRuleIndex() const {
  return CParser::RuleDeclaration;
}

void CParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any CParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationContext* CParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, CParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(480);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__3:
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::T__7:
      case CParser::T__8:
      case CParser::T__9:
      case CParser::T__13:
      case CParser::T__14:
      case CParser::T__15:
      case CParser::T__16:
      case CParser::T__17:
      case CParser::T__18:
      case CParser::Auto:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Extern:
      case CParser::Float:
      case CParser::Inline:
      case CParser::Int:
      case CParser::Long:
      case CParser::Register:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Static:
      case CParser::Struct:
      case CParser::Typedef:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Alignas:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Imaginary:
      case CParser::Noreturn:
      case CParser::ThreadLocal:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(475);
        declarationSpecifiers();
        setState(476);
        pnf_option_declaration_14();
        setState(477);
        match(CParser::Semi);
        break;
      }

      case CParser::StaticAssert: {
        enterOuterAlt(_localctx, 2);
        setState(479);
        staticAssertDeclaration();
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

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

CParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::StorageClassSpecifierContext* CParser::DeclarationSpecifierContext::storageClassSpecifier() {
  return getRuleContext<CParser::StorageClassSpecifierContext>(0);
}

CParser::TypeSpecifierContext* CParser::DeclarationSpecifierContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::Pnf_star_declarationSpecifiers_60Context* CParser::DeclarationSpecifierContext::pnf_star_declarationSpecifiers_60() {
  return getRuleContext<CParser::Pnf_star_declarationSpecifiers_60Context>(0);
}

CParser::TypeQualifierContext* CParser::DeclarationSpecifierContext::typeQualifier() {
  return getRuleContext<CParser::TypeQualifierContext>(0);
}

CParser::FunctionSpecifierContext* CParser::DeclarationSpecifierContext::functionSpecifier() {
  return getRuleContext<CParser::FunctionSpecifierContext>(0);
}

CParser::AlignmentSpecifierContext* CParser::DeclarationSpecifierContext::alignmentSpecifier() {
  return getRuleContext<CParser::AlignmentSpecifierContext>(0);
}


size_t CParser::DeclarationSpecifierContext::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifier;
}

void CParser::DeclarationSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifier(this);
}

void CParser::DeclarationSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifier(this);
}


antlrcpp::Any CParser::DeclarationSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationSpecifierContext* CParser::declarationSpecifier() {
  DeclarationSpecifierContext *_localctx = _tracker.createInstance<DeclarationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 30, CParser::RuleDeclarationSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(489);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(482);
      storageClassSpecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(483);
      typeSpecifier();
      setState(484);
      pnf_star_declarationSpecifiers_60();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(486);
      typeQualifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(487);
      functionSpecifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(488);
      alignmentSpecifier();
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

//----------------- DeclarationSpecifiersContext ------------------------------------------------------------------

CParser::DeclarationSpecifiersContext::DeclarationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_star_declarationSpecifiers_59Context *> CParser::DeclarationSpecifiersContext::pnf_star_declarationSpecifiers_59() {
  return getRuleContexts<CParser::Pnf_star_declarationSpecifiers_59Context>();
}

CParser::Pnf_star_declarationSpecifiers_59Context* CParser::DeclarationSpecifiersContext::pnf_star_declarationSpecifiers_59(size_t i) {
  return getRuleContext<CParser::Pnf_star_declarationSpecifiers_59Context>(i);
}

CParser::TypeSpecifierContext* CParser::DeclarationSpecifiersContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::Pnf_star_declarationSpecifiers_60Context* CParser::DeclarationSpecifiersContext::pnf_star_declarationSpecifiers_60() {
  return getRuleContext<CParser::Pnf_star_declarationSpecifiers_60Context>(0);
}


size_t CParser::DeclarationSpecifiersContext::getRuleIndex() const {
  return CParser::RuleDeclarationSpecifiers;
}

void CParser::DeclarationSpecifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifiers(this);
}

void CParser::DeclarationSpecifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifiers(this);
}


antlrcpp::Any CParser::DeclarationSpecifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclarationSpecifiersContext* CParser::declarationSpecifiers() {
  DeclarationSpecifiersContext *_localctx = _tracker.createInstance<DeclarationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 32, CParser::RuleDeclarationSpecifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(491);
    pnf_star_declarationSpecifiers_59();
    setState(492);
    typeSpecifier();
    setState(493);
    pnf_star_declarationSpecifiers_60();
    setState(494);
    pnf_star_declarationSpecifiers_59();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_pointer_26Context* CParser::DeclaratorContext::pnf_option_pointer_26() {
  return getRuleContext<CParser::Pnf_option_pointer_26Context>(0);
}

CParser::DirectDeclaratorContext* CParser::DeclaratorContext::directDeclarator() {
  return getRuleContext<CParser::DirectDeclaratorContext>(0);
}

CParser::Pnf_star_declarator_63Context* CParser::DeclaratorContext::pnf_star_declarator_63() {
  return getRuleContext<CParser::Pnf_star_declarator_63Context>(0);
}


size_t CParser::DeclaratorContext::getRuleIndex() const {
  return CParser::RuleDeclarator;
}

void CParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void CParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any CParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::DeclaratorContext* CParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 34, CParser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    pnf_option_pointer_26();
    setState(497);
    directDeclarator();
    setState(498);
    pnf_star_declarator_63();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignationContext ------------------------------------------------------------------

CParser::DesignationContext::DesignationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_plus_designatorList_28Context* CParser::DesignationContext::pnf_plus_designatorList_28() {
  return getRuleContext<CParser::Pnf_plus_designatorList_28Context>(0);
}

tree::TerminalNode* CParser::DesignationContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::DesignationContext::getRuleIndex() const {
  return CParser::RuleDesignation;
}

void CParser::DesignationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignation(this);
}

void CParser::DesignationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignation(this);
}


antlrcpp::Any CParser::DesignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDesignation(this);
  else
    return visitor->visitChildren(this);
}

CParser::DesignationContext* CParser::designation() {
  DesignationContext *_localctx = _tracker.createInstance<DesignationContext>(_ctx, getState());
  enterRule(_localctx, 36, CParser::RuleDesignation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(505);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftBracket:
      case CParser::Dot: {
        enterOuterAlt(_localctx, 1);
        setState(500);
        pnf_plus_designatorList_28();
        setState(501);
        match(CParser::Assign);
        break;
      }

      case CParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(503);
        match(CParser::Identifier);
        setState(504);
        match(CParser::Colon);
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

//----------------- DesignatorContext ------------------------------------------------------------------

CParser::DesignatorContext::DesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::DesignatorContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}

CParser::Pnf_option_designator_83Context* CParser::DesignatorContext::pnf_option_designator_83() {
  return getRuleContext<CParser::Pnf_option_designator_83Context>(0);
}

tree::TerminalNode* CParser::DesignatorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::DesignatorContext::getRuleIndex() const {
  return CParser::RuleDesignator;
}

void CParser::DesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignator(this);
}

void CParser::DesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignator(this);
}


antlrcpp::Any CParser::DesignatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDesignator(this);
  else
    return visitor->visitChildren(this);
}

CParser::DesignatorContext* CParser::designator() {
  DesignatorContext *_localctx = _tracker.createInstance<DesignatorContext>(_ctx, getState());
  enterRule(_localctx, 38, CParser::RuleDesignator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(514);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(507);
        match(CParser::LeftBracket);
        setState(508);
        conditionalExpression();
        setState(509);
        pnf_option_designator_83();
        setState(510);
        match(CParser::RightBracket);
        break;
      }

      case CParser::Dot: {
        enterOuterAlt(_localctx, 2);
        setState(512);
        match(CParser::Dot);
        setState(513);
        match(CParser::Identifier);
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

//----------------- Designator_block_1Context ------------------------------------------------------------------

CParser::Designator_block_1Context::Designator_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::Designator_block_1Context::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::Designator_block_1Context::getRuleIndex() const {
  return CParser::RuleDesignator_block_1;
}

void CParser::Designator_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignator_block_1(this);
}

void CParser::Designator_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignator_block_1(this);
}


antlrcpp::Any CParser::Designator_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDesignator_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::Designator_block_1Context* CParser::designator_block_1() {
  Designator_block_1Context *_localctx = _tracker.createInstance<Designator_block_1Context>(_ctx, getState());
  enterRule(_localctx, 40, CParser::RuleDesignator_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    match(CParser::Ellipsis);
    setState(517);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectAbstractDeclaratorContext ------------------------------------------------------------------

CParser::DirectAbstractDeclaratorContext::DirectAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AbstractDeclaratorContext* CParser::DirectAbstractDeclaratorContext::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}

CParser::Pnf_star_declarator_63Context* CParser::DirectAbstractDeclaratorContext::pnf_star_declarator_63() {
  return getRuleContext<CParser::Pnf_star_declarator_63Context>(0);
}

CParser::Pnf_star_directAbstractDeclarator_78Context* CParser::DirectAbstractDeclaratorContext::pnf_star_directAbstractDeclarator_78() {
  return getRuleContext<CParser::Pnf_star_directAbstractDeclarator_78Context>(0);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_70Context* CParser::DirectAbstractDeclaratorContext::pnf_option_pnf_part_directDeclarator_21_70() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_70Context>(0);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_71Context* CParser::DirectAbstractDeclaratorContext::pnf_option_pnf_part_directDeclarator_21_71() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_71Context>(0);
}

CParser::AssignmentExpressionContext* CParser::DirectAbstractDeclaratorContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::Pnf_plus_typeQualifierList_23Context* CParser::DirectAbstractDeclaratorContext::pnf_plus_typeQualifierList_23() {
  return getRuleContext<CParser::Pnf_plus_typeQualifierList_23Context>(0);
}

CParser::Pnf_option_directAbstractDeclarator_79Context* CParser::DirectAbstractDeclaratorContext::pnf_option_directAbstractDeclarator_79() {
  return getRuleContext<CParser::Pnf_option_directAbstractDeclarator_79Context>(0);
}


size_t CParser::DirectAbstractDeclaratorContext::getRuleIndex() const {
  return CParser::RuleDirectAbstractDeclarator;
}

void CParser::DirectAbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectAbstractDeclarator(this);
}

void CParser::DirectAbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectAbstractDeclarator(this);
}


antlrcpp::Any CParser::DirectAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDirectAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::DirectAbstractDeclaratorContext* CParser::directAbstractDeclarator() {
  DirectAbstractDeclaratorContext *_localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 42, CParser::RuleDirectAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(555);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(519);
      match(CParser::LeftParen);
      setState(520);
      abstractDeclarator();
      setState(521);
      match(CParser::RightParen);
      setState(522);
      pnf_star_declarator_63();
      setState(523);
      pnf_star_directAbstractDeclarator_78();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(525);
      match(CParser::LeftBracket);
      setState(526);
      pnf_option_pnf_part_directDeclarator_21_70();
      setState(527);
      pnf_option_pnf_part_directDeclarator_21_71();
      setState(528);
      match(CParser::RightBracket);
      setState(529);
      pnf_star_directAbstractDeclarator_78();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(531);
      match(CParser::LeftBracket);
      setState(532);
      match(CParser::Static);
      setState(533);
      pnf_option_pnf_part_directDeclarator_21_70();
      setState(534);
      assignmentExpression();
      setState(535);
      match(CParser::RightBracket);
      setState(536);
      pnf_star_directAbstractDeclarator_78();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(538);
      match(CParser::LeftBracket);
      setState(539);
      pnf_plus_typeQualifierList_23();
      setState(540);
      match(CParser::Static);
      setState(541);
      assignmentExpression();
      setState(542);
      match(CParser::RightBracket);
      setState(543);
      pnf_star_directAbstractDeclarator_78();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(545);
      match(CParser::LeftBracket);
      setState(546);
      match(CParser::Star);
      setState(547);
      match(CParser::RightBracket);
      setState(548);
      pnf_star_directAbstractDeclarator_78();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(549);
      match(CParser::LeftParen);
      setState(550);
      pnf_option_directAbstractDeclarator_79();
      setState(551);
      match(CParser::RightParen);
      setState(552);
      pnf_star_declarator_63();
      setState(553);
      pnf_star_directAbstractDeclarator_78();
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

//----------------- DirectDeclaratorContext ------------------------------------------------------------------

CParser::DirectDeclaratorContext::DirectDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::DirectDeclaratorContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::Pnf_star_directDeclarator_69Context* CParser::DirectDeclaratorContext::pnf_star_directDeclarator_69() {
  return getRuleContext<CParser::Pnf_star_directDeclarator_69Context>(0);
}

CParser::DeclaratorContext* CParser::DirectDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}


size_t CParser::DirectDeclaratorContext::getRuleIndex() const {
  return CParser::RuleDirectDeclarator;
}

void CParser::DirectDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectDeclarator(this);
}

void CParser::DirectDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectDeclarator(this);
}


antlrcpp::Any CParser::DirectDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitDirectDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::DirectDeclaratorContext* CParser::directDeclarator() {
  DirectDeclaratorContext *_localctx = _tracker.createInstance<DirectDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 44, CParser::RuleDirectDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(564);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(557);
        match(CParser::Identifier);
        setState(558);
        pnf_star_directDeclarator_69();
        break;
      }

      case CParser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(559);
        match(CParser::LeftParen);
        setState(560);
        declarator();
        setState(561);
        match(CParser::RightParen);
        setState(562);
        pnf_star_directDeclarator_69();
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

//----------------- EnumSpecifierContext ------------------------------------------------------------------

CParser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_structOrUnionSpecifier_62Context* CParser::EnumSpecifierContext::pnf_option_structOrUnionSpecifier_62() {
  return getRuleContext<CParser::Pnf_option_structOrUnionSpecifier_62Context>(0);
}

CParser::Pnf_list_left_11Context* CParser::EnumSpecifierContext::pnf_list_left_11() {
  return getRuleContext<CParser::Pnf_list_left_11Context>(0);
}

CParser::Pnf_option_postfixExpression_2Context* CParser::EnumSpecifierContext::pnf_option_postfixExpression_2() {
  return getRuleContext<CParser::Pnf_option_postfixExpression_2Context>(0);
}

tree::TerminalNode* CParser::EnumSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::EnumSpecifierContext::getRuleIndex() const {
  return CParser::RuleEnumSpecifier;
}

void CParser::EnumSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumSpecifier(this);
}

void CParser::EnumSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumSpecifier(this);
}


antlrcpp::Any CParser::EnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumSpecifierContext* CParser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 46, CParser::RuleEnumSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(575);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(566);
      match(CParser::Enum);
      setState(567);
      pnf_option_structOrUnionSpecifier_62();
      setState(568);
      match(CParser::LeftBrace);
      setState(569);
      pnf_list_left_11();
      setState(570);
      pnf_option_postfixExpression_2();
      setState(571);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(573);
      match(CParser::Enum);
      setState(574);
      match(CParser::Identifier);
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

//----------------- EnumerationConstantContext ------------------------------------------------------------------

CParser::EnumerationConstantContext::EnumerationConstantContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::EnumerationConstantContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::EnumerationConstantContext::getRuleIndex() const {
  return CParser::RuleEnumerationConstant;
}

void CParser::EnumerationConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerationConstant(this);
}

void CParser::EnumerationConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerationConstant(this);
}


antlrcpp::Any CParser::EnumerationConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumerationConstant(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumerationConstantContext* CParser::enumerationConstant() {
  EnumerationConstantContext *_localctx = _tracker.createInstance<EnumerationConstantContext>(_ctx, getState());
  enterRule(_localctx, 48, CParser::RuleEnumerationConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::EnumerationConstantContext* CParser::EnumeratorContext::enumerationConstant() {
  return getRuleContext<CParser::EnumerationConstantContext>(0);
}

CParser::Pnf_option_enumerator_20Context* CParser::EnumeratorContext::pnf_option_enumerator_20() {
  return getRuleContext<CParser::Pnf_option_enumerator_20Context>(0);
}


size_t CParser::EnumeratorContext::getRuleIndex() const {
  return CParser::RuleEnumerator;
}

void CParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void CParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}


antlrcpp::Any CParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumeratorContext* CParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 50, CParser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    enumerationConstant();
    setState(580);
    pnf_option_enumerator_20();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorList_block_1Context ------------------------------------------------------------------

CParser::EnumeratorList_block_1Context::EnumeratorList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::EnumeratorContext* CParser::EnumeratorList_block_1Context::enumerator() {
  return getRuleContext<CParser::EnumeratorContext>(0);
}


size_t CParser::EnumeratorList_block_1Context::getRuleIndex() const {
  return CParser::RuleEnumeratorList_block_1;
}

void CParser::EnumeratorList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorList_block_1(this);
}

void CParser::EnumeratorList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorList_block_1(this);
}


antlrcpp::Any CParser::EnumeratorList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEnumeratorList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::EnumeratorList_block_1Context* CParser::enumeratorList_block_1() {
  EnumeratorList_block_1Context *_localctx = _tracker.createInstance<EnumeratorList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 52, CParser::RuleEnumeratorList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(582);
    match(CParser::Comma);
    setState(583);
    enumerator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

CParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::RelationalExpressionContext* CParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<CParser::RelationalExpressionContext>(0);
}

CParser::Pnf_star_equalityExpression_52Context* CParser::EqualityExpressionContext::pnf_star_equalityExpression_52() {
  return getRuleContext<CParser::Pnf_star_equalityExpression_52Context>(0);
}


size_t CParser::EqualityExpressionContext::getRuleIndex() const {
  return CParser::RuleEqualityExpression;
}

void CParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void CParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


antlrcpp::Any CParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::EqualityExpressionContext* CParser::equalityExpression() {
  EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, getState());
  enterRule(_localctx, 54, CParser::RuleEqualityExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(585);
    relationalExpression();
    setState(586);
    pnf_star_equalityExpression_52();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

CParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_conditionalExpression_block_1_34Context* CParser::ExpressionStatementContext::pnf_option_conditionalExpression_block_1_34() {
  return getRuleContext<CParser::Pnf_option_conditionalExpression_block_1_34Context>(0);
}


size_t CParser::ExpressionStatementContext::getRuleIndex() const {
  return CParser::RuleExpressionStatement;
}

void CParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void CParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any CParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExpressionStatementContext* CParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, CParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    pnf_option_conditionalExpression_block_1_34();
    setState(589);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternalDeclarationContext ------------------------------------------------------------------

CParser::ExternalDeclarationContext::ExternalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::ExternalDeclarationContext::IncludeDirective() {
  return getToken(CParser::IncludeDirective, 0);
}

tree::TerminalNode* CParser::ExternalDeclarationContext::PragmaDirective() {
  return getToken(CParser::PragmaDirective, 0);
}

CParser::FunctionDefinitionContext* CParser::ExternalDeclarationContext::functionDefinition() {
  return getRuleContext<CParser::FunctionDefinitionContext>(0);
}

CParser::DeclarationContext* CParser::ExternalDeclarationContext::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}

CParser::Pnf_option_externalDeclaration_31Context* CParser::ExternalDeclarationContext::pnf_option_externalDeclaration_31() {
  return getRuleContext<CParser::Pnf_option_externalDeclaration_31Context>(0);
}


size_t CParser::ExternalDeclarationContext::getRuleIndex() const {
  return CParser::RuleExternalDeclaration;
}

void CParser::ExternalDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternalDeclaration(this);
}

void CParser::ExternalDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternalDeclaration(this);
}


antlrcpp::Any CParser::ExternalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitExternalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ExternalDeclarationContext* CParser::externalDeclaration() {
  ExternalDeclarationContext *_localctx = _tracker.createInstance<ExternalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 58, CParser::RuleExternalDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(598);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(591);
      match(CParser::IncludeDirective);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(592);
      match(CParser::PragmaDirective);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(593);
      functionDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(594);
      declaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(595);
      pnf_option_externalDeclaration_31();
      setState(596);
      match(CParser::Semi);
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

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_functionDefinition_93Context* CParser::FunctionDefinitionContext::pnf_option_functionDefinition_93() {
  return getRuleContext<CParser::Pnf_option_functionDefinition_93Context>(0);
}

CParser::DeclaratorContext* CParser::FunctionDefinitionContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::Pnf_option_functionDefinition_94Context* CParser::FunctionDefinitionContext::pnf_option_functionDefinition_94() {
  return getRuleContext<CParser::Pnf_option_functionDefinition_94Context>(0);
}

CParser::CompoundStatementContext* CParser::FunctionDefinitionContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}


size_t CParser::FunctionDefinitionContext::getRuleIndex() const {
  return CParser::RuleFunctionDefinition;
}

void CParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void CParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any CParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctionDefinitionContext* CParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 60, CParser::RuleFunctionDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    pnf_option_functionDefinition_93();
    setState(601);
    declarator();
    setState(602);
    pnf_option_functionDefinition_94();
    setState(603);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSpecifierContext ------------------------------------------------------------------

CParser::FunctionSpecifierContext::FunctionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::FunctionSpecifier_block_1Context* CParser::FunctionSpecifierContext::functionSpecifier_block_1() {
  return getRuleContext<CParser::FunctionSpecifier_block_1Context>(0);
}

CParser::GccAttributeSpecifierContext* CParser::FunctionSpecifierContext::gccAttributeSpecifier() {
  return getRuleContext<CParser::GccAttributeSpecifierContext>(0);
}

tree::TerminalNode* CParser::FunctionSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::FunctionSpecifierContext::getRuleIndex() const {
  return CParser::RuleFunctionSpecifier;
}

void CParser::FunctionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSpecifier(this);
}

void CParser::FunctionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSpecifier(this);
}


antlrcpp::Any CParser::FunctionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctionSpecifierContext* CParser::functionSpecifier() {
  FunctionSpecifierContext *_localctx = _tracker.createInstance<FunctionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 62, CParser::RuleFunctionSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(611);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__4:
      case CParser::T__5:
      case CParser::T__6:
      case CParser::Inline:
      case CParser::Noreturn: {
        enterOuterAlt(_localctx, 1);
        setState(605);
        functionSpecifier_block_1();
        break;
      }

      case CParser::T__7:
      case CParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(606);
        gccAttributeSpecifier();
        break;
      }

      case CParser::T__3: {
        enterOuterAlt(_localctx, 3);
        setState(607);
        match(CParser::T__3);
        setState(608);
        match(CParser::LeftParen);
        setState(609);
        match(CParser::Identifier);
        setState(610);
        match(CParser::RightParen);
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

//----------------- FunctionSpecifier_block_1Context ------------------------------------------------------------------

CParser::FunctionSpecifier_block_1Context::FunctionSpecifier_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::FunctionSpecifier_block_1Context::getRuleIndex() const {
  return CParser::RuleFunctionSpecifier_block_1;
}

void CParser::FunctionSpecifier_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSpecifier_block_1(this);
}

void CParser::FunctionSpecifier_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSpecifier_block_1(this);
}


antlrcpp::Any CParser::FunctionSpecifier_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitFunctionSpecifier_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::FunctionSpecifier_block_1Context* CParser::functionSpecifier_block_1() {
  FunctionSpecifier_block_1Context *_localctx = _tracker.createInstance<FunctionSpecifier_block_1Context>(_ctx, getState());
  enterRule(_localctx, 64, CParser::RuleFunctionSpecifier_block_1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(613);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Noreturn))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- GccAttributeContext ------------------------------------------------------------------

CParser::GccAttributeContext::GccAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_gccAttribute_73Context* CParser::GccAttributeContext::pnf_option_gccAttribute_73() {
  return getRuleContext<CParser::Pnf_option_gccAttribute_73Context>(0);
}


size_t CParser::GccAttributeContext::getRuleIndex() const {
  return CParser::RuleGccAttribute;
}

void CParser::GccAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttribute(this);
}

void CParser::GccAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttribute(this);
}


antlrcpp::Any CParser::GccAttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccAttribute(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccAttributeContext* CParser::gccAttribute() {
  GccAttributeContext *_localctx = _tracker.createInstance<GccAttributeContext>(_ctx, getState());
  enterRule(_localctx, 66, CParser::RuleGccAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || (((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::RightParen - 66))
      | (1ULL << (CParser::Comma - 66)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(616);
    pnf_option_gccAttribute_73();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeList_block_1Context ------------------------------------------------------------------

CParser::GccAttributeList_block_1Context::GccAttributeList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_gccAttributeList_22Context* CParser::GccAttributeList_block_1Context::pnf_option_gccAttributeList_22() {
  return getRuleContext<CParser::Pnf_option_gccAttributeList_22Context>(0);
}


size_t CParser::GccAttributeList_block_1Context::getRuleIndex() const {
  return CParser::RuleGccAttributeList_block_1;
}

void CParser::GccAttributeList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttributeList_block_1(this);
}

void CParser::GccAttributeList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttributeList_block_1(this);
}


antlrcpp::Any CParser::GccAttributeList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccAttributeList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccAttributeList_block_1Context* CParser::gccAttributeList_block_1() {
  GccAttributeList_block_1Context *_localctx = _tracker.createInstance<GccAttributeList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 68, CParser::RuleGccAttributeList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    match(CParser::Comma);
    setState(619);
    pnf_option_gccAttributeList_22();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccAttributeSpecifierContext ------------------------------------------------------------------

CParser::GccAttributeSpecifierContext::GccAttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_gccAttributeSpecifier_15Context* CParser::GccAttributeSpecifierContext::pnf_option_gccAttributeSpecifier_15() {
  return getRuleContext<CParser::Pnf_option_gccAttributeSpecifier_15Context>(0);
}


size_t CParser::GccAttributeSpecifierContext::getRuleIndex() const {
  return CParser::RuleGccAttributeSpecifier;
}

void CParser::GccAttributeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttributeSpecifier(this);
}

void CParser::GccAttributeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttributeSpecifier(this);
}


antlrcpp::Any CParser::GccAttributeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccAttributeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccAttributeSpecifierContext* CParser::gccAttributeSpecifier() {
  GccAttributeSpecifierContext *_localctx = _tracker.createInstance<GccAttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 70, CParser::RuleGccAttributeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(621);
        match(CParser::T__7);
        setState(622);
        match(CParser::LeftParen);
        setState(623);
        match(CParser::LeftParen);
        setState(624);
        pnf_option_gccAttributeSpecifier_15();
        setState(625);
        match(CParser::RightParen);
        setState(626);
        match(CParser::RightParen);
        break;
      }

      case CParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(628);
        match(CParser::T__8);
        setState(629);
        match(CParser::LeftParen);
        setState(630);
        match(CParser::LeftParen);
        setState(631);
        pnf_option_gccAttributeSpecifier_15();
        setState(632);
        match(CParser::RightParen);
        setState(633);
        match(CParser::RightParen);
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

//----------------- GccAttribute_block_1Context ------------------------------------------------------------------

CParser::GccAttribute_block_1Context::GccAttribute_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_gccAttribute_block_1_36Context* CParser::GccAttribute_block_1Context::pnf_option_gccAttribute_block_1_36() {
  return getRuleContext<CParser::Pnf_option_gccAttribute_block_1_36Context>(0);
}


size_t CParser::GccAttribute_block_1Context::getRuleIndex() const {
  return CParser::RuleGccAttribute_block_1;
}

void CParser::GccAttribute_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccAttribute_block_1(this);
}

void CParser::GccAttribute_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccAttribute_block_1(this);
}


antlrcpp::Any CParser::GccAttribute_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccAttribute_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccAttribute_block_1Context* CParser::gccAttribute_block_1() {
  GccAttribute_block_1Context *_localctx = _tracker.createInstance<GccAttribute_block_1Context>(_ctx, getState());
  enterRule(_localctx, 72, CParser::RuleGccAttribute_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    match(CParser::LeftParen);
    setState(638);
    pnf_option_gccAttribute_block_1_36();
    setState(639);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GccDeclaratorExtensionContext ------------------------------------------------------------------

CParser::GccDeclaratorExtensionContext::GccDeclaratorExtensionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AsmNameContext* CParser::GccDeclaratorExtensionContext::asmName() {
  return getRuleContext<CParser::AsmNameContext>(0);
}

CParser::Pnf_plus_primaryExpression_40Context* CParser::GccDeclaratorExtensionContext::pnf_plus_primaryExpression_40() {
  return getRuleContext<CParser::Pnf_plus_primaryExpression_40Context>(0);
}

CParser::GccAttributeSpecifierContext* CParser::GccDeclaratorExtensionContext::gccAttributeSpecifier() {
  return getRuleContext<CParser::GccAttributeSpecifierContext>(0);
}


size_t CParser::GccDeclaratorExtensionContext::getRuleIndex() const {
  return CParser::RuleGccDeclaratorExtension;
}

void CParser::GccDeclaratorExtensionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGccDeclaratorExtension(this);
}

void CParser::GccDeclaratorExtensionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGccDeclaratorExtension(this);
}


antlrcpp::Any CParser::GccDeclaratorExtensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGccDeclaratorExtension(this);
  else
    return visitor->visitChildren(this);
}

CParser::GccDeclaratorExtensionContext* CParser::gccDeclaratorExtension() {
  GccDeclaratorExtensionContext *_localctx = _tracker.createInstance<GccDeclaratorExtensionContext>(_ctx, getState());
  enterRule(_localctx, 74, CParser::RuleGccDeclaratorExtension);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(647);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(641);
        asmName();
        setState(642);
        match(CParser::LeftParen);
        setState(643);
        pnf_plus_primaryExpression_40();
        setState(644);
        match(CParser::RightParen);
        break;
      }

      case CParser::T__7:
      case CParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(646);
        gccAttributeSpecifier();
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

//----------------- GenericAssocList_block_1Context ------------------------------------------------------------------

CParser::GenericAssocList_block_1Context::GenericAssocList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::GenericAssociationContext* CParser::GenericAssocList_block_1Context::genericAssociation() {
  return getRuleContext<CParser::GenericAssociationContext>(0);
}


size_t CParser::GenericAssocList_block_1Context::getRuleIndex() const {
  return CParser::RuleGenericAssocList_block_1;
}

void CParser::GenericAssocList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericAssocList_block_1(this);
}

void CParser::GenericAssocList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericAssocList_block_1(this);
}


antlrcpp::Any CParser::GenericAssocList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGenericAssocList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::GenericAssocList_block_1Context* CParser::genericAssocList_block_1() {
  GenericAssocList_block_1Context *_localctx = _tracker.createInstance<GenericAssocList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 76, CParser::RuleGenericAssocList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(649);
    match(CParser::Comma);
    setState(650);
    genericAssociation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericAssociationContext ------------------------------------------------------------------

CParser::GenericAssociationContext::GenericAssociationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::TypeNameContext* CParser::GenericAssociationContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

CParser::AssignmentExpressionContext* CParser::GenericAssociationContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}


size_t CParser::GenericAssociationContext::getRuleIndex() const {
  return CParser::RuleGenericAssociation;
}

void CParser::GenericAssociationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericAssociation(this);
}

void CParser::GenericAssociationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericAssociation(this);
}


antlrcpp::Any CParser::GenericAssociationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGenericAssociation(this);
  else
    return visitor->visitChildren(this);
}

CParser::GenericAssociationContext* CParser::genericAssociation() {
  GenericAssociationContext *_localctx = _tracker.createInstance<GenericAssociationContext>(_ctx, getState());
  enterRule(_localctx, 78, CParser::RuleGenericAssociation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(659);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::T__2:
      case CParser::T__7:
      case CParser::T__8:
      case CParser::T__9:
      case CParser::T__13:
      case CParser::T__14:
      case CParser::T__15:
      case CParser::T__16:
      case CParser::T__17:
      case CParser::T__18:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Struct:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Imaginary:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(652);
        typeName();
        setState(653);
        match(CParser::Colon);
        setState(654);
        assignmentExpression();
        break;
      }

      case CParser::Default: {
        enterOuterAlt(_localctx, 2);
        setState(656);
        match(CParser::Default);
        setState(657);
        match(CParser::Colon);
        setState(658);
        assignmentExpression();
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

//----------------- GenericSelectionContext ------------------------------------------------------------------

CParser::GenericSelectionContext::GenericSelectionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::GenericSelectionContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::Pnf_list_left_2Context* CParser::GenericSelectionContext::pnf_list_left_2() {
  return getRuleContext<CParser::Pnf_list_left_2Context>(0);
}


size_t CParser::GenericSelectionContext::getRuleIndex() const {
  return CParser::RuleGenericSelection;
}

void CParser::GenericSelectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericSelection(this);
}

void CParser::GenericSelectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericSelection(this);
}


antlrcpp::Any CParser::GenericSelectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitGenericSelection(this);
  else
    return visitor->visitChildren(this);
}

CParser::GenericSelectionContext* CParser::genericSelection() {
  GenericSelectionContext *_localctx = _tracker.createInstance<GenericSelectionContext>(_ctx, getState());
  enterRule(_localctx, 80, CParser::RuleGenericSelection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(661);
    match(CParser::Generic);
    setState(662);
    match(CParser::LeftParen);
    setState(663);
    assignmentExpression();
    setState(664);
    match(CParser::Comma);
    setState(665);
    pnf_list_left_2();
    setState(666);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierList_block_1Context ------------------------------------------------------------------

CParser::IdentifierList_block_1Context::IdentifierList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::IdentifierList_block_1Context::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::IdentifierList_block_1Context::getRuleIndex() const {
  return CParser::RuleIdentifierList_block_1;
}

void CParser::IdentifierList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList_block_1(this);
}

void CParser::IdentifierList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList_block_1(this);
}


antlrcpp::Any CParser::IdentifierList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitIdentifierList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::IdentifierList_block_1Context* CParser::identifierList_block_1() {
  IdentifierList_block_1Context *_localctx = _tracker.createInstance<IdentifierList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 82, CParser::RuleIdentifierList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(668);
    match(CParser::Comma);
    setState(669);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorContext ------------------------------------------------------------------

CParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::InitDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::Pnf_option_initDeclarator_17Context* CParser::InitDeclaratorContext::pnf_option_initDeclarator_17() {
  return getRuleContext<CParser::Pnf_option_initDeclarator_17Context>(0);
}


size_t CParser::InitDeclaratorContext::getRuleIndex() const {
  return CParser::RuleInitDeclarator;
}

void CParser::InitDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclarator(this);
}

void CParser::InitDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclarator(this);
}


antlrcpp::Any CParser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitDeclaratorContext* CParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 84, CParser::RuleInitDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    declarator();
    setState(672);
    pnf_option_initDeclarator_17();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorList_block_1Context ------------------------------------------------------------------

CParser::InitDeclaratorList_block_1Context::InitDeclaratorList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::InitDeclaratorContext* CParser::InitDeclaratorList_block_1Context::initDeclarator() {
  return getRuleContext<CParser::InitDeclaratorContext>(0);
}


size_t CParser::InitDeclaratorList_block_1Context::getRuleIndex() const {
  return CParser::RuleInitDeclaratorList_block_1;
}

void CParser::InitDeclaratorList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclaratorList_block_1(this);
}

void CParser::InitDeclaratorList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclaratorList_block_1(this);
}


antlrcpp::Any CParser::InitDeclaratorList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitDeclaratorList_block_1Context* CParser::initDeclaratorList_block_1() {
  InitDeclaratorList_block_1Context *_localctx = _tracker.createInstance<InitDeclaratorList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 86, CParser::RuleInitDeclaratorList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
    match(CParser::Comma);
    setState(675);
    initDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

CParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::InitializerContext::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::Pnf_option_initializer_82Context* CParser::InitializerContext::pnf_option_initializer_82() {
  return getRuleContext<CParser::Pnf_option_initializer_82Context>(0);
}


size_t CParser::InitializerContext::getRuleIndex() const {
  return CParser::RuleInitializer;
}

void CParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void CParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any CParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitializerContext* CParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 88, CParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(682);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__9:
      case CParser::T__10:
      case CParser::T__11:
      case CParser::T__19:
      case CParser::T__20:
      case CParser::Sizeof:
      case CParser::Alignof:
      case CParser::Generic:
      case CParser::LeftParen:
      case CParser::Plus:
      case CParser::PlusPlus:
      case CParser::Minus:
      case CParser::MinusMinus:
      case CParser::Star:
      case CParser::And:
      case CParser::AndAnd:
      case CParser::Not:
      case CParser::Tilde:
      case CParser::RealPart:
      case CParser::ImaginaryPart:
      case CParser::Identifier:
      case CParser::Constant:
      case CParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(677);
        assignmentExpression();
        break;
      }

      case CParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(678);
        match(CParser::LeftBrace);
        setState(679);
        pnf_option_initializer_82();
        setState(680);
        match(CParser::RightBrace);
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

//----------------- InitializerListContext ------------------------------------------------------------------

CParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_initializerList_block_1_38Context* CParser::InitializerListContext::pnf_option_initializerList_block_1_38() {
  return getRuleContext<CParser::Pnf_option_initializerList_block_1_38Context>(0);
}

CParser::InitializerContext* CParser::InitializerListContext::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}

CParser::Pnf_star_initializerList_80Context* CParser::InitializerListContext::pnf_star_initializerList_80() {
  return getRuleContext<CParser::Pnf_star_initializerList_80Context>(0);
}


size_t CParser::InitializerListContext::getRuleIndex() const {
  return CParser::RuleInitializerList;
}

void CParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void CParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}


antlrcpp::Any CParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitializerListContext* CParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 90, CParser::RuleInitializerList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(684);
    pnf_option_initializerList_block_1_38();
    setState(685);
    initializer();
    setState(686);
    pnf_star_initializerList_80();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerList_block_1Context ------------------------------------------------------------------

CParser::InitializerList_block_1Context::InitializerList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_initializerList_block_1_38Context* CParser::InitializerList_block_1Context::pnf_option_initializerList_block_1_38() {
  return getRuleContext<CParser::Pnf_option_initializerList_block_1_38Context>(0);
}

CParser::InitializerContext* CParser::InitializerList_block_1Context::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}


size_t CParser::InitializerList_block_1Context::getRuleIndex() const {
  return CParser::RuleInitializerList_block_1;
}

void CParser::InitializerList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList_block_1(this);
}

void CParser::InitializerList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList_block_1(this);
}


antlrcpp::Any CParser::InitializerList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializerList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::InitializerList_block_1Context* CParser::initializerList_block_1() {
  InitializerList_block_1Context *_localctx = _tracker.createInstance<InitializerList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 92, CParser::RuleInitializerList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(688);
    match(CParser::Comma);
    setState(689);
    pnf_option_initializerList_block_1_38();
    setState(690);
    initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_block_1Context ------------------------------------------------------------------

CParser::Initializer_block_1Context::Initializer_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::InitializerListContext* CParser::Initializer_block_1Context::initializerList() {
  return getRuleContext<CParser::InitializerListContext>(0);
}

CParser::Pnf_option_initializer_block_1_81Context* CParser::Initializer_block_1Context::pnf_option_initializer_block_1_81() {
  return getRuleContext<CParser::Pnf_option_initializer_block_1_81Context>(0);
}


size_t CParser::Initializer_block_1Context::getRuleIndex() const {
  return CParser::RuleInitializer_block_1;
}

void CParser::Initializer_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_block_1(this);
}

void CParser::Initializer_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_block_1(this);
}


antlrcpp::Any CParser::Initializer_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitInitializer_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::Initializer_block_1Context* CParser::initializer_block_1() {
  Initializer_block_1Context *_localctx = _tracker.createInstance<Initializer_block_1Context>(_ctx, getState());
  enterRule(_localctx, 94, CParser::RuleInitializer_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(692);
    initializerList();
    setState(693);
    pnf_option_initializer_block_1_81();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

CParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::JumpStatementContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::Pnf_option_conditionalExpression_block_1_34Context* CParser::JumpStatementContext::pnf_option_conditionalExpression_block_1_34() {
  return getRuleContext<CParser::Pnf_option_conditionalExpression_block_1_34Context>(0);
}

CParser::UnaryExpressionContext* CParser::JumpStatementContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}


size_t CParser::JumpStatementContext::getRuleIndex() const {
  return CParser::RuleJumpStatement;
}

void CParser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void CParser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}


antlrcpp::Any CParser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::JumpStatementContext* CParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, CParser::RuleJumpStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(710);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(695);
      match(CParser::Goto);
      setState(696);
      match(CParser::Identifier);
      setState(697);
      match(CParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(698);
      match(CParser::Continue);
      setState(699);
      match(CParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(700);
      match(CParser::Break);
      setState(701);
      match(CParser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(702);
      match(CParser::Return);
      setState(703);
      pnf_option_conditionalExpression_block_1_34();
      setState(704);
      match(CParser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(706);
      match(CParser::Goto);
      setState(707);
      unaryExpression();
      setState(708);
      match(CParser::Semi);
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

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

CParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::CastExpressionContext* CParser::MultiplicativeExpressionContext::castExpression() {
  return getRuleContext<CParser::CastExpressionContext>(0);
}

CParser::Pnf_star_multiplicativeExpression_48Context* CParser::MultiplicativeExpressionContext::pnf_star_multiplicativeExpression_48() {
  return getRuleContext<CParser::Pnf_star_multiplicativeExpression_48Context>(0);
}


size_t CParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return CParser::RuleMultiplicativeExpression;
}

void CParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void CParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


antlrcpp::Any CParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::MultiplicativeExpressionContext* CParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 98, CParser::RuleMultiplicativeExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    castExpression();
    setState(713);
    pnf_star_multiplicativeExpression_48();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

CParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::ParameterDeclarationContext::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}

CParser::DeclaratorContext* CParser::ParameterDeclarationContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::Pnf_plus_declarationSpecifiers2_76Context* CParser::ParameterDeclarationContext::pnf_plus_declarationSpecifiers2_76() {
  return getRuleContext<CParser::Pnf_plus_declarationSpecifiers2_76Context>(0);
}

CParser::Pnf_option_typeName_43Context* CParser::ParameterDeclarationContext::pnf_option_typeName_43() {
  return getRuleContext<CParser::Pnf_option_typeName_43Context>(0);
}


size_t CParser::ParameterDeclarationContext::getRuleIndex() const {
  return CParser::RuleParameterDeclaration;
}

void CParser::ParameterDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclaration(this);
}

void CParser::ParameterDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclaration(this);
}


antlrcpp::Any CParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterDeclarationContext* CParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 100, CParser::RuleParameterDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(721);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(715);
      declarationSpecifiers();
      setState(716);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(718);
      pnf_plus_declarationSpecifiers2_76();
      setState(719);
      pnf_option_typeName_43();
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

//----------------- ParameterList_block_1Context ------------------------------------------------------------------

CParser::ParameterList_block_1Context::ParameterList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ParameterDeclarationContext* CParser::ParameterList_block_1Context::parameterDeclaration() {
  return getRuleContext<CParser::ParameterDeclarationContext>(0);
}


size_t CParser::ParameterList_block_1Context::getRuleIndex() const {
  return CParser::RuleParameterList_block_1;
}

void CParser::ParameterList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList_block_1(this);
}

void CParser::ParameterList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList_block_1(this);
}


antlrcpp::Any CParser::ParameterList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterList_block_1Context* CParser::parameterList_block_1() {
  ParameterList_block_1Context *_localctx = _tracker.createInstance<ParameterList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 102, CParser::RuleParameterList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(723);
    match(CParser::Comma);
    setState(724);
    parameterDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterTypeListContext ------------------------------------------------------------------

CParser::ParameterTypeListContext::ParameterTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_13Context* CParser::ParameterTypeListContext::pnf_list_left_13() {
  return getRuleContext<CParser::Pnf_list_left_13Context>(0);
}

CParser::Pnf_option_parameterTypeList_25Context* CParser::ParameterTypeListContext::pnf_option_parameterTypeList_25() {
  return getRuleContext<CParser::Pnf_option_parameterTypeList_25Context>(0);
}


size_t CParser::ParameterTypeListContext::getRuleIndex() const {
  return CParser::RuleParameterTypeList;
}

void CParser::ParameterTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterTypeList(this);
}

void CParser::ParameterTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterTypeList(this);
}


antlrcpp::Any CParser::ParameterTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitParameterTypeList(this);
  else
    return visitor->visitChildren(this);
}

CParser::ParameterTypeListContext* CParser::parameterTypeList() {
  ParameterTypeListContext *_localctx = _tracker.createInstance<ParameterTypeListContext>(_ctx, getState());
  enterRule(_localctx, 104, CParser::RuleParameterTypeList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(726);
    pnf_list_left_13();
    setState(727);
    pnf_option_parameterTypeList_25();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_0Context ------------------------------------------------------------------

CParser::Pnf_list_left_0Context::Pnf_list_left_0Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::Pnf_list_left_0Context::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::Pnf_star_identifierList_37Context* CParser::Pnf_list_left_0Context::pnf_star_identifierList_37() {
  return getRuleContext<CParser::Pnf_star_identifierList_37Context>(0);
}


size_t CParser::Pnf_list_left_0Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_0;
}

void CParser::Pnf_list_left_0Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_0(this);
}

void CParser::Pnf_list_left_0Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_0(this);
}


antlrcpp::Any CParser::Pnf_list_left_0Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_0(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_0Context* CParser::pnf_list_left_0() {
  Pnf_list_left_0Context *_localctx = _tracker.createInstance<Pnf_list_left_0Context>(_ctx, getState());
  enterRule(_localctx, 106, CParser::RulePnf_list_left_0);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(729);
    match(CParser::Identifier);
    setState(730);
    pnf_star_identifierList_37();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_1Context ------------------------------------------------------------------

CParser::Pnf_list_left_1Context::Pnf_list_left_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_7Context* CParser::Pnf_list_left_1Context::pnf_list_left_7() {
  return getRuleContext<CParser::Pnf_list_left_7Context>(0);
}

CParser::Pnf_star_logicalOrExpression_57Context* CParser::Pnf_list_left_1Context::pnf_star_logicalOrExpression_57() {
  return getRuleContext<CParser::Pnf_star_logicalOrExpression_57Context>(0);
}


size_t CParser::Pnf_list_left_1Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_1;
}

void CParser::Pnf_list_left_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_1(this);
}

void CParser::Pnf_list_left_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_1(this);
}


antlrcpp::Any CParser::Pnf_list_left_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_1Context* CParser::pnf_list_left_1() {
  Pnf_list_left_1Context *_localctx = _tracker.createInstance<Pnf_list_left_1Context>(_ctx, getState());
  enterRule(_localctx, 108, CParser::RulePnf_list_left_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    pnf_list_left_7();
    setState(733);
    pnf_star_logicalOrExpression_57();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_10Context ------------------------------------------------------------------

CParser::Pnf_list_left_10Context::Pnf_list_left_10Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::StructDeclaratorContext* CParser::Pnf_list_left_10Context::structDeclarator() {
  return getRuleContext<CParser::StructDeclaratorContext>(0);
}

CParser::Pnf_star_structDeclaratorList_67Context* CParser::Pnf_list_left_10Context::pnf_star_structDeclaratorList_67() {
  return getRuleContext<CParser::Pnf_star_structDeclaratorList_67Context>(0);
}


size_t CParser::Pnf_list_left_10Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_10;
}

void CParser::Pnf_list_left_10Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_10(this);
}

void CParser::Pnf_list_left_10Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_10(this);
}


antlrcpp::Any CParser::Pnf_list_left_10Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_10(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_10Context* CParser::pnf_list_left_10() {
  Pnf_list_left_10Context *_localctx = _tracker.createInstance<Pnf_list_left_10Context>(_ctx, getState());
  enterRule(_localctx, 110, CParser::RulePnf_list_left_10);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(735);
    structDeclarator();
    setState(736);
    pnf_star_structDeclaratorList_67();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_11Context ------------------------------------------------------------------

CParser::Pnf_list_left_11Context::Pnf_list_left_11Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::EnumeratorContext* CParser::Pnf_list_left_11Context::enumerator() {
  return getRuleContext<CParser::EnumeratorContext>(0);
}

CParser::Pnf_star_enumeratorList_68Context* CParser::Pnf_list_left_11Context::pnf_star_enumeratorList_68() {
  return getRuleContext<CParser::Pnf_star_enumeratorList_68Context>(0);
}


size_t CParser::Pnf_list_left_11Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_11;
}

void CParser::Pnf_list_left_11Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_11(this);
}

void CParser::Pnf_list_left_11Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_11(this);
}


antlrcpp::Any CParser::Pnf_list_left_11Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_11(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_11Context* CParser::pnf_list_left_11() {
  Pnf_list_left_11Context *_localctx = _tracker.createInstance<Pnf_list_left_11Context>(_ctx, getState());
  enterRule(_localctx, 112, CParser::RulePnf_list_left_11);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(738);
    enumerator();
    setState(739);
    pnf_star_enumeratorList_68();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_12Context ------------------------------------------------------------------

CParser::Pnf_list_left_12Context::Pnf_list_left_12Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_gccAttributeList_22Context* CParser::Pnf_list_left_12Context::pnf_option_gccAttributeList_22() {
  return getRuleContext<CParser::Pnf_option_gccAttributeList_22Context>(0);
}

CParser::Pnf_star_gccAttributeList_74Context* CParser::Pnf_list_left_12Context::pnf_star_gccAttributeList_74() {
  return getRuleContext<CParser::Pnf_star_gccAttributeList_74Context>(0);
}


size_t CParser::Pnf_list_left_12Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_12;
}

void CParser::Pnf_list_left_12Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_12(this);
}

void CParser::Pnf_list_left_12Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_12(this);
}


antlrcpp::Any CParser::Pnf_list_left_12Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_12(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_12Context* CParser::pnf_list_left_12() {
  Pnf_list_left_12Context *_localctx = _tracker.createInstance<Pnf_list_left_12Context>(_ctx, getState());
  enterRule(_localctx, 114, CParser::RulePnf_list_left_12);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(741);
    pnf_option_gccAttributeList_22();
    setState(742);
    pnf_star_gccAttributeList_74();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_13Context ------------------------------------------------------------------

CParser::Pnf_list_left_13Context::Pnf_list_left_13Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ParameterDeclarationContext* CParser::Pnf_list_left_13Context::parameterDeclaration() {
  return getRuleContext<CParser::ParameterDeclarationContext>(0);
}

CParser::Pnf_star_parameterList_77Context* CParser::Pnf_list_left_13Context::pnf_star_parameterList_77() {
  return getRuleContext<CParser::Pnf_star_parameterList_77Context>(0);
}


size_t CParser::Pnf_list_left_13Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_13;
}

void CParser::Pnf_list_left_13Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_13(this);
}

void CParser::Pnf_list_left_13Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_13(this);
}


antlrcpp::Any CParser::Pnf_list_left_13Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_13(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_13Context* CParser::pnf_list_left_13() {
  Pnf_list_left_13Context *_localctx = _tracker.createInstance<Pnf_list_left_13Context>(_ctx, getState());
  enterRule(_localctx, 116, CParser::RulePnf_list_left_13);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(744);
    parameterDeclaration();
    setState(745);
    pnf_star_parameterList_77();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_14Context ------------------------------------------------------------------

CParser::Pnf_list_left_14Context::Pnf_list_left_14Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_1Context* CParser::Pnf_list_left_14Context::pnf_list_left_1() {
  return getRuleContext<CParser::Pnf_list_left_1Context>(0);
}

CParser::Pnf_star_statement_block_3_85Context* CParser::Pnf_list_left_14Context::pnf_star_statement_block_3_85() {
  return getRuleContext<CParser::Pnf_star_statement_block_3_85Context>(0);
}


size_t CParser::Pnf_list_left_14Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_14;
}

void CParser::Pnf_list_left_14Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_14(this);
}

void CParser::Pnf_list_left_14Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_14(this);
}


antlrcpp::Any CParser::Pnf_list_left_14Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_14(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_14Context* CParser::pnf_list_left_14() {
  Pnf_list_left_14Context *_localctx = _tracker.createInstance<Pnf_list_left_14Context>(_ctx, getState());
  enterRule(_localctx, 118, CParser::RulePnf_list_left_14);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    pnf_list_left_1();
    setState(748);
    pnf_star_statement_block_3_85();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_15Context ------------------------------------------------------------------

CParser::Pnf_list_left_15Context::Pnf_list_left_15Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_1Context* CParser::Pnf_list_left_15Context::pnf_list_left_1() {
  return getRuleContext<CParser::Pnf_list_left_1Context>(0);
}

CParser::Pnf_star_statement_block_5_86Context* CParser::Pnf_list_left_15Context::pnf_star_statement_block_5_86() {
  return getRuleContext<CParser::Pnf_star_statement_block_5_86Context>(0);
}


size_t CParser::Pnf_list_left_15Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_15;
}

void CParser::Pnf_list_left_15Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_15(this);
}

void CParser::Pnf_list_left_15Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_15(this);
}


antlrcpp::Any CParser::Pnf_list_left_15Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_15(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_15Context* CParser::pnf_list_left_15() {
  Pnf_list_left_15Context *_localctx = _tracker.createInstance<Pnf_list_left_15Context>(_ctx, getState());
  enterRule(_localctx, 120, CParser::RulePnf_list_left_15);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    pnf_list_left_1();
    setState(751);
    pnf_star_statement_block_5_86();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_2Context ------------------------------------------------------------------

CParser::Pnf_list_left_2Context::Pnf_list_left_2Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::GenericAssociationContext* CParser::Pnf_list_left_2Context::genericAssociation() {
  return getRuleContext<CParser::GenericAssociationContext>(0);
}

CParser::Pnf_star_genericAssocList_44Context* CParser::Pnf_list_left_2Context::pnf_star_genericAssocList_44() {
  return getRuleContext<CParser::Pnf_star_genericAssocList_44Context>(0);
}


size_t CParser::Pnf_list_left_2Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_2;
}

void CParser::Pnf_list_left_2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_2(this);
}

void CParser::Pnf_list_left_2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_2(this);
}


antlrcpp::Any CParser::Pnf_list_left_2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_2(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_2Context* CParser::pnf_list_left_2() {
  Pnf_list_left_2Context *_localctx = _tracker.createInstance<Pnf_list_left_2Context>(_ctx, getState());
  enterRule(_localctx, 122, CParser::RulePnf_list_left_2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(753);
    genericAssociation();
    setState(754);
    pnf_star_genericAssocList_44();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_3Context ------------------------------------------------------------------

CParser::Pnf_list_left_3Context::Pnf_list_left_3Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::Pnf_list_left_3Context::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::Pnf_star_argumentExpressionList_47Context* CParser::Pnf_list_left_3Context::pnf_star_argumentExpressionList_47() {
  return getRuleContext<CParser::Pnf_star_argumentExpressionList_47Context>(0);
}


size_t CParser::Pnf_list_left_3Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_3;
}

void CParser::Pnf_list_left_3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_3(this);
}

void CParser::Pnf_list_left_3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_3(this);
}


antlrcpp::Any CParser::Pnf_list_left_3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_3(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_3Context* CParser::pnf_list_left_3() {
  Pnf_list_left_3Context *_localctx = _tracker.createInstance<Pnf_list_left_3Context>(_ctx, getState());
  enterRule(_localctx, 124, CParser::RulePnf_list_left_3);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(756);
    assignmentExpression();
    setState(757);
    pnf_star_argumentExpressionList_47();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_4Context ------------------------------------------------------------------

CParser::Pnf_list_left_4Context::Pnf_list_left_4Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::EqualityExpressionContext* CParser::Pnf_list_left_4Context::equalityExpression() {
  return getRuleContext<CParser::EqualityExpressionContext>(0);
}

CParser::Pnf_star_andExpression_53Context* CParser::Pnf_list_left_4Context::pnf_star_andExpression_53() {
  return getRuleContext<CParser::Pnf_star_andExpression_53Context>(0);
}


size_t CParser::Pnf_list_left_4Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_4;
}

void CParser::Pnf_list_left_4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_4(this);
}

void CParser::Pnf_list_left_4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_4(this);
}


antlrcpp::Any CParser::Pnf_list_left_4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_4(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_4Context* CParser::pnf_list_left_4() {
  Pnf_list_left_4Context *_localctx = _tracker.createInstance<Pnf_list_left_4Context>(_ctx, getState());
  enterRule(_localctx, 126, CParser::RulePnf_list_left_4);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(759);
    equalityExpression();
    setState(760);
    pnf_star_andExpression_53();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_5Context ------------------------------------------------------------------

CParser::Pnf_list_left_5Context::Pnf_list_left_5Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_4Context* CParser::Pnf_list_left_5Context::pnf_list_left_4() {
  return getRuleContext<CParser::Pnf_list_left_4Context>(0);
}

CParser::Pnf_star_exclusiveOrExpression_54Context* CParser::Pnf_list_left_5Context::pnf_star_exclusiveOrExpression_54() {
  return getRuleContext<CParser::Pnf_star_exclusiveOrExpression_54Context>(0);
}


size_t CParser::Pnf_list_left_5Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_5;
}

void CParser::Pnf_list_left_5Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_5(this);
}

void CParser::Pnf_list_left_5Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_5(this);
}


antlrcpp::Any CParser::Pnf_list_left_5Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_5(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_5Context* CParser::pnf_list_left_5() {
  Pnf_list_left_5Context *_localctx = _tracker.createInstance<Pnf_list_left_5Context>(_ctx, getState());
  enterRule(_localctx, 128, CParser::RulePnf_list_left_5);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(762);
    pnf_list_left_4();
    setState(763);
    pnf_star_exclusiveOrExpression_54();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_6Context ------------------------------------------------------------------

CParser::Pnf_list_left_6Context::Pnf_list_left_6Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_5Context* CParser::Pnf_list_left_6Context::pnf_list_left_5() {
  return getRuleContext<CParser::Pnf_list_left_5Context>(0);
}

CParser::Pnf_star_inclusiveOrExpression_55Context* CParser::Pnf_list_left_6Context::pnf_star_inclusiveOrExpression_55() {
  return getRuleContext<CParser::Pnf_star_inclusiveOrExpression_55Context>(0);
}


size_t CParser::Pnf_list_left_6Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_6;
}

void CParser::Pnf_list_left_6Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_6(this);
}

void CParser::Pnf_list_left_6Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_6(this);
}


antlrcpp::Any CParser::Pnf_list_left_6Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_6(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_6Context* CParser::pnf_list_left_6() {
  Pnf_list_left_6Context *_localctx = _tracker.createInstance<Pnf_list_left_6Context>(_ctx, getState());
  enterRule(_localctx, 130, CParser::RulePnf_list_left_6);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(765);
    pnf_list_left_5();
    setState(766);
    pnf_star_inclusiveOrExpression_55();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_7Context ------------------------------------------------------------------

CParser::Pnf_list_left_7Context::Pnf_list_left_7Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_6Context* CParser::Pnf_list_left_7Context::pnf_list_left_6() {
  return getRuleContext<CParser::Pnf_list_left_6Context>(0);
}

CParser::Pnf_star_logicalAndExpression_56Context* CParser::Pnf_list_left_7Context::pnf_star_logicalAndExpression_56() {
  return getRuleContext<CParser::Pnf_star_logicalAndExpression_56Context>(0);
}


size_t CParser::Pnf_list_left_7Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_7;
}

void CParser::Pnf_list_left_7Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_7(this);
}

void CParser::Pnf_list_left_7Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_7(this);
}


antlrcpp::Any CParser::Pnf_list_left_7Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_7(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_7Context* CParser::pnf_list_left_7() {
  Pnf_list_left_7Context *_localctx = _tracker.createInstance<Pnf_list_left_7Context>(_ctx, getState());
  enterRule(_localctx, 132, CParser::RulePnf_list_left_7);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(768);
    pnf_list_left_6();
    setState(769);
    pnf_star_logicalAndExpression_56();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_8Context ------------------------------------------------------------------

CParser::Pnf_list_left_8Context::Pnf_list_left_8Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::Pnf_list_left_8Context::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::Pnf_star_expression_58Context* CParser::Pnf_list_left_8Context::pnf_star_expression_58() {
  return getRuleContext<CParser::Pnf_star_expression_58Context>(0);
}


size_t CParser::Pnf_list_left_8Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_8;
}

void CParser::Pnf_list_left_8Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_8(this);
}

void CParser::Pnf_list_left_8Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_8(this);
}


antlrcpp::Any CParser::Pnf_list_left_8Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_8(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_8Context* CParser::pnf_list_left_8() {
  Pnf_list_left_8Context *_localctx = _tracker.createInstance<Pnf_list_left_8Context>(_ctx, getState());
  enterRule(_localctx, 134, CParser::RulePnf_list_left_8);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(771);
    assignmentExpression();
    setState(772);
    pnf_star_expression_58();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_list_left_9Context ------------------------------------------------------------------

CParser::Pnf_list_left_9Context::Pnf_list_left_9Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::InitDeclaratorContext* CParser::Pnf_list_left_9Context::initDeclarator() {
  return getRuleContext<CParser::InitDeclaratorContext>(0);
}

CParser::Pnf_star_initDeclaratorList_64Context* CParser::Pnf_list_left_9Context::pnf_star_initDeclaratorList_64() {
  return getRuleContext<CParser::Pnf_star_initDeclaratorList_64Context>(0);
}


size_t CParser::Pnf_list_left_9Context::getRuleIndex() const {
  return CParser::RulePnf_list_left_9;
}

void CParser::Pnf_list_left_9Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_list_left_9(this);
}

void CParser::Pnf_list_left_9Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_list_left_9(this);
}


antlrcpp::Any CParser::Pnf_list_left_9Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_list_left_9(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_list_left_9Context* CParser::pnf_list_left_9() {
  Pnf_list_left_9Context *_localctx = _tracker.createInstance<Pnf_list_left_9Context>(_ctx, getState());
  enterRule(_localctx, 136, CParser::RulePnf_list_left_9);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(774);
    initDeclarator();
    setState(775);
    pnf_star_initDeclaratorList_64();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_compilationUnit_98Context ------------------------------------------------------------------

CParser::Pnf_option_compilationUnit_98Context::Pnf_option_compilationUnit_98Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_plus_translationUnit_32Context* CParser::Pnf_option_compilationUnit_98Context::pnf_plus_translationUnit_32() {
  return getRuleContext<CParser::Pnf_plus_translationUnit_32Context>(0);
}


size_t CParser::Pnf_option_compilationUnit_98Context::getRuleIndex() const {
  return CParser::RulePnf_option_compilationUnit_98;
}

void CParser::Pnf_option_compilationUnit_98Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_compilationUnit_98(this);
}

void CParser::Pnf_option_compilationUnit_98Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_compilationUnit_98(this);
}


antlrcpp::Any CParser::Pnf_option_compilationUnit_98Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_compilationUnit_98(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_compilationUnit_98Context* CParser::pnf_option_compilationUnit_98() {
  Pnf_option_compilationUnit_98Context *_localctx = _tracker.createInstance<Pnf_option_compilationUnit_98Context>(_ctx, getState());
  enterRule(_localctx, 138, CParser::RulePnf_option_compilationUnit_98);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(778);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::StaticAssert - 64))
      | (1ULL << (CParser::ThreadLocal - 64))
      | (1ULL << (CParser::LeftParen - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::IncludeDirective - 64))
      | (1ULL << (CParser::PragmaDirective - 64)))) != 0)) {
      setState(777);
      pnf_plus_translationUnit_32();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_compoundStatement_87Context ------------------------------------------------------------------

CParser::Pnf_option_compoundStatement_87Context::Pnf_option_compoundStatement_87Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_plus_blockItemList_29Context* CParser::Pnf_option_compoundStatement_87Context::pnf_plus_blockItemList_29() {
  return getRuleContext<CParser::Pnf_plus_blockItemList_29Context>(0);
}


size_t CParser::Pnf_option_compoundStatement_87Context::getRuleIndex() const {
  return CParser::RulePnf_option_compoundStatement_87;
}

void CParser::Pnf_option_compoundStatement_87Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_compoundStatement_87(this);
}

void CParser::Pnf_option_compoundStatement_87Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_compoundStatement_87(this);
}


antlrcpp::Any CParser::Pnf_option_compoundStatement_87Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_compoundStatement_87(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_compoundStatement_87Context* CParser::pnf_option_compoundStatement_87() {
  Pnf_option_compoundStatement_87Context *_localctx = _tracker.createInstance<Pnf_option_compoundStatement_87Context>(_ctx, getState());
  enterRule(_localctx, 140, CParser::RulePnf_option_compoundStatement_87);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(781);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::StaticAssert - 64))
      | (1ULL << (CParser::ThreadLocal - 64))
      | (1ULL << (CParser::LeftParen - 64))
      | (1ULL << (CParser::LeftBrace - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::MinusMinus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::AndAnd - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Not - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::RealPart - 64))
      | (1ULL << (CParser::ImaginaryPart - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::Constant - 64))
      | (1ULL << (CParser::StringLiteral - 64)))) != 0)) {
      setState(780);
      pnf_plus_blockItemList_29();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_conditionalExpression_46Context ------------------------------------------------------------------

CParser::Pnf_option_conditionalExpression_46Context::Pnf_option_conditionalExpression_46Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ConditionalExpression_block_1Context* CParser::Pnf_option_conditionalExpression_46Context::conditionalExpression_block_1() {
  return getRuleContext<CParser::ConditionalExpression_block_1Context>(0);
}


size_t CParser::Pnf_option_conditionalExpression_46Context::getRuleIndex() const {
  return CParser::RulePnf_option_conditionalExpression_46;
}

void CParser::Pnf_option_conditionalExpression_46Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_conditionalExpression_46(this);
}

void CParser::Pnf_option_conditionalExpression_46Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_conditionalExpression_46(this);
}


antlrcpp::Any CParser::Pnf_option_conditionalExpression_46Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_conditionalExpression_46(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_conditionalExpression_46Context* CParser::pnf_option_conditionalExpression_46() {
  Pnf_option_conditionalExpression_46Context *_localctx = _tracker.createInstance<Pnf_option_conditionalExpression_46Context>(_ctx, getState());
  enterRule(_localctx, 142, CParser::RulePnf_option_conditionalExpression_46);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(783);
      conditionalExpression_block_1();
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

//----------------- Pnf_option_conditionalExpression_block_1_34Context ------------------------------------------------------------------

CParser::Pnf_option_conditionalExpression_block_1_34Context::Pnf_option_conditionalExpression_block_1_34Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_8Context* CParser::Pnf_option_conditionalExpression_block_1_34Context::pnf_list_left_8() {
  return getRuleContext<CParser::Pnf_list_left_8Context>(0);
}


size_t CParser::Pnf_option_conditionalExpression_block_1_34Context::getRuleIndex() const {
  return CParser::RulePnf_option_conditionalExpression_block_1_34;
}

void CParser::Pnf_option_conditionalExpression_block_1_34Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_conditionalExpression_block_1_34(this);
}

void CParser::Pnf_option_conditionalExpression_block_1_34Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_conditionalExpression_block_1_34(this);
}


antlrcpp::Any CParser::Pnf_option_conditionalExpression_block_1_34Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_conditionalExpression_block_1_34(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_conditionalExpression_block_1_34Context* CParser::pnf_option_conditionalExpression_block_1_34() {
  Pnf_option_conditionalExpression_block_1_34Context *_localctx = _tracker.createInstance<Pnf_option_conditionalExpression_block_1_34Context>(_ctx, getState());
  enterRule(_localctx, 144, CParser::RulePnf_option_conditionalExpression_block_1_34);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(787);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Plus - 66))
      | (1ULL << (CParser::PlusPlus - 66))
      | (1ULL << (CParser::Minus - 66))
      | (1ULL << (CParser::MinusMinus - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::And - 66))
      | (1ULL << (CParser::AndAnd - 66))
      | (1ULL << (CParser::Not - 66))
      | (1ULL << (CParser::Tilde - 66))
      | (1ULL << (CParser::RealPart - 66))
      | (1ULL << (CParser::ImaginaryPart - 66))
      | (1ULL << (CParser::Identifier - 66))
      | (1ULL << (CParser::Constant - 66))
      | (1ULL << (CParser::StringLiteral - 66)))) != 0)) {
      setState(786);
      pnf_list_left_8();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_declaration_14Context ------------------------------------------------------------------

CParser::Pnf_option_declaration_14Context::Pnf_option_declaration_14Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_9Context* CParser::Pnf_option_declaration_14Context::pnf_list_left_9() {
  return getRuleContext<CParser::Pnf_list_left_9Context>(0);
}


size_t CParser::Pnf_option_declaration_14Context::getRuleIndex() const {
  return CParser::RulePnf_option_declaration_14;
}

void CParser::Pnf_option_declaration_14Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_declaration_14(this);
}

void CParser::Pnf_option_declaration_14Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_declaration_14(this);
}


antlrcpp::Any CParser::Pnf_option_declaration_14Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_declaration_14(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_declaration_14Context* CParser::pnf_option_declaration_14() {
  Pnf_option_declaration_14Context *_localctx = _tracker.createInstance<Pnf_option_declaration_14Context>(_ctx, getState());
  enterRule(_localctx, 146, CParser::RulePnf_option_declaration_14);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::Caret - 66))
      | (1ULL << (CParser::Identifier - 66)))) != 0)) {
      setState(789);
      pnf_list_left_9();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_designator_83Context ------------------------------------------------------------------

CParser::Pnf_option_designator_83Context::Pnf_option_designator_83Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Designator_block_1Context* CParser::Pnf_option_designator_83Context::designator_block_1() {
  return getRuleContext<CParser::Designator_block_1Context>(0);
}


size_t CParser::Pnf_option_designator_83Context::getRuleIndex() const {
  return CParser::RulePnf_option_designator_83;
}

void CParser::Pnf_option_designator_83Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_designator_83(this);
}

void CParser::Pnf_option_designator_83Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_designator_83(this);
}


antlrcpp::Any CParser::Pnf_option_designator_83Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_designator_83(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_designator_83Context* CParser::pnf_option_designator_83() {
  Pnf_option_designator_83Context *_localctx = _tracker.createInstance<Pnf_option_designator_83Context>(_ctx, getState());
  enterRule(_localctx, 148, CParser::RulePnf_option_designator_83);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(793);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Ellipsis) {
      setState(792);
      designator_block_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_directAbstractDeclarator_79Context ------------------------------------------------------------------

CParser::Pnf_option_directAbstractDeclarator_79Context::Pnf_option_directAbstractDeclarator_79Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ParameterTypeListContext* CParser::Pnf_option_directAbstractDeclarator_79Context::parameterTypeList() {
  return getRuleContext<CParser::ParameterTypeListContext>(0);
}


size_t CParser::Pnf_option_directAbstractDeclarator_79Context::getRuleIndex() const {
  return CParser::RulePnf_option_directAbstractDeclarator_79;
}

void CParser::Pnf_option_directAbstractDeclarator_79Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_directAbstractDeclarator_79(this);
}

void CParser::Pnf_option_directAbstractDeclarator_79Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_directAbstractDeclarator_79(this);
}


antlrcpp::Any CParser::Pnf_option_directAbstractDeclarator_79Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_directAbstractDeclarator_79(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_directAbstractDeclarator_79Context* CParser::pnf_option_directAbstractDeclarator_79() {
  Pnf_option_directAbstractDeclarator_79Context *_localctx = _tracker.createInstance<Pnf_option_directAbstractDeclarator_79Context>(_ctx, getState());
  enterRule(_localctx, 150, CParser::RulePnf_option_directAbstractDeclarator_79);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(796);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || _la == CParser::ThreadLocal

    || _la == CParser::Identifier) {
      setState(795);
      parameterTypeList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_enumerator_20Context ------------------------------------------------------------------

CParser::Pnf_option_enumerator_20Context::Pnf_option_enumerator_20Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_part_enumerator_19Context* CParser::Pnf_option_enumerator_20Context::pnf_part_enumerator_19() {
  return getRuleContext<CParser::Pnf_part_enumerator_19Context>(0);
}


size_t CParser::Pnf_option_enumerator_20Context::getRuleIndex() const {
  return CParser::RulePnf_option_enumerator_20;
}

void CParser::Pnf_option_enumerator_20Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_enumerator_20(this);
}

void CParser::Pnf_option_enumerator_20Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_enumerator_20(this);
}


antlrcpp::Any CParser::Pnf_option_enumerator_20Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_enumerator_20(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_enumerator_20Context* CParser::pnf_option_enumerator_20() {
  Pnf_option_enumerator_20Context *_localctx = _tracker.createInstance<Pnf_option_enumerator_20Context>(_ctx, getState());
  enterRule(_localctx, 152, CParser::RulePnf_option_enumerator_20);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(799);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Assign) {
      setState(798);
      pnf_part_enumerator_19();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_externalDeclaration_31Context ------------------------------------------------------------------

CParser::Pnf_option_externalDeclaration_31Context::Pnf_option_externalDeclaration_31Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_part_externalDeclaration_30Context* CParser::Pnf_option_externalDeclaration_31Context::pnf_part_externalDeclaration_30() {
  return getRuleContext<CParser::Pnf_part_externalDeclaration_30Context>(0);
}


size_t CParser::Pnf_option_externalDeclaration_31Context::getRuleIndex() const {
  return CParser::RulePnf_option_externalDeclaration_31;
}

void CParser::Pnf_option_externalDeclaration_31Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_externalDeclaration_31(this);
}

void CParser::Pnf_option_externalDeclaration_31Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_externalDeclaration_31(this);
}


antlrcpp::Any CParser::Pnf_option_externalDeclaration_31Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_externalDeclaration_31(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_externalDeclaration_31Context* CParser::pnf_option_externalDeclaration_31() {
  Pnf_option_externalDeclaration_31Context *_localctx = _tracker.createInstance<Pnf_option_externalDeclaration_31Context>(_ctx, getState());
  enterRule(_localctx, 154, CParser::RulePnf_option_externalDeclaration_31);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(802);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2))) != 0)) {
      setState(801);
      pnf_part_externalDeclaration_30();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_functionDefinition_93Context ------------------------------------------------------------------

CParser::Pnf_option_functionDefinition_93Context::Pnf_option_functionDefinition_93Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DeclarationSpecifiersContext* CParser::Pnf_option_functionDefinition_93Context::declarationSpecifiers() {
  return getRuleContext<CParser::DeclarationSpecifiersContext>(0);
}


size_t CParser::Pnf_option_functionDefinition_93Context::getRuleIndex() const {
  return CParser::RulePnf_option_functionDefinition_93;
}

void CParser::Pnf_option_functionDefinition_93Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_functionDefinition_93(this);
}

void CParser::Pnf_option_functionDefinition_93Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_functionDefinition_93(this);
}


antlrcpp::Any CParser::Pnf_option_functionDefinition_93Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_functionDefinition_93(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_functionDefinition_93Context* CParser::pnf_option_functionDefinition_93() {
  Pnf_option_functionDefinition_93Context *_localctx = _tracker.createInstance<Pnf_option_functionDefinition_93Context>(_ctx, getState());
  enterRule(_localctx, 156, CParser::RulePnf_option_functionDefinition_93);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(805);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(804);
      declarationSpecifiers();
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

//----------------- Pnf_option_functionDefinition_94Context ------------------------------------------------------------------

CParser::Pnf_option_functionDefinition_94Context::Pnf_option_functionDefinition_94Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_plus_declarationList_33Context* CParser::Pnf_option_functionDefinition_94Context::pnf_plus_declarationList_33() {
  return getRuleContext<CParser::Pnf_plus_declarationList_33Context>(0);
}


size_t CParser::Pnf_option_functionDefinition_94Context::getRuleIndex() const {
  return CParser::RulePnf_option_functionDefinition_94;
}

void CParser::Pnf_option_functionDefinition_94Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_functionDefinition_94(this);
}

void CParser::Pnf_option_functionDefinition_94Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_functionDefinition_94(this);
}


antlrcpp::Any CParser::Pnf_option_functionDefinition_94Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_functionDefinition_94(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_functionDefinition_94Context* CParser::pnf_option_functionDefinition_94() {
  Pnf_option_functionDefinition_94Context *_localctx = _tracker.createInstance<Pnf_option_functionDefinition_94Context>(_ctx, getState());
  enterRule(_localctx, 158, CParser::RulePnf_option_functionDefinition_94);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(808);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::StaticAssert - 64))
      | (1ULL << (CParser::ThreadLocal - 64))
      | (1ULL << (CParser::Identifier - 64)))) != 0)) {
      setState(807);
      pnf_plus_declarationList_33();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_gccAttributeList_22Context ------------------------------------------------------------------

CParser::Pnf_option_gccAttributeList_22Context::Pnf_option_gccAttributeList_22Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::GccAttributeContext* CParser::Pnf_option_gccAttributeList_22Context::gccAttribute() {
  return getRuleContext<CParser::GccAttributeContext>(0);
}


size_t CParser::Pnf_option_gccAttributeList_22Context::getRuleIndex() const {
  return CParser::RulePnf_option_gccAttributeList_22;
}

void CParser::Pnf_option_gccAttributeList_22Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_gccAttributeList_22(this);
}

void CParser::Pnf_option_gccAttributeList_22Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_gccAttributeList_22(this);
}


antlrcpp::Any CParser::Pnf_option_gccAttributeList_22Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_gccAttributeList_22(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_gccAttributeList_22Context* CParser::pnf_option_gccAttributeList_22() {
  Pnf_option_gccAttributeList_22Context *_localctx = _tracker.createInstance<Pnf_option_gccAttributeList_22Context>(_ctx, getState());
  enterRule(_localctx, 160, CParser::RulePnf_option_gccAttributeList_22);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(811);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__12)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Else)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::StaticAssert - 64))
      | (1ULL << (CParser::ThreadLocal - 64))
      | (1ULL << (CParser::LeftBracket - 64))
      | (1ULL << (CParser::RightBracket - 64))
      | (1ULL << (CParser::LeftBrace - 64))
      | (1ULL << (CParser::RightBrace - 64))
      | (1ULL << (CParser::Less - 64))
      | (1ULL << (CParser::LessEqual - 64))
      | (1ULL << (CParser::Greater - 64))
      | (1ULL << (CParser::GreaterEqual - 64))
      | (1ULL << (CParser::LeftShift - 64))
      | (1ULL << (CParser::RightShift - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::MinusMinus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::Div - 64))
      | (1ULL << (CParser::Mod - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::Or - 64))
      | (1ULL << (CParser::AndAnd - 64))
      | (1ULL << (CParser::OrOr - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Not - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::Question - 64))
      | (1ULL << (CParser::Colon - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::Assign - 64))
      | (1ULL << (CParser::StarAssign - 64))
      | (1ULL << (CParser::DivAssign - 64))
      | (1ULL << (CParser::ModAssign - 64))
      | (1ULL << (CParser::PlusAssign - 64))
      | (1ULL << (CParser::MinusAssign - 64))
      | (1ULL << (CParser::LeftShiftAssign - 64))
      | (1ULL << (CParser::RightShiftAssign - 64))
      | (1ULL << (CParser::AndAssign - 64))
      | (1ULL << (CParser::XorAssign - 64))
      | (1ULL << (CParser::OrAssign - 64))
      | (1ULL << (CParser::Equal - 64))
      | (1ULL << (CParser::NotEqual - 64))
      | (1ULL << (CParser::Arrow - 64))
      | (1ULL << (CParser::Dot - 64))
      | (1ULL << (CParser::Ellipsis - 64))
      | (1ULL << (CParser::RealPart - 64))
      | (1ULL << (CParser::ImaginaryPart - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::Constant - 64))
      | (1ULL << (CParser::StringLiteral - 64))
      | (1ULL << (CParser::ComplexDefine - 64))
      | (1ULL << (CParser::LineAfterPreprocessing - 64))
      | (1ULL << (CParser::LineDirective - 64))
      | (1ULL << (CParser::IncludeDirective - 64))
      | (1ULL << (CParser::PragmaDirective - 64))
      | (1ULL << (CParser::Whitespace - 64))
      | (1ULL << (CParser::Newline - 64))
      | (1ULL << (CParser::BlockComment - 64))
      | (1ULL << (CParser::LineComment - 64)))) != 0)) {
      setState(810);
      gccAttribute();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_gccAttributeSpecifier_15Context ------------------------------------------------------------------

CParser::Pnf_option_gccAttributeSpecifier_15Context::Pnf_option_gccAttributeSpecifier_15Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_12Context* CParser::Pnf_option_gccAttributeSpecifier_15Context::pnf_list_left_12() {
  return getRuleContext<CParser::Pnf_list_left_12Context>(0);
}


size_t CParser::Pnf_option_gccAttributeSpecifier_15Context::getRuleIndex() const {
  return CParser::RulePnf_option_gccAttributeSpecifier_15;
}

void CParser::Pnf_option_gccAttributeSpecifier_15Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_gccAttributeSpecifier_15(this);
}

void CParser::Pnf_option_gccAttributeSpecifier_15Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_gccAttributeSpecifier_15(this);
}


antlrcpp::Any CParser::Pnf_option_gccAttributeSpecifier_15Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_gccAttributeSpecifier_15(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_gccAttributeSpecifier_15Context* CParser::pnf_option_gccAttributeSpecifier_15() {
  Pnf_option_gccAttributeSpecifier_15Context *_localctx = _tracker.createInstance<Pnf_option_gccAttributeSpecifier_15Context>(_ctx, getState());
  enterRule(_localctx, 162, CParser::RulePnf_option_gccAttributeSpecifier_15);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(814);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(813);
      pnf_list_left_12();
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

//----------------- Pnf_option_gccAttribute_73Context ------------------------------------------------------------------

CParser::Pnf_option_gccAttribute_73Context::Pnf_option_gccAttribute_73Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::GccAttribute_block_1Context* CParser::Pnf_option_gccAttribute_73Context::gccAttribute_block_1() {
  return getRuleContext<CParser::GccAttribute_block_1Context>(0);
}


size_t CParser::Pnf_option_gccAttribute_73Context::getRuleIndex() const {
  return CParser::RulePnf_option_gccAttribute_73;
}

void CParser::Pnf_option_gccAttribute_73Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_gccAttribute_73(this);
}

void CParser::Pnf_option_gccAttribute_73Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_gccAttribute_73(this);
}


antlrcpp::Any CParser::Pnf_option_gccAttribute_73Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_gccAttribute_73(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_gccAttribute_73Context* CParser::pnf_option_gccAttribute_73() {
  Pnf_option_gccAttribute_73Context *_localctx = _tracker.createInstance<Pnf_option_gccAttribute_73Context>(_ctx, getState());
  enterRule(_localctx, 164, CParser::RulePnf_option_gccAttribute_73);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(817);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::LeftParen) {
      setState(816);
      gccAttribute_block_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_gccAttribute_block_1_36Context ------------------------------------------------------------------

CParser::Pnf_option_gccAttribute_block_1_36Context::Pnf_option_gccAttribute_block_1_36Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_3Context* CParser::Pnf_option_gccAttribute_block_1_36Context::pnf_list_left_3() {
  return getRuleContext<CParser::Pnf_list_left_3Context>(0);
}


size_t CParser::Pnf_option_gccAttribute_block_1_36Context::getRuleIndex() const {
  return CParser::RulePnf_option_gccAttribute_block_1_36;
}

void CParser::Pnf_option_gccAttribute_block_1_36Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_gccAttribute_block_1_36(this);
}

void CParser::Pnf_option_gccAttribute_block_1_36Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_gccAttribute_block_1_36(this);
}


antlrcpp::Any CParser::Pnf_option_gccAttribute_block_1_36Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_gccAttribute_block_1_36(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_gccAttribute_block_1_36Context* CParser::pnf_option_gccAttribute_block_1_36() {
  Pnf_option_gccAttribute_block_1_36Context *_localctx = _tracker.createInstance<Pnf_option_gccAttribute_block_1_36Context>(_ctx, getState());
  enterRule(_localctx, 166, CParser::RulePnf_option_gccAttribute_block_1_36);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(820);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Plus - 66))
      | (1ULL << (CParser::PlusPlus - 66))
      | (1ULL << (CParser::Minus - 66))
      | (1ULL << (CParser::MinusMinus - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::And - 66))
      | (1ULL << (CParser::AndAnd - 66))
      | (1ULL << (CParser::Not - 66))
      | (1ULL << (CParser::Tilde - 66))
      | (1ULL << (CParser::RealPart - 66))
      | (1ULL << (CParser::ImaginaryPart - 66))
      | (1ULL << (CParser::Identifier - 66))
      | (1ULL << (CParser::Constant - 66))
      | (1ULL << (CParser::StringLiteral - 66)))) != 0)) {
      setState(819);
      pnf_list_left_3();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_initDeclarator_17Context ------------------------------------------------------------------

CParser::Pnf_option_initDeclarator_17Context::Pnf_option_initDeclarator_17Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_part_initDeclarator_16Context* CParser::Pnf_option_initDeclarator_17Context::pnf_part_initDeclarator_16() {
  return getRuleContext<CParser::Pnf_part_initDeclarator_16Context>(0);
}


size_t CParser::Pnf_option_initDeclarator_17Context::getRuleIndex() const {
  return CParser::RulePnf_option_initDeclarator_17;
}

void CParser::Pnf_option_initDeclarator_17Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_initDeclarator_17(this);
}

void CParser::Pnf_option_initDeclarator_17Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_initDeclarator_17(this);
}


antlrcpp::Any CParser::Pnf_option_initDeclarator_17Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_initDeclarator_17(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_initDeclarator_17Context* CParser::pnf_option_initDeclarator_17() {
  Pnf_option_initDeclarator_17Context *_localctx = _tracker.createInstance<Pnf_option_initDeclarator_17Context>(_ctx, getState());
  enterRule(_localctx, 168, CParser::RulePnf_option_initDeclarator_17);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(823);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Assign) {
      setState(822);
      pnf_part_initDeclarator_16();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_initializerList_block_1_38Context ------------------------------------------------------------------

CParser::Pnf_option_initializerList_block_1_38Context::Pnf_option_initializerList_block_1_38Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DesignationContext* CParser::Pnf_option_initializerList_block_1_38Context::designation() {
  return getRuleContext<CParser::DesignationContext>(0);
}


size_t CParser::Pnf_option_initializerList_block_1_38Context::getRuleIndex() const {
  return CParser::RulePnf_option_initializerList_block_1_38;
}

void CParser::Pnf_option_initializerList_block_1_38Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_initializerList_block_1_38(this);
}

void CParser::Pnf_option_initializerList_block_1_38Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_initializerList_block_1_38(this);
}


antlrcpp::Any CParser::Pnf_option_initializerList_block_1_38Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_initializerList_block_1_38(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_initializerList_block_1_38Context* CParser::pnf_option_initializerList_block_1_38() {
  Pnf_option_initializerList_block_1_38Context *_localctx = _tracker.createInstance<Pnf_option_initializerList_block_1_38Context>(_ctx, getState());
  enterRule(_localctx, 170, CParser::RulePnf_option_initializerList_block_1_38);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(826);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      setState(825);
      designation();
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

//----------------- Pnf_option_initializer_82Context ------------------------------------------------------------------

CParser::Pnf_option_initializer_82Context::Pnf_option_initializer_82Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Initializer_block_1Context* CParser::Pnf_option_initializer_82Context::initializer_block_1() {
  return getRuleContext<CParser::Initializer_block_1Context>(0);
}


size_t CParser::Pnf_option_initializer_82Context::getRuleIndex() const {
  return CParser::RulePnf_option_initializer_82;
}

void CParser::Pnf_option_initializer_82Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_initializer_82(this);
}

void CParser::Pnf_option_initializer_82Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_initializer_82(this);
}


antlrcpp::Any CParser::Pnf_option_initializer_82Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_initializer_82(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_initializer_82Context* CParser::pnf_option_initializer_82() {
  Pnf_option_initializer_82Context *_localctx = _tracker.createInstance<Pnf_option_initializer_82Context>(_ctx, getState());
  enterRule(_localctx, 172, CParser::RulePnf_option_initializer_82);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(829);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::LeftBracket - 66))
      | (1ULL << (CParser::LeftBrace - 66))
      | (1ULL << (CParser::Plus - 66))
      | (1ULL << (CParser::PlusPlus - 66))
      | (1ULL << (CParser::Minus - 66))
      | (1ULL << (CParser::MinusMinus - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::And - 66))
      | (1ULL << (CParser::AndAnd - 66))
      | (1ULL << (CParser::Not - 66))
      | (1ULL << (CParser::Tilde - 66))
      | (1ULL << (CParser::Dot - 66))
      | (1ULL << (CParser::RealPart - 66))
      | (1ULL << (CParser::ImaginaryPart - 66))
      | (1ULL << (CParser::Identifier - 66))
      | (1ULL << (CParser::Constant - 66))
      | (1ULL << (CParser::StringLiteral - 66)))) != 0)) {
      setState(828);
      initializer_block_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_initializer_block_1_81Context ------------------------------------------------------------------

CParser::Pnf_option_initializer_block_1_81Context::Pnf_option_initializer_block_1_81Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::Pnf_option_initializer_block_1_81Context::getRuleIndex() const {
  return CParser::RulePnf_option_initializer_block_1_81;
}

void CParser::Pnf_option_initializer_block_1_81Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_initializer_block_1_81(this);
}

void CParser::Pnf_option_initializer_block_1_81Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_initializer_block_1_81(this);
}


antlrcpp::Any CParser::Pnf_option_initializer_block_1_81Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_initializer_block_1_81(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_initializer_block_1_81Context* CParser::pnf_option_initializer_block_1_81() {
  Pnf_option_initializer_block_1_81Context *_localctx = _tracker.createInstance<Pnf_option_initializer_block_1_81Context>(_ctx, getState());
  enterRule(_localctx, 174, CParser::RulePnf_option_initializer_block_1_81);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Comma) {
      setState(831);
      match(CParser::Comma);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_parameterTypeList_25Context ------------------------------------------------------------------

CParser::Pnf_option_parameterTypeList_25Context::Pnf_option_parameterTypeList_25Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_part_parameterTypeList_24Context* CParser::Pnf_option_parameterTypeList_25Context::pnf_part_parameterTypeList_24() {
  return getRuleContext<CParser::Pnf_part_parameterTypeList_24Context>(0);
}


size_t CParser::Pnf_option_parameterTypeList_25Context::getRuleIndex() const {
  return CParser::RulePnf_option_parameterTypeList_25;
}

void CParser::Pnf_option_parameterTypeList_25Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_parameterTypeList_25(this);
}

void CParser::Pnf_option_parameterTypeList_25Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_parameterTypeList_25(this);
}


antlrcpp::Any CParser::Pnf_option_parameterTypeList_25Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_parameterTypeList_25(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_parameterTypeList_25Context* CParser::pnf_option_parameterTypeList_25() {
  Pnf_option_parameterTypeList_25Context *_localctx = _tracker.createInstance<Pnf_option_parameterTypeList_25Context>(_ctx, getState());
  enterRule(_localctx, 176, CParser::RulePnf_option_parameterTypeList_25);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(835);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Comma) {
      setState(834);
      pnf_part_parameterTypeList_24();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_pnf_part_directDeclarator_21_70Context ------------------------------------------------------------------

CParser::Pnf_option_pnf_part_directDeclarator_21_70Context::Pnf_option_pnf_part_directDeclarator_21_70Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_plus_typeQualifierList_23Context* CParser::Pnf_option_pnf_part_directDeclarator_21_70Context::pnf_plus_typeQualifierList_23() {
  return getRuleContext<CParser::Pnf_plus_typeQualifierList_23Context>(0);
}


size_t CParser::Pnf_option_pnf_part_directDeclarator_21_70Context::getRuleIndex() const {
  return CParser::RulePnf_option_pnf_part_directDeclarator_21_70;
}

void CParser::Pnf_option_pnf_part_directDeclarator_21_70Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_pnf_part_directDeclarator_21_70(this);
}

void CParser::Pnf_option_pnf_part_directDeclarator_21_70Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_pnf_part_directDeclarator_21_70(this);
}


antlrcpp::Any CParser::Pnf_option_pnf_part_directDeclarator_21_70Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_pnf_part_directDeclarator_21_70(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_70Context* CParser::pnf_option_pnf_part_directDeclarator_21_70() {
  Pnf_option_pnf_part_directDeclarator_21_70Context *_localctx = _tracker.createInstance<Pnf_option_pnf_part_directDeclarator_21_70Context>(_ctx, getState());
  enterRule(_localctx, 178, CParser::RulePnf_option_pnf_part_directDeclarator_21_70);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(838);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(837);
      pnf_plus_typeQualifierList_23();
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

//----------------- Pnf_option_pnf_part_directDeclarator_21_71Context ------------------------------------------------------------------

CParser::Pnf_option_pnf_part_directDeclarator_21_71Context::Pnf_option_pnf_part_directDeclarator_21_71Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::Pnf_option_pnf_part_directDeclarator_21_71Context::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}


size_t CParser::Pnf_option_pnf_part_directDeclarator_21_71Context::getRuleIndex() const {
  return CParser::RulePnf_option_pnf_part_directDeclarator_21_71;
}

void CParser::Pnf_option_pnf_part_directDeclarator_21_71Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_pnf_part_directDeclarator_21_71(this);
}

void CParser::Pnf_option_pnf_part_directDeclarator_21_71Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_pnf_part_directDeclarator_21_71(this);
}


antlrcpp::Any CParser::Pnf_option_pnf_part_directDeclarator_21_71Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_pnf_part_directDeclarator_21_71(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_71Context* CParser::pnf_option_pnf_part_directDeclarator_21_71() {
  Pnf_option_pnf_part_directDeclarator_21_71Context *_localctx = _tracker.createInstance<Pnf_option_pnf_part_directDeclarator_21_71Context>(_ctx, getState());
  enterRule(_localctx, 180, CParser::RulePnf_option_pnf_part_directDeclarator_21_71);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(841);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Plus - 66))
      | (1ULL << (CParser::PlusPlus - 66))
      | (1ULL << (CParser::Minus - 66))
      | (1ULL << (CParser::MinusMinus - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::And - 66))
      | (1ULL << (CParser::AndAnd - 66))
      | (1ULL << (CParser::Not - 66))
      | (1ULL << (CParser::Tilde - 66))
      | (1ULL << (CParser::RealPart - 66))
      | (1ULL << (CParser::ImaginaryPart - 66))
      | (1ULL << (CParser::Identifier - 66))
      | (1ULL << (CParser::Constant - 66))
      | (1ULL << (CParser::StringLiteral - 66)))) != 0)) {
      setState(840);
      assignmentExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_pnf_part_directDeclarator_21_72Context ------------------------------------------------------------------

CParser::Pnf_option_pnf_part_directDeclarator_21_72Context::Pnf_option_pnf_part_directDeclarator_21_72Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_0Context* CParser::Pnf_option_pnf_part_directDeclarator_21_72Context::pnf_list_left_0() {
  return getRuleContext<CParser::Pnf_list_left_0Context>(0);
}


size_t CParser::Pnf_option_pnf_part_directDeclarator_21_72Context::getRuleIndex() const {
  return CParser::RulePnf_option_pnf_part_directDeclarator_21_72;
}

void CParser::Pnf_option_pnf_part_directDeclarator_21_72Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_pnf_part_directDeclarator_21_72(this);
}

void CParser::Pnf_option_pnf_part_directDeclarator_21_72Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_pnf_part_directDeclarator_21_72(this);
}


antlrcpp::Any CParser::Pnf_option_pnf_part_directDeclarator_21_72Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_pnf_part_directDeclarator_21_72(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_72Context* CParser::pnf_option_pnf_part_directDeclarator_21_72() {
  Pnf_option_pnf_part_directDeclarator_21_72Context *_localctx = _tracker.createInstance<Pnf_option_pnf_part_directDeclarator_21_72Context>(_ctx, getState());
  enterRule(_localctx, 182, CParser::RulePnf_option_pnf_part_directDeclarator_21_72);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(844);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Identifier) {
      setState(843);
      pnf_list_left_0();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_pointer_26Context ------------------------------------------------------------------

CParser::Pnf_option_pointer_26Context::Pnf_option_pointer_26Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::PointerContext* CParser::Pnf_option_pointer_26Context::pointer() {
  return getRuleContext<CParser::PointerContext>(0);
}


size_t CParser::Pnf_option_pointer_26Context::getRuleIndex() const {
  return CParser::RulePnf_option_pointer_26;
}

void CParser::Pnf_option_pointer_26Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_pointer_26(this);
}

void CParser::Pnf_option_pointer_26Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_pointer_26(this);
}


antlrcpp::Any CParser::Pnf_option_pointer_26Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_pointer_26(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_pointer_26Context* CParser::pnf_option_pointer_26() {
  Pnf_option_pointer_26Context *_localctx = _tracker.createInstance<Pnf_option_pointer_26Context>(_ctx, getState());
  enterRule(_localctx, 184, CParser::RulePnf_option_pointer_26);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(847);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(846);
      pointer();
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

//----------------- Pnf_option_postfixExpression_102Context ------------------------------------------------------------------

CParser::Pnf_option_postfixExpression_102Context::Pnf_option_postfixExpression_102Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_part_postfixExpression_101Context* CParser::Pnf_option_postfixExpression_102Context::pnf_part_postfixExpression_101() {
  return getRuleContext<CParser::Pnf_part_postfixExpression_101Context>(0);
}


size_t CParser::Pnf_option_postfixExpression_102Context::getRuleIndex() const {
  return CParser::RulePnf_option_postfixExpression_102;
}

void CParser::Pnf_option_postfixExpression_102Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_postfixExpression_102(this);
}

void CParser::Pnf_option_postfixExpression_102Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_postfixExpression_102(this);
}


antlrcpp::Any CParser::Pnf_option_postfixExpression_102Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_postfixExpression_102(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_postfixExpression_102Context* CParser::pnf_option_postfixExpression_102() {
  Pnf_option_postfixExpression_102Context *_localctx = _tracker.createInstance<Pnf_option_postfixExpression_102Context>(_ctx, getState());
  enterRule(_localctx, 186, CParser::RulePnf_option_postfixExpression_102);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(850);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::T__9) {
      setState(849);
      pnf_part_postfixExpression_101();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_postfixExpression_2Context ------------------------------------------------------------------

CParser::Pnf_option_postfixExpression_2Context::Pnf_option_postfixExpression_2Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_part_postfixExpression_1Context* CParser::Pnf_option_postfixExpression_2Context::pnf_part_postfixExpression_1() {
  return getRuleContext<CParser::Pnf_part_postfixExpression_1Context>(0);
}


size_t CParser::Pnf_option_postfixExpression_2Context::getRuleIndex() const {
  return CParser::RulePnf_option_postfixExpression_2;
}

void CParser::Pnf_option_postfixExpression_2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_postfixExpression_2(this);
}

void CParser::Pnf_option_postfixExpression_2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_postfixExpression_2(this);
}


antlrcpp::Any CParser::Pnf_option_postfixExpression_2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_postfixExpression_2(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_postfixExpression_2Context* CParser::pnf_option_postfixExpression_2() {
  Pnf_option_postfixExpression_2Context *_localctx = _tracker.createInstance<Pnf_option_postfixExpression_2Context>(_ctx, getState());
  enterRule(_localctx, 188, CParser::RulePnf_option_postfixExpression_2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(853);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Comma) {
      setState(852);
      pnf_part_postfixExpression_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_primaryExpression_41Context ------------------------------------------------------------------

CParser::Pnf_option_primaryExpression_41Context::Pnf_option_primaryExpression_41Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::Pnf_option_primaryExpression_41Context::getRuleIndex() const {
  return CParser::RulePnf_option_primaryExpression_41;
}

void CParser::Pnf_option_primaryExpression_41Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_primaryExpression_41(this);
}

void CParser::Pnf_option_primaryExpression_41Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_primaryExpression_41(this);
}


antlrcpp::Any CParser::Pnf_option_primaryExpression_41Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_primaryExpression_41(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_primaryExpression_41Context* CParser::pnf_option_primaryExpression_41() {
  Pnf_option_primaryExpression_41Context *_localctx = _tracker.createInstance<Pnf_option_primaryExpression_41Context>(_ctx, getState());
  enterRule(_localctx, 190, CParser::RulePnf_option_primaryExpression_41);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(856);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(855);
      match(CParser::T__9);
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

//----------------- Pnf_option_selectionStatement_88Context ------------------------------------------------------------------

CParser::Pnf_option_selectionStatement_88Context::Pnf_option_selectionStatement_88Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::SelectionStatement_block_1Context* CParser::Pnf_option_selectionStatement_88Context::selectionStatement_block_1() {
  return getRuleContext<CParser::SelectionStatement_block_1Context>(0);
}


size_t CParser::Pnf_option_selectionStatement_88Context::getRuleIndex() const {
  return CParser::RulePnf_option_selectionStatement_88;
}

void CParser::Pnf_option_selectionStatement_88Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_selectionStatement_88(this);
}

void CParser::Pnf_option_selectionStatement_88Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_selectionStatement_88(this);
}


antlrcpp::Any CParser::Pnf_option_selectionStatement_88Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_selectionStatement_88(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_selectionStatement_88Context* CParser::pnf_option_selectionStatement_88() {
  Pnf_option_selectionStatement_88Context *_localctx = _tracker.createInstance<Pnf_option_selectionStatement_88Context>(_ctx, getState());
  enterRule(_localctx, 192, CParser::RulePnf_option_selectionStatement_88);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(859);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(858);
      selectionStatement_block_1();
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

//----------------- Pnf_option_specifierQualifierList_65Context ------------------------------------------------------------------

CParser::Pnf_option_specifierQualifierList_65Context::Pnf_option_specifierQualifierList_65Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::SpecifierQualifierListContext* CParser::Pnf_option_specifierQualifierList_65Context::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}


size_t CParser::Pnf_option_specifierQualifierList_65Context::getRuleIndex() const {
  return CParser::RulePnf_option_specifierQualifierList_65;
}

void CParser::Pnf_option_specifierQualifierList_65Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_specifierQualifierList_65(this);
}

void CParser::Pnf_option_specifierQualifierList_65Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_specifierQualifierList_65(this);
}


antlrcpp::Any CParser::Pnf_option_specifierQualifierList_65Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_specifierQualifierList_65(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_specifierQualifierList_65Context* CParser::pnf_option_specifierQualifierList_65() {
  Pnf_option_specifierQualifierList_65Context *_localctx = _tracker.createInstance<Pnf_option_specifierQualifierList_65Context>(_ctx, getState());
  enterRule(_localctx, 194, CParser::RulePnf_option_specifierQualifierList_65);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(861);
      specifierQualifierList();
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

//----------------- Pnf_option_statement_89Context ------------------------------------------------------------------

CParser::Pnf_option_statement_89Context::Pnf_option_statement_89Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Statement_block_1Context* CParser::Pnf_option_statement_89Context::statement_block_1() {
  return getRuleContext<CParser::Statement_block_1Context>(0);
}


size_t CParser::Pnf_option_statement_89Context::getRuleIndex() const {
  return CParser::RulePnf_option_statement_89;
}

void CParser::Pnf_option_statement_89Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_statement_89(this);
}

void CParser::Pnf_option_statement_89Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_statement_89(this);
}


antlrcpp::Any CParser::Pnf_option_statement_89Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_statement_89(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_statement_89Context* CParser::pnf_option_statement_89() {
  Pnf_option_statement_89Context *_localctx = _tracker.createInstance<Pnf_option_statement_89Context>(_ctx, getState());
  enterRule(_localctx, 196, CParser::RulePnf_option_statement_89);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(865);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::T__12

    || _la == CParser::Volatile) {
      setState(864);
      statement_block_1();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_statement_90Context ------------------------------------------------------------------

CParser::Pnf_option_statement_90Context::Pnf_option_statement_90Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::Pnf_option_statement_90Context::getRuleIndex() const {
  return CParser::RulePnf_option_statement_90;
}

void CParser::Pnf_option_statement_90Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_statement_90(this);
}

void CParser::Pnf_option_statement_90Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_statement_90(this);
}


antlrcpp::Any CParser::Pnf_option_statement_90Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_statement_90(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_statement_90Context* CParser::pnf_option_statement_90() {
  Pnf_option_statement_90Context *_localctx = _tracker.createInstance<Pnf_option_statement_90Context>(_ctx, getState());
  enterRule(_localctx, 198, CParser::RulePnf_option_statement_90);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(868);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Goto) {
      setState(867);
      match(CParser::Goto);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_statement_91Context ------------------------------------------------------------------

CParser::Pnf_option_statement_91Context::Pnf_option_statement_91Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_14Context* CParser::Pnf_option_statement_91Context::pnf_list_left_14() {
  return getRuleContext<CParser::Pnf_list_left_14Context>(0);
}


size_t CParser::Pnf_option_statement_91Context::getRuleIndex() const {
  return CParser::RulePnf_option_statement_91;
}

void CParser::Pnf_option_statement_91Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_statement_91(this);
}

void CParser::Pnf_option_statement_91Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_statement_91(this);
}


antlrcpp::Any CParser::Pnf_option_statement_91Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_statement_91(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_statement_91Context* CParser::pnf_option_statement_91() {
  Pnf_option_statement_91Context *_localctx = _tracker.createInstance<Pnf_option_statement_91Context>(_ctx, getState());
  enterRule(_localctx, 200, CParser::RulePnf_option_statement_91);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(871);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Plus - 66))
      | (1ULL << (CParser::PlusPlus - 66))
      | (1ULL << (CParser::Minus - 66))
      | (1ULL << (CParser::MinusMinus - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::And - 66))
      | (1ULL << (CParser::AndAnd - 66))
      | (1ULL << (CParser::Not - 66))
      | (1ULL << (CParser::Tilde - 66))
      | (1ULL << (CParser::RealPart - 66))
      | (1ULL << (CParser::ImaginaryPart - 66))
      | (1ULL << (CParser::Identifier - 66))
      | (1ULL << (CParser::Constant - 66))
      | (1ULL << (CParser::StringLiteral - 66)))) != 0)) {
      setState(870);
      pnf_list_left_14();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_statement_block_6_39Context ------------------------------------------------------------------

CParser::Pnf_option_statement_block_6_39Context::Pnf_option_statement_block_6_39Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_15Context* CParser::Pnf_option_statement_block_6_39Context::pnf_list_left_15() {
  return getRuleContext<CParser::Pnf_list_left_15Context>(0);
}


size_t CParser::Pnf_option_statement_block_6_39Context::getRuleIndex() const {
  return CParser::RulePnf_option_statement_block_6_39;
}

void CParser::Pnf_option_statement_block_6_39Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_statement_block_6_39(this);
}

void CParser::Pnf_option_statement_block_6_39Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_statement_block_6_39(this);
}


antlrcpp::Any CParser::Pnf_option_statement_block_6_39Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_statement_block_6_39(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_statement_block_6_39Context* CParser::pnf_option_statement_block_6_39() {
  Pnf_option_statement_block_6_39Context *_localctx = _tracker.createInstance<Pnf_option_statement_block_6_39Context>(_ctx, getState());
  enterRule(_localctx, 202, CParser::RulePnf_option_statement_block_6_39);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(874);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Generic))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Plus - 66))
      | (1ULL << (CParser::PlusPlus - 66))
      | (1ULL << (CParser::Minus - 66))
      | (1ULL << (CParser::MinusMinus - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::And - 66))
      | (1ULL << (CParser::AndAnd - 66))
      | (1ULL << (CParser::Not - 66))
      | (1ULL << (CParser::Tilde - 66))
      | (1ULL << (CParser::RealPart - 66))
      | (1ULL << (CParser::ImaginaryPart - 66))
      | (1ULL << (CParser::Identifier - 66))
      | (1ULL << (CParser::Constant - 66))
      | (1ULL << (CParser::StringLiteral - 66)))) != 0)) {
      setState(873);
      pnf_list_left_15();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_structDeclaration_18Context ------------------------------------------------------------------

CParser::Pnf_option_structDeclaration_18Context::Pnf_option_structDeclaration_18Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_10Context* CParser::Pnf_option_structDeclaration_18Context::pnf_list_left_10() {
  return getRuleContext<CParser::Pnf_list_left_10Context>(0);
}


size_t CParser::Pnf_option_structDeclaration_18Context::getRuleIndex() const {
  return CParser::RulePnf_option_structDeclaration_18;
}

void CParser::Pnf_option_structDeclaration_18Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_structDeclaration_18(this);
}

void CParser::Pnf_option_structDeclaration_18Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_structDeclaration_18(this);
}


antlrcpp::Any CParser::Pnf_option_structDeclaration_18Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_structDeclaration_18(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_structDeclaration_18Context* CParser::pnf_option_structDeclaration_18() {
  Pnf_option_structDeclaration_18Context *_localctx = _tracker.createInstance<Pnf_option_structDeclaration_18Context>(_ctx, getState());
  enterRule(_localctx, 204, CParser::RulePnf_option_structDeclaration_18);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(877);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::Caret - 66))
      | (1ULL << (CParser::Colon - 66))
      | (1ULL << (CParser::Identifier - 66)))) != 0)) {
      setState(876);
      pnf_list_left_10();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_structDeclarator_66Context ------------------------------------------------------------------

CParser::Pnf_option_structDeclarator_66Context::Pnf_option_structDeclarator_66Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::Pnf_option_structDeclarator_66Context::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}


size_t CParser::Pnf_option_structDeclarator_66Context::getRuleIndex() const {
  return CParser::RulePnf_option_structDeclarator_66;
}

void CParser::Pnf_option_structDeclarator_66Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_structDeclarator_66(this);
}

void CParser::Pnf_option_structDeclarator_66Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_structDeclarator_66(this);
}


antlrcpp::Any CParser::Pnf_option_structDeclarator_66Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_structDeclarator_66(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_structDeclarator_66Context* CParser::pnf_option_structDeclarator_66() {
  Pnf_option_structDeclarator_66Context *_localctx = _tracker.createInstance<Pnf_option_structDeclarator_66Context>(_ctx, getState());
  enterRule(_localctx, 206, CParser::RulePnf_option_structDeclarator_66);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(880);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::Caret - 66))
      | (1ULL << (CParser::Identifier - 66)))) != 0)) {
      setState(879);
      declarator();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_structOrUnionSpecifier_61Context ------------------------------------------------------------------

CParser::Pnf_option_structOrUnionSpecifier_61Context::Pnf_option_structOrUnionSpecifier_61Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::GccAttributeSpecifierContext* CParser::Pnf_option_structOrUnionSpecifier_61Context::gccAttributeSpecifier() {
  return getRuleContext<CParser::GccAttributeSpecifierContext>(0);
}


size_t CParser::Pnf_option_structOrUnionSpecifier_61Context::getRuleIndex() const {
  return CParser::RulePnf_option_structOrUnionSpecifier_61;
}

void CParser::Pnf_option_structOrUnionSpecifier_61Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_structOrUnionSpecifier_61(this);
}

void CParser::Pnf_option_structOrUnionSpecifier_61Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_structOrUnionSpecifier_61(this);
}


antlrcpp::Any CParser::Pnf_option_structOrUnionSpecifier_61Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_structOrUnionSpecifier_61(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_structOrUnionSpecifier_61Context* CParser::pnf_option_structOrUnionSpecifier_61() {
  Pnf_option_structOrUnionSpecifier_61Context *_localctx = _tracker.createInstance<Pnf_option_structOrUnionSpecifier_61Context>(_ctx, getState());
  enterRule(_localctx, 208, CParser::RulePnf_option_structOrUnionSpecifier_61);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(883);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::T__7

    || _la == CParser::T__8) {
      setState(882);
      gccAttributeSpecifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_structOrUnionSpecifier_62Context ------------------------------------------------------------------

CParser::Pnf_option_structOrUnionSpecifier_62Context::Pnf_option_structOrUnionSpecifier_62Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::Pnf_option_structOrUnionSpecifier_62Context::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::Pnf_option_structOrUnionSpecifier_62Context::getRuleIndex() const {
  return CParser::RulePnf_option_structOrUnionSpecifier_62;
}

void CParser::Pnf_option_structOrUnionSpecifier_62Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_structOrUnionSpecifier_62(this);
}

void CParser::Pnf_option_structOrUnionSpecifier_62Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_structOrUnionSpecifier_62(this);
}


antlrcpp::Any CParser::Pnf_option_structOrUnionSpecifier_62Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_structOrUnionSpecifier_62(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_structOrUnionSpecifier_62Context* CParser::pnf_option_structOrUnionSpecifier_62() {
  Pnf_option_structOrUnionSpecifier_62Context *_localctx = _tracker.createInstance<Pnf_option_structOrUnionSpecifier_62Context>(_ctx, getState());
  enterRule(_localctx, 210, CParser::RulePnf_option_structOrUnionSpecifier_62);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(886);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CParser::Identifier) {
      setState(885);
      match(CParser::Identifier);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_typeName_42Context ------------------------------------------------------------------

CParser::Pnf_option_typeName_42Context::Pnf_option_typeName_42Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::GccDeclaratorExtensionContext* CParser::Pnf_option_typeName_42Context::gccDeclaratorExtension() {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(0);
}


size_t CParser::Pnf_option_typeName_42Context::getRuleIndex() const {
  return CParser::RulePnf_option_typeName_42;
}

void CParser::Pnf_option_typeName_42Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_typeName_42(this);
}

void CParser::Pnf_option_typeName_42Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_typeName_42(this);
}


antlrcpp::Any CParser::Pnf_option_typeName_42Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_typeName_42(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_typeName_42Context* CParser::pnf_option_typeName_42() {
  Pnf_option_typeName_42Context *_localctx = _tracker.createInstance<Pnf_option_typeName_42Context>(_ctx, getState());
  enterRule(_localctx, 212, CParser::RulePnf_option_typeName_42);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(889);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8))) != 0)) {
      setState(888);
      gccDeclaratorExtension();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_option_typeName_43Context ------------------------------------------------------------------

CParser::Pnf_option_typeName_43Context::Pnf_option_typeName_43Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AbstractDeclaratorContext* CParser::Pnf_option_typeName_43Context::abstractDeclarator() {
  return getRuleContext<CParser::AbstractDeclaratorContext>(0);
}


size_t CParser::Pnf_option_typeName_43Context::getRuleIndex() const {
  return CParser::RulePnf_option_typeName_43;
}

void CParser::Pnf_option_typeName_43Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_option_typeName_43(this);
}

void CParser::Pnf_option_typeName_43Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_option_typeName_43(this);
}


antlrcpp::Any CParser::Pnf_option_typeName_43Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_option_typeName_43(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_option_typeName_43Context* CParser::pnf_option_typeName_43() {
  Pnf_option_typeName_43Context *_localctx = _tracker.createInstance<Pnf_option_typeName_43Context>(_ctx, getState());
  enterRule(_localctx, 214, CParser::RulePnf_option_typeName_43);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(892);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::LeftBracket - 66))
      | (1ULL << (CParser::Star - 66))
      | (1ULL << (CParser::Caret - 66)))) != 0)) {
      setState(891);
      abstractDeclarator();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_additiveExpression_4Context ------------------------------------------------------------------

CParser::Pnf_part_additiveExpression_4Context::Pnf_part_additiveExpression_4Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::MultiplicativeExpressionContext* CParser::Pnf_part_additiveExpression_4Context::multiplicativeExpression() {
  return getRuleContext<CParser::MultiplicativeExpressionContext>(0);
}


size_t CParser::Pnf_part_additiveExpression_4Context::getRuleIndex() const {
  return CParser::RulePnf_part_additiveExpression_4;
}

void CParser::Pnf_part_additiveExpression_4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_additiveExpression_4(this);
}

void CParser::Pnf_part_additiveExpression_4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_additiveExpression_4(this);
}


antlrcpp::Any CParser::Pnf_part_additiveExpression_4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_additiveExpression_4(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_additiveExpression_4Context* CParser::pnf_part_additiveExpression_4() {
  Pnf_part_additiveExpression_4Context *_localctx = _tracker.createInstance<Pnf_part_additiveExpression_4Context>(_ctx, getState());
  enterRule(_localctx, 216, CParser::RulePnf_part_additiveExpression_4);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(898);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Plus: {
        enterOuterAlt(_localctx, 1);
        setState(894);
        match(CParser::Plus);
        setState(895);
        multiplicativeExpression();
        break;
      }

      case CParser::Minus: {
        enterOuterAlt(_localctx, 2);
        setState(896);
        match(CParser::Minus);
        setState(897);
        multiplicativeExpression();
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

//----------------- Pnf_part_andExpression_8Context ------------------------------------------------------------------

CParser::Pnf_part_andExpression_8Context::Pnf_part_andExpression_8Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::EqualityExpressionContext* CParser::Pnf_part_andExpression_8Context::equalityExpression() {
  return getRuleContext<CParser::EqualityExpressionContext>(0);
}


size_t CParser::Pnf_part_andExpression_8Context::getRuleIndex() const {
  return CParser::RulePnf_part_andExpression_8;
}

void CParser::Pnf_part_andExpression_8Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_andExpression_8(this);
}

void CParser::Pnf_part_andExpression_8Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_andExpression_8(this);
}


antlrcpp::Any CParser::Pnf_part_andExpression_8Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_andExpression_8(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_andExpression_8Context* CParser::pnf_part_andExpression_8() {
  Pnf_part_andExpression_8Context *_localctx = _tracker.createInstance<Pnf_part_andExpression_8Context>(_ctx, getState());
  enterRule(_localctx, 218, CParser::RulePnf_part_andExpression_8);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(900);
    match(CParser::And);
    setState(901);
    equalityExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_assignmentExpression_99Context ------------------------------------------------------------------

CParser::Pnf_part_assignmentExpression_99Context::Pnf_part_assignmentExpression_99Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::UnaryExpressionContext* CParser::Pnf_part_assignmentExpression_99Context::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

CParser::AssignmentOperatorContext* CParser::Pnf_part_assignmentExpression_99Context::assignmentOperator() {
  return getRuleContext<CParser::AssignmentOperatorContext>(0);
}


size_t CParser::Pnf_part_assignmentExpression_99Context::getRuleIndex() const {
  return CParser::RulePnf_part_assignmentExpression_99;
}

void CParser::Pnf_part_assignmentExpression_99Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_assignmentExpression_99(this);
}

void CParser::Pnf_part_assignmentExpression_99Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_assignmentExpression_99(this);
}


antlrcpp::Any CParser::Pnf_part_assignmentExpression_99Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_assignmentExpression_99(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_assignmentExpression_99Context* CParser::pnf_part_assignmentExpression_99() {
  Pnf_part_assignmentExpression_99Context *_localctx = _tracker.createInstance<Pnf_part_assignmentExpression_99Context>(_ctx, getState());
  enterRule(_localctx, 220, CParser::RulePnf_part_assignmentExpression_99);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(903);
    unaryExpression();
    setState(904);
    assignmentOperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_castExpression_103Context ------------------------------------------------------------------

CParser::Pnf_part_castExpression_103Context::Pnf_part_castExpression_103Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_primaryExpression_41Context* CParser::Pnf_part_castExpression_103Context::pnf_option_primaryExpression_41() {
  return getRuleContext<CParser::Pnf_option_primaryExpression_41Context>(0);
}

CParser::TypeNameContext* CParser::Pnf_part_castExpression_103Context::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}


size_t CParser::Pnf_part_castExpression_103Context::getRuleIndex() const {
  return CParser::RulePnf_part_castExpression_103;
}

void CParser::Pnf_part_castExpression_103Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_castExpression_103(this);
}

void CParser::Pnf_part_castExpression_103Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_castExpression_103(this);
}


antlrcpp::Any CParser::Pnf_part_castExpression_103Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_castExpression_103(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_castExpression_103Context* CParser::pnf_part_castExpression_103() {
  Pnf_part_castExpression_103Context *_localctx = _tracker.createInstance<Pnf_part_castExpression_103Context>(_ctx, getState());
  enterRule(_localctx, 222, CParser::RulePnf_part_castExpression_103);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(906);
    pnf_option_primaryExpression_41();
    setState(907);
    match(CParser::LeftParen);
    setState(908);
    typeName();
    setState(909);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_directAbstractDeclarator_27Context ------------------------------------------------------------------

CParser::Pnf_part_directAbstractDeclarator_27Context::Pnf_part_directAbstractDeclarator_27Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_pnf_part_directDeclarator_21_70Context* CParser::Pnf_part_directAbstractDeclarator_27Context::pnf_option_pnf_part_directDeclarator_21_70() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_70Context>(0);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_71Context* CParser::Pnf_part_directAbstractDeclarator_27Context::pnf_option_pnf_part_directDeclarator_21_71() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_71Context>(0);
}

CParser::AssignmentExpressionContext* CParser::Pnf_part_directAbstractDeclarator_27Context::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::Pnf_plus_typeQualifierList_23Context* CParser::Pnf_part_directAbstractDeclarator_27Context::pnf_plus_typeQualifierList_23() {
  return getRuleContext<CParser::Pnf_plus_typeQualifierList_23Context>(0);
}

CParser::Pnf_option_directAbstractDeclarator_79Context* CParser::Pnf_part_directAbstractDeclarator_27Context::pnf_option_directAbstractDeclarator_79() {
  return getRuleContext<CParser::Pnf_option_directAbstractDeclarator_79Context>(0);
}

CParser::Pnf_star_declarator_63Context* CParser::Pnf_part_directAbstractDeclarator_27Context::pnf_star_declarator_63() {
  return getRuleContext<CParser::Pnf_star_declarator_63Context>(0);
}


size_t CParser::Pnf_part_directAbstractDeclarator_27Context::getRuleIndex() const {
  return CParser::RulePnf_part_directAbstractDeclarator_27;
}

void CParser::Pnf_part_directAbstractDeclarator_27Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_directAbstractDeclarator_27(this);
}

void CParser::Pnf_part_directAbstractDeclarator_27Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_directAbstractDeclarator_27(this);
}


antlrcpp::Any CParser::Pnf_part_directAbstractDeclarator_27Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_directAbstractDeclarator_27(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_directAbstractDeclarator_27Context* CParser::pnf_part_directAbstractDeclarator_27() {
  Pnf_part_directAbstractDeclarator_27Context *_localctx = _tracker.createInstance<Pnf_part_directAbstractDeclarator_27Context>(_ctx, getState());
  enterRule(_localctx, 224, CParser::RulePnf_part_directAbstractDeclarator_27);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(936);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(911);
      match(CParser::LeftBracket);
      setState(912);
      pnf_option_pnf_part_directDeclarator_21_70();
      setState(913);
      pnf_option_pnf_part_directDeclarator_21_71();
      setState(914);
      match(CParser::RightBracket);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(916);
      match(CParser::LeftBracket);
      setState(917);
      match(CParser::Static);
      setState(918);
      pnf_option_pnf_part_directDeclarator_21_70();
      setState(919);
      assignmentExpression();
      setState(920);
      match(CParser::RightBracket);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(922);
      match(CParser::LeftBracket);
      setState(923);
      pnf_plus_typeQualifierList_23();
      setState(924);
      match(CParser::Static);
      setState(925);
      assignmentExpression();
      setState(926);
      match(CParser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(928);
      match(CParser::LeftBracket);
      setState(929);
      match(CParser::Star);
      setState(930);
      match(CParser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(931);
      match(CParser::LeftParen);
      setState(932);
      pnf_option_directAbstractDeclarator_79();
      setState(933);
      match(CParser::RightParen);
      setState(934);
      pnf_star_declarator_63();
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

//----------------- Pnf_part_directDeclarator_21Context ------------------------------------------------------------------

CParser::Pnf_part_directDeclarator_21Context::Pnf_part_directDeclarator_21Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_pnf_part_directDeclarator_21_70Context* CParser::Pnf_part_directDeclarator_21Context::pnf_option_pnf_part_directDeclarator_21_70() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_70Context>(0);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_71Context* CParser::Pnf_part_directDeclarator_21Context::pnf_option_pnf_part_directDeclarator_21_71() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_71Context>(0);
}

CParser::AssignmentExpressionContext* CParser::Pnf_part_directDeclarator_21Context::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}

CParser::Pnf_plus_typeQualifierList_23Context* CParser::Pnf_part_directDeclarator_21Context::pnf_plus_typeQualifierList_23() {
  return getRuleContext<CParser::Pnf_plus_typeQualifierList_23Context>(0);
}

CParser::ParameterTypeListContext* CParser::Pnf_part_directDeclarator_21Context::parameterTypeList() {
  return getRuleContext<CParser::ParameterTypeListContext>(0);
}

CParser::Pnf_option_pnf_part_directDeclarator_21_72Context* CParser::Pnf_part_directDeclarator_21Context::pnf_option_pnf_part_directDeclarator_21_72() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_72Context>(0);
}


size_t CParser::Pnf_part_directDeclarator_21Context::getRuleIndex() const {
  return CParser::RulePnf_part_directDeclarator_21;
}

void CParser::Pnf_part_directDeclarator_21Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_directDeclarator_21(this);
}

void CParser::Pnf_part_directDeclarator_21Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_directDeclarator_21(this);
}


antlrcpp::Any CParser::Pnf_part_directDeclarator_21Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_directDeclarator_21(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_directDeclarator_21Context* CParser::pnf_part_directDeclarator_21() {
  Pnf_part_directDeclarator_21Context *_localctx = _tracker.createInstance<Pnf_part_directDeclarator_21Context>(_ctx, getState());
  enterRule(_localctx, 226, CParser::RulePnf_part_directDeclarator_21);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(968);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(938);
      match(CParser::LeftBracket);
      setState(939);
      pnf_option_pnf_part_directDeclarator_21_70();
      setState(940);
      pnf_option_pnf_part_directDeclarator_21_71();
      setState(941);
      match(CParser::RightBracket);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(943);
      match(CParser::LeftBracket);
      setState(944);
      match(CParser::Static);
      setState(945);
      pnf_option_pnf_part_directDeclarator_21_70();
      setState(946);
      assignmentExpression();
      setState(947);
      match(CParser::RightBracket);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(949);
      match(CParser::LeftBracket);
      setState(950);
      pnf_plus_typeQualifierList_23();
      setState(951);
      match(CParser::Static);
      setState(952);
      assignmentExpression();
      setState(953);
      match(CParser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(955);
      match(CParser::LeftBracket);
      setState(956);
      pnf_option_pnf_part_directDeclarator_21_70();
      setState(957);
      match(CParser::Star);
      setState(958);
      match(CParser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(960);
      match(CParser::LeftParen);
      setState(961);
      parameterTypeList();
      setState(962);
      match(CParser::RightParen);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(964);
      match(CParser::LeftParen);
      setState(965);
      pnf_option_pnf_part_directDeclarator_21_72();
      setState(966);
      match(CParser::RightParen);
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

//----------------- Pnf_part_enumerator_19Context ------------------------------------------------------------------

CParser::Pnf_part_enumerator_19Context::Pnf_part_enumerator_19Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::Pnf_part_enumerator_19Context::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::Pnf_part_enumerator_19Context::getRuleIndex() const {
  return CParser::RulePnf_part_enumerator_19;
}

void CParser::Pnf_part_enumerator_19Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_enumerator_19(this);
}

void CParser::Pnf_part_enumerator_19Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_enumerator_19(this);
}


antlrcpp::Any CParser::Pnf_part_enumerator_19Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_enumerator_19(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_enumerator_19Context* CParser::pnf_part_enumerator_19() {
  Pnf_part_enumerator_19Context *_localctx = _tracker.createInstance<Pnf_part_enumerator_19Context>(_ctx, getState());
  enterRule(_localctx, 228, CParser::RulePnf_part_enumerator_19);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(970);
    match(CParser::Assign);
    setState(971);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_equalityExpression_7Context ------------------------------------------------------------------

CParser::Pnf_part_equalityExpression_7Context::Pnf_part_equalityExpression_7Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::RelationalExpressionContext* CParser::Pnf_part_equalityExpression_7Context::relationalExpression() {
  return getRuleContext<CParser::RelationalExpressionContext>(0);
}


size_t CParser::Pnf_part_equalityExpression_7Context::getRuleIndex() const {
  return CParser::RulePnf_part_equalityExpression_7;
}

void CParser::Pnf_part_equalityExpression_7Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_equalityExpression_7(this);
}

void CParser::Pnf_part_equalityExpression_7Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_equalityExpression_7(this);
}


antlrcpp::Any CParser::Pnf_part_equalityExpression_7Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_equalityExpression_7(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_equalityExpression_7Context* CParser::pnf_part_equalityExpression_7() {
  Pnf_part_equalityExpression_7Context *_localctx = _tracker.createInstance<Pnf_part_equalityExpression_7Context>(_ctx, getState());
  enterRule(_localctx, 230, CParser::RulePnf_part_equalityExpression_7);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(977);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Equal: {
        enterOuterAlt(_localctx, 1);
        setState(973);
        match(CParser::Equal);
        setState(974);
        relationalExpression();
        break;
      }

      case CParser::NotEqual: {
        enterOuterAlt(_localctx, 2);
        setState(975);
        match(CParser::NotEqual);
        setState(976);
        relationalExpression();
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

//----------------- Pnf_part_exclusiveOrExpression_9Context ------------------------------------------------------------------

CParser::Pnf_part_exclusiveOrExpression_9Context::Pnf_part_exclusiveOrExpression_9Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_4Context* CParser::Pnf_part_exclusiveOrExpression_9Context::pnf_list_left_4() {
  return getRuleContext<CParser::Pnf_list_left_4Context>(0);
}


size_t CParser::Pnf_part_exclusiveOrExpression_9Context::getRuleIndex() const {
  return CParser::RulePnf_part_exclusiveOrExpression_9;
}

void CParser::Pnf_part_exclusiveOrExpression_9Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_exclusiveOrExpression_9(this);
}

void CParser::Pnf_part_exclusiveOrExpression_9Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_exclusiveOrExpression_9(this);
}


antlrcpp::Any CParser::Pnf_part_exclusiveOrExpression_9Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_exclusiveOrExpression_9(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_exclusiveOrExpression_9Context* CParser::pnf_part_exclusiveOrExpression_9() {
  Pnf_part_exclusiveOrExpression_9Context *_localctx = _tracker.createInstance<Pnf_part_exclusiveOrExpression_9Context>(_ctx, getState());
  enterRule(_localctx, 232, CParser::RulePnf_part_exclusiveOrExpression_9);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(979);
    match(CParser::Caret);
    setState(980);
    pnf_list_left_4();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_expression_13Context ------------------------------------------------------------------

CParser::Pnf_part_expression_13Context::Pnf_part_expression_13Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AssignmentExpressionContext* CParser::Pnf_part_expression_13Context::assignmentExpression() {
  return getRuleContext<CParser::AssignmentExpressionContext>(0);
}


size_t CParser::Pnf_part_expression_13Context::getRuleIndex() const {
  return CParser::RulePnf_part_expression_13;
}

void CParser::Pnf_part_expression_13Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_expression_13(this);
}

void CParser::Pnf_part_expression_13Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_expression_13(this);
}


antlrcpp::Any CParser::Pnf_part_expression_13Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_expression_13(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_expression_13Context* CParser::pnf_part_expression_13() {
  Pnf_part_expression_13Context *_localctx = _tracker.createInstance<Pnf_part_expression_13Context>(_ctx, getState());
  enterRule(_localctx, 234, CParser::RulePnf_part_expression_13);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(982);
    match(CParser::Comma);
    setState(983);
    assignmentExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_externalDeclaration_30Context ------------------------------------------------------------------

CParser::Pnf_part_externalDeclaration_30Context::Pnf_part_externalDeclaration_30Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AsmNameContext* CParser::Pnf_part_externalDeclaration_30Context::asmName() {
  return getRuleContext<CParser::AsmNameContext>(0);
}

CParser::Pnf_plus_primaryExpression_40Context* CParser::Pnf_part_externalDeclaration_30Context::pnf_plus_primaryExpression_40() {
  return getRuleContext<CParser::Pnf_plus_primaryExpression_40Context>(0);
}


size_t CParser::Pnf_part_externalDeclaration_30Context::getRuleIndex() const {
  return CParser::RulePnf_part_externalDeclaration_30;
}

void CParser::Pnf_part_externalDeclaration_30Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_externalDeclaration_30(this);
}

void CParser::Pnf_part_externalDeclaration_30Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_externalDeclaration_30(this);
}


antlrcpp::Any CParser::Pnf_part_externalDeclaration_30Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_externalDeclaration_30(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_externalDeclaration_30Context* CParser::pnf_part_externalDeclaration_30() {
  Pnf_part_externalDeclaration_30Context *_localctx = _tracker.createInstance<Pnf_part_externalDeclaration_30Context>(_ctx, getState());
  enterRule(_localctx, 236, CParser::RulePnf_part_externalDeclaration_30);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(985);
    asmName();
    setState(986);
    match(CParser::LeftParen);
    setState(987);
    pnf_plus_primaryExpression_40();
    setState(988);
    match(CParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_inclusiveOrExpression_10Context ------------------------------------------------------------------

CParser::Pnf_part_inclusiveOrExpression_10Context::Pnf_part_inclusiveOrExpression_10Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_5Context* CParser::Pnf_part_inclusiveOrExpression_10Context::pnf_list_left_5() {
  return getRuleContext<CParser::Pnf_list_left_5Context>(0);
}


size_t CParser::Pnf_part_inclusiveOrExpression_10Context::getRuleIndex() const {
  return CParser::RulePnf_part_inclusiveOrExpression_10;
}

void CParser::Pnf_part_inclusiveOrExpression_10Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_inclusiveOrExpression_10(this);
}

void CParser::Pnf_part_inclusiveOrExpression_10Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_inclusiveOrExpression_10(this);
}


antlrcpp::Any CParser::Pnf_part_inclusiveOrExpression_10Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_inclusiveOrExpression_10(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_inclusiveOrExpression_10Context* CParser::pnf_part_inclusiveOrExpression_10() {
  Pnf_part_inclusiveOrExpression_10Context *_localctx = _tracker.createInstance<Pnf_part_inclusiveOrExpression_10Context>(_ctx, getState());
  enterRule(_localctx, 238, CParser::RulePnf_part_inclusiveOrExpression_10);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(990);
    match(CParser::Or);
    setState(991);
    pnf_list_left_5();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_initDeclarator_16Context ------------------------------------------------------------------

CParser::Pnf_part_initDeclarator_16Context::Pnf_part_initDeclarator_16Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::InitializerContext* CParser::Pnf_part_initDeclarator_16Context::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}


size_t CParser::Pnf_part_initDeclarator_16Context::getRuleIndex() const {
  return CParser::RulePnf_part_initDeclarator_16;
}

void CParser::Pnf_part_initDeclarator_16Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_initDeclarator_16(this);
}

void CParser::Pnf_part_initDeclarator_16Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_initDeclarator_16(this);
}


antlrcpp::Any CParser::Pnf_part_initDeclarator_16Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_initDeclarator_16(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_initDeclarator_16Context* CParser::pnf_part_initDeclarator_16() {
  Pnf_part_initDeclarator_16Context *_localctx = _tracker.createInstance<Pnf_part_initDeclarator_16Context>(_ctx, getState());
  enterRule(_localctx, 240, CParser::RulePnf_part_initDeclarator_16);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(993);
    match(CParser::Assign);
    setState(994);
    initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_logicalAndExpression_11Context ------------------------------------------------------------------

CParser::Pnf_part_logicalAndExpression_11Context::Pnf_part_logicalAndExpression_11Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_6Context* CParser::Pnf_part_logicalAndExpression_11Context::pnf_list_left_6() {
  return getRuleContext<CParser::Pnf_list_left_6Context>(0);
}


size_t CParser::Pnf_part_logicalAndExpression_11Context::getRuleIndex() const {
  return CParser::RulePnf_part_logicalAndExpression_11;
}

void CParser::Pnf_part_logicalAndExpression_11Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_logicalAndExpression_11(this);
}

void CParser::Pnf_part_logicalAndExpression_11Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_logicalAndExpression_11(this);
}


antlrcpp::Any CParser::Pnf_part_logicalAndExpression_11Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_logicalAndExpression_11(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_logicalAndExpression_11Context* CParser::pnf_part_logicalAndExpression_11() {
  Pnf_part_logicalAndExpression_11Context *_localctx = _tracker.createInstance<Pnf_part_logicalAndExpression_11Context>(_ctx, getState());
  enterRule(_localctx, 242, CParser::RulePnf_part_logicalAndExpression_11);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(996);
    match(CParser::AndAnd);
    setState(997);
    pnf_list_left_6();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_logicalOrExpression_12Context ------------------------------------------------------------------

CParser::Pnf_part_logicalOrExpression_12Context::Pnf_part_logicalOrExpression_12Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_7Context* CParser::Pnf_part_logicalOrExpression_12Context::pnf_list_left_7() {
  return getRuleContext<CParser::Pnf_list_left_7Context>(0);
}


size_t CParser::Pnf_part_logicalOrExpression_12Context::getRuleIndex() const {
  return CParser::RulePnf_part_logicalOrExpression_12;
}

void CParser::Pnf_part_logicalOrExpression_12Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_logicalOrExpression_12(this);
}

void CParser::Pnf_part_logicalOrExpression_12Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_logicalOrExpression_12(this);
}


antlrcpp::Any CParser::Pnf_part_logicalOrExpression_12Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_logicalOrExpression_12(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_logicalOrExpression_12Context* CParser::pnf_part_logicalOrExpression_12() {
  Pnf_part_logicalOrExpression_12Context *_localctx = _tracker.createInstance<Pnf_part_logicalOrExpression_12Context>(_ctx, getState());
  enterRule(_localctx, 244, CParser::RulePnf_part_logicalOrExpression_12);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(999);
    match(CParser::OrOr);
    setState(1000);
    pnf_list_left_7();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_multiplicativeExpression_3Context ------------------------------------------------------------------

CParser::Pnf_part_multiplicativeExpression_3Context::Pnf_part_multiplicativeExpression_3Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::CastExpressionContext* CParser::Pnf_part_multiplicativeExpression_3Context::castExpression() {
  return getRuleContext<CParser::CastExpressionContext>(0);
}


size_t CParser::Pnf_part_multiplicativeExpression_3Context::getRuleIndex() const {
  return CParser::RulePnf_part_multiplicativeExpression_3;
}

void CParser::Pnf_part_multiplicativeExpression_3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_multiplicativeExpression_3(this);
}

void CParser::Pnf_part_multiplicativeExpression_3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_multiplicativeExpression_3(this);
}


antlrcpp::Any CParser::Pnf_part_multiplicativeExpression_3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_multiplicativeExpression_3(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_multiplicativeExpression_3Context* CParser::pnf_part_multiplicativeExpression_3() {
  Pnf_part_multiplicativeExpression_3Context *_localctx = _tracker.createInstance<Pnf_part_multiplicativeExpression_3Context>(_ctx, getState());
  enterRule(_localctx, 246, CParser::RulePnf_part_multiplicativeExpression_3);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1008);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Star: {
        enterOuterAlt(_localctx, 1);
        setState(1002);
        match(CParser::Star);
        setState(1003);
        castExpression();
        break;
      }

      case CParser::Div: {
        enterOuterAlt(_localctx, 2);
        setState(1004);
        match(CParser::Div);
        setState(1005);
        castExpression();
        break;
      }

      case CParser::Mod: {
        enterOuterAlt(_localctx, 3);
        setState(1006);
        match(CParser::Mod);
        setState(1007);
        castExpression();
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

//----------------- Pnf_part_parameterTypeList_24Context ------------------------------------------------------------------

CParser::Pnf_part_parameterTypeList_24Context::Pnf_part_parameterTypeList_24Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::Pnf_part_parameterTypeList_24Context::getRuleIndex() const {
  return CParser::RulePnf_part_parameterTypeList_24;
}

void CParser::Pnf_part_parameterTypeList_24Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_parameterTypeList_24(this);
}

void CParser::Pnf_part_parameterTypeList_24Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_parameterTypeList_24(this);
}


antlrcpp::Any CParser::Pnf_part_parameterTypeList_24Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_parameterTypeList_24(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_parameterTypeList_24Context* CParser::pnf_part_parameterTypeList_24() {
  Pnf_part_parameterTypeList_24Context *_localctx = _tracker.createInstance<Pnf_part_parameterTypeList_24Context>(_ctx, getState());
  enterRule(_localctx, 248, CParser::RulePnf_part_parameterTypeList_24);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1010);
    match(CParser::Comma);
    setState(1011);
    match(CParser::Ellipsis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_postfixExpression_0Context ------------------------------------------------------------------

CParser::Pnf_part_postfixExpression_0Context::Pnf_part_postfixExpression_0Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_8Context* CParser::Pnf_part_postfixExpression_0Context::pnf_list_left_8() {
  return getRuleContext<CParser::Pnf_list_left_8Context>(0);
}

CParser::Pnf_option_gccAttribute_block_1_36Context* CParser::Pnf_part_postfixExpression_0Context::pnf_option_gccAttribute_block_1_36() {
  return getRuleContext<CParser::Pnf_option_gccAttribute_block_1_36Context>(0);
}

tree::TerminalNode* CParser::Pnf_part_postfixExpression_0Context::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::Pnf_part_postfixExpression_0Context::getRuleIndex() const {
  return CParser::RulePnf_part_postfixExpression_0;
}

void CParser::Pnf_part_postfixExpression_0Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_postfixExpression_0(this);
}

void CParser::Pnf_part_postfixExpression_0Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_postfixExpression_0(this);
}


antlrcpp::Any CParser::Pnf_part_postfixExpression_0Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_postfixExpression_0(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_postfixExpression_0Context* CParser::pnf_part_postfixExpression_0() {
  Pnf_part_postfixExpression_0Context *_localctx = _tracker.createInstance<Pnf_part_postfixExpression_0Context>(_ctx, getState());
  enterRule(_localctx, 250, CParser::RulePnf_part_postfixExpression_0);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1027);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1013);
        match(CParser::LeftBracket);
        setState(1014);
        pnf_list_left_8();
        setState(1015);
        match(CParser::RightBracket);
        break;
      }

      case CParser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1017);
        match(CParser::LeftParen);
        setState(1018);
        pnf_option_gccAttribute_block_1_36();
        setState(1019);
        match(CParser::RightParen);
        break;
      }

      case CParser::Dot: {
        enterOuterAlt(_localctx, 3);
        setState(1021);
        match(CParser::Dot);
        setState(1022);
        match(CParser::Identifier);
        break;
      }

      case CParser::Arrow: {
        enterOuterAlt(_localctx, 4);
        setState(1023);
        match(CParser::Arrow);
        setState(1024);
        match(CParser::Identifier);
        break;
      }

      case CParser::PlusPlus: {
        enterOuterAlt(_localctx, 5);
        setState(1025);
        match(CParser::PlusPlus);
        break;
      }

      case CParser::MinusMinus: {
        enterOuterAlt(_localctx, 6);
        setState(1026);
        match(CParser::MinusMinus);
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

//----------------- Pnf_part_postfixExpression_1Context ------------------------------------------------------------------

CParser::Pnf_part_postfixExpression_1Context::Pnf_part_postfixExpression_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::Pnf_part_postfixExpression_1Context::getRuleIndex() const {
  return CParser::RulePnf_part_postfixExpression_1;
}

void CParser::Pnf_part_postfixExpression_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_postfixExpression_1(this);
}

void CParser::Pnf_part_postfixExpression_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_postfixExpression_1(this);
}


antlrcpp::Any CParser::Pnf_part_postfixExpression_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_postfixExpression_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_postfixExpression_1Context* CParser::pnf_part_postfixExpression_1() {
  Pnf_part_postfixExpression_1Context *_localctx = _tracker.createInstance<Pnf_part_postfixExpression_1Context>(_ctx, getState());
  enterRule(_localctx, 252, CParser::RulePnf_part_postfixExpression_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1029);
    match(CParser::Comma);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_postfixExpression_101Context ------------------------------------------------------------------

CParser::Pnf_part_postfixExpression_101Context::Pnf_part_postfixExpression_101Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::Pnf_part_postfixExpression_101Context::getRuleIndex() const {
  return CParser::RulePnf_part_postfixExpression_101;
}

void CParser::Pnf_part_postfixExpression_101Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_postfixExpression_101(this);
}

void CParser::Pnf_part_postfixExpression_101Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_postfixExpression_101(this);
}


antlrcpp::Any CParser::Pnf_part_postfixExpression_101Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_postfixExpression_101(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_postfixExpression_101Context* CParser::pnf_part_postfixExpression_101() {
  Pnf_part_postfixExpression_101Context *_localctx = _tracker.createInstance<Pnf_part_postfixExpression_101Context>(_ctx, getState());
  enterRule(_localctx, 254, CParser::RulePnf_part_postfixExpression_101);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1031);
    match(CParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_part_relationalExpression_6Context ------------------------------------------------------------------

CParser::Pnf_part_relationalExpression_6Context::Pnf_part_relationalExpression_6Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ShiftExpressionContext* CParser::Pnf_part_relationalExpression_6Context::shiftExpression() {
  return getRuleContext<CParser::ShiftExpressionContext>(0);
}


size_t CParser::Pnf_part_relationalExpression_6Context::getRuleIndex() const {
  return CParser::RulePnf_part_relationalExpression_6;
}

void CParser::Pnf_part_relationalExpression_6Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_relationalExpression_6(this);
}

void CParser::Pnf_part_relationalExpression_6Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_relationalExpression_6(this);
}


antlrcpp::Any CParser::Pnf_part_relationalExpression_6Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_relationalExpression_6(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_relationalExpression_6Context* CParser::pnf_part_relationalExpression_6() {
  Pnf_part_relationalExpression_6Context *_localctx = _tracker.createInstance<Pnf_part_relationalExpression_6Context>(_ctx, getState());
  enterRule(_localctx, 256, CParser::RulePnf_part_relationalExpression_6);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1041);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Less: {
        enterOuterAlt(_localctx, 1);
        setState(1033);
        match(CParser::Less);
        setState(1034);
        shiftExpression();
        break;
      }

      case CParser::Greater: {
        enterOuterAlt(_localctx, 2);
        setState(1035);
        match(CParser::Greater);
        setState(1036);
        shiftExpression();
        break;
      }

      case CParser::LessEqual: {
        enterOuterAlt(_localctx, 3);
        setState(1037);
        match(CParser::LessEqual);
        setState(1038);
        shiftExpression();
        break;
      }

      case CParser::GreaterEqual: {
        enterOuterAlt(_localctx, 4);
        setState(1039);
        match(CParser::GreaterEqual);
        setState(1040);
        shiftExpression();
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

//----------------- Pnf_part_shiftExpression_5Context ------------------------------------------------------------------

CParser::Pnf_part_shiftExpression_5Context::Pnf_part_shiftExpression_5Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AdditiveExpressionContext* CParser::Pnf_part_shiftExpression_5Context::additiveExpression() {
  return getRuleContext<CParser::AdditiveExpressionContext>(0);
}


size_t CParser::Pnf_part_shiftExpression_5Context::getRuleIndex() const {
  return CParser::RulePnf_part_shiftExpression_5;
}

void CParser::Pnf_part_shiftExpression_5Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_shiftExpression_5(this);
}

void CParser::Pnf_part_shiftExpression_5Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_shiftExpression_5(this);
}


antlrcpp::Any CParser::Pnf_part_shiftExpression_5Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_shiftExpression_5(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_shiftExpression_5Context* CParser::pnf_part_shiftExpression_5() {
  Pnf_part_shiftExpression_5Context *_localctx = _tracker.createInstance<Pnf_part_shiftExpression_5Context>(_ctx, getState());
  enterRule(_localctx, 258, CParser::RulePnf_part_shiftExpression_5);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1047);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::LeftShift: {
        enterOuterAlt(_localctx, 1);
        setState(1043);
        match(CParser::LeftShift);
        setState(1044);
        additiveExpression();
        break;
      }

      case CParser::RightShift: {
        enterOuterAlt(_localctx, 2);
        setState(1045);
        match(CParser::RightShift);
        setState(1046);
        additiveExpression();
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

//----------------- Pnf_part_statement_100Context ------------------------------------------------------------------

CParser::Pnf_part_statement_100Context::Pnf_part_statement_100Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::Pnf_part_statement_100Context::Identifier() {
  return getToken(CParser::Identifier, 0);
}

CParser::ConditionalExpressionContext* CParser::Pnf_part_statement_100Context::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}

CParser::Pnf_list_left_8Context* CParser::Pnf_part_statement_100Context::pnf_list_left_8() {
  return getRuleContext<CParser::Pnf_list_left_8Context>(0);
}

std::vector<CParser::Pnf_option_conditionalExpression_block_1_34Context *> CParser::Pnf_part_statement_100Context::pnf_option_conditionalExpression_block_1_34() {
  return getRuleContexts<CParser::Pnf_option_conditionalExpression_block_1_34Context>();
}

CParser::Pnf_option_conditionalExpression_block_1_34Context* CParser::Pnf_part_statement_100Context::pnf_option_conditionalExpression_block_1_34(size_t i) {
  return getRuleContext<CParser::Pnf_option_conditionalExpression_block_1_34Context>(i);
}

CParser::DeclarationContext* CParser::Pnf_part_statement_100Context::declaration() {
  return getRuleContext<CParser::DeclarationContext>(0);
}


size_t CParser::Pnf_part_statement_100Context::getRuleIndex() const {
  return CParser::RulePnf_part_statement_100;
}

void CParser::Pnf_part_statement_100Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_statement_100(this);
}

void CParser::Pnf_part_statement_100Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_statement_100(this);
}


antlrcpp::Any CParser::Pnf_part_statement_100Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_statement_100(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_statement_100Context* CParser::pnf_part_statement_100() {
  Pnf_part_statement_100Context *_localctx = _tracker.createInstance<Pnf_part_statement_100Context>(_ctx, getState());
  enterRule(_localctx, 260, CParser::RulePnf_part_statement_100);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1084);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1049);
      match(CParser::Identifier);
      setState(1050);
      match(CParser::Colon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1051);
      match(CParser::Case);
      setState(1052);
      conditionalExpression();
      setState(1053);
      match(CParser::Colon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1055);
      match(CParser::Default);
      setState(1056);
      match(CParser::Colon);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1057);
      match(CParser::Switch);
      setState(1058);
      match(CParser::LeftParen);
      setState(1059);
      pnf_list_left_8();
      setState(1060);
      match(CParser::RightParen);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1062);
      match(CParser::While);
      setState(1063);
      match(CParser::LeftParen);
      setState(1064);
      pnf_list_left_8();
      setState(1065);
      match(CParser::RightParen);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1067);
      match(CParser::For);
      setState(1068);
      match(CParser::LeftParen);
      setState(1069);
      pnf_option_conditionalExpression_block_1_34();
      setState(1070);
      match(CParser::Semi);
      setState(1071);
      pnf_option_conditionalExpression_block_1_34();
      setState(1072);
      match(CParser::Semi);
      setState(1073);
      pnf_option_conditionalExpression_block_1_34();
      setState(1074);
      match(CParser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1076);
      match(CParser::For);
      setState(1077);
      match(CParser::LeftParen);
      setState(1078);
      declaration();
      setState(1079);
      pnf_option_conditionalExpression_block_1_34();
      setState(1080);
      match(CParser::Semi);
      setState(1081);
      pnf_option_conditionalExpression_block_1_34();
      setState(1082);
      match(CParser::RightParen);
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

//----------------- Pnf_part_unaryExpression_104Context ------------------------------------------------------------------

CParser::Pnf_part_unaryExpression_104Context::Pnf_part_unaryExpression_104Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::UnaryOperatorContext* CParser::Pnf_part_unaryExpression_104Context::unaryOperator() {
  return getRuleContext<CParser::UnaryOperatorContext>(0);
}

CParser::Pnf_star_castExpression_107Context* CParser::Pnf_part_unaryExpression_104Context::pnf_star_castExpression_107() {
  return getRuleContext<CParser::Pnf_star_castExpression_107Context>(0);
}

CParser::UnaryExpression_block_2Context* CParser::Pnf_part_unaryExpression_104Context::unaryExpression_block_2() {
  return getRuleContext<CParser::UnaryExpression_block_2Context>(0);
}


size_t CParser::Pnf_part_unaryExpression_104Context::getRuleIndex() const {
  return CParser::RulePnf_part_unaryExpression_104;
}

void CParser::Pnf_part_unaryExpression_104Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_part_unaryExpression_104(this);
}

void CParser::Pnf_part_unaryExpression_104Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_part_unaryExpression_104(this);
}


antlrcpp::Any CParser::Pnf_part_unaryExpression_104Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_part_unaryExpression_104(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_part_unaryExpression_104Context* CParser::pnf_part_unaryExpression_104() {
  Pnf_part_unaryExpression_104Context *_localctx = _tracker.createInstance<Pnf_part_unaryExpression_104Context>(_ctx, getState());
  enterRule(_localctx, 262, CParser::RulePnf_part_unaryExpression_104);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1093);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::PlusPlus: {
        enterOuterAlt(_localctx, 1);
        setState(1086);
        match(CParser::PlusPlus);
        break;
      }

      case CParser::MinusMinus: {
        enterOuterAlt(_localctx, 2);
        setState(1087);
        match(CParser::MinusMinus);
        break;
      }

      case CParser::Plus:
      case CParser::Minus:
      case CParser::Star:
      case CParser::And:
      case CParser::Not:
      case CParser::Tilde: {
        enterOuterAlt(_localctx, 3);
        setState(1088);
        unaryOperator();
        setState(1089);
        pnf_star_castExpression_107();
        break;
      }

      case CParser::Sizeof: {
        enterOuterAlt(_localctx, 4);
        setState(1091);
        match(CParser::Sizeof);
        break;
      }

      case CParser::RealPart:
      case CParser::ImaginaryPart: {
        enterOuterAlt(_localctx, 5);
        setState(1092);
        unaryExpression_block_2();
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

//----------------- Pnf_plus_blockItemList_29Context ------------------------------------------------------------------

CParser::Pnf_plus_blockItemList_29Context::Pnf_plus_blockItemList_29Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::BlockItemContext *> CParser::Pnf_plus_blockItemList_29Context::blockItem() {
  return getRuleContexts<CParser::BlockItemContext>();
}

CParser::BlockItemContext* CParser::Pnf_plus_blockItemList_29Context::blockItem(size_t i) {
  return getRuleContext<CParser::BlockItemContext>(i);
}


size_t CParser::Pnf_plus_blockItemList_29Context::getRuleIndex() const {
  return CParser::RulePnf_plus_blockItemList_29;
}

void CParser::Pnf_plus_blockItemList_29Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_plus_blockItemList_29(this);
}

void CParser::Pnf_plus_blockItemList_29Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_plus_blockItemList_29(this);
}


antlrcpp::Any CParser::Pnf_plus_blockItemList_29Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_plus_blockItemList_29(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_plus_blockItemList_29Context* CParser::pnf_plus_blockItemList_29() {
  Pnf_plus_blockItemList_29Context *_localctx = _tracker.createInstance<Pnf_plus_blockItemList_29Context>(_ctx, getState());
  enterRule(_localctx, 264, CParser::RulePnf_plus_blockItemList_29);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1096); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1095);
      blockItem();
      setState(1098); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__10)
      | (1ULL << CParser::T__11)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::T__19)
      | (1ULL << CParser::T__20)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Break)
      | (1ULL << CParser::Case)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Continue)
      | (1ULL << CParser::Default)
      | (1ULL << CParser::Do)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::For)
      | (1ULL << CParser::Goto)
      | (1ULL << CParser::If)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Return)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Sizeof)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Switch)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::While)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Alignof)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Generic)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::StaticAssert - 64))
      | (1ULL << (CParser::ThreadLocal - 64))
      | (1ULL << (CParser::LeftParen - 64))
      | (1ULL << (CParser::LeftBrace - 64))
      | (1ULL << (CParser::Plus - 64))
      | (1ULL << (CParser::PlusPlus - 64))
      | (1ULL << (CParser::Minus - 64))
      | (1ULL << (CParser::MinusMinus - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::And - 64))
      | (1ULL << (CParser::AndAnd - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Not - 64))
      | (1ULL << (CParser::Tilde - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::RealPart - 64))
      | (1ULL << (CParser::ImaginaryPart - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::Constant - 64))
      | (1ULL << (CParser::StringLiteral - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_plus_declarationList_33Context ------------------------------------------------------------------

CParser::Pnf_plus_declarationList_33Context::Pnf_plus_declarationList_33Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::DeclarationContext *> CParser::Pnf_plus_declarationList_33Context::declaration() {
  return getRuleContexts<CParser::DeclarationContext>();
}

CParser::DeclarationContext* CParser::Pnf_plus_declarationList_33Context::declaration(size_t i) {
  return getRuleContext<CParser::DeclarationContext>(i);
}


size_t CParser::Pnf_plus_declarationList_33Context::getRuleIndex() const {
  return CParser::RulePnf_plus_declarationList_33;
}

void CParser::Pnf_plus_declarationList_33Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_plus_declarationList_33(this);
}

void CParser::Pnf_plus_declarationList_33Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_plus_declarationList_33(this);
}


antlrcpp::Any CParser::Pnf_plus_declarationList_33Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_plus_declarationList_33(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_plus_declarationList_33Context* CParser::pnf_plus_declarationList_33() {
  Pnf_plus_declarationList_33Context *_localctx = _tracker.createInstance<Pnf_plus_declarationList_33Context>(_ctx, getState());
  enterRule(_localctx, 266, CParser::RulePnf_plus_declarationList_33);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1101); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1100);
      declaration();
      setState(1103); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::StaticAssert - 64))
      | (1ULL << (CParser::ThreadLocal - 64))
      | (1ULL << (CParser::Identifier - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_plus_declarationSpecifiers2_76Context ------------------------------------------------------------------

CParser::Pnf_plus_declarationSpecifiers2_76Context::Pnf_plus_declarationSpecifiers2_76Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::DeclarationSpecifierContext *> CParser::Pnf_plus_declarationSpecifiers2_76Context::declarationSpecifier() {
  return getRuleContexts<CParser::DeclarationSpecifierContext>();
}

CParser::DeclarationSpecifierContext* CParser::Pnf_plus_declarationSpecifiers2_76Context::declarationSpecifier(size_t i) {
  return getRuleContext<CParser::DeclarationSpecifierContext>(i);
}


size_t CParser::Pnf_plus_declarationSpecifiers2_76Context::getRuleIndex() const {
  return CParser::RulePnf_plus_declarationSpecifiers2_76;
}

void CParser::Pnf_plus_declarationSpecifiers2_76Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_plus_declarationSpecifiers2_76(this);
}

void CParser::Pnf_plus_declarationSpecifiers2_76Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_plus_declarationSpecifiers2_76(this);
}


antlrcpp::Any CParser::Pnf_plus_declarationSpecifiers2_76Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_plus_declarationSpecifiers2_76(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_plus_declarationSpecifiers2_76Context* CParser::pnf_plus_declarationSpecifiers2_76() {
  Pnf_plus_declarationSpecifiers2_76Context *_localctx = _tracker.createInstance<Pnf_plus_declarationSpecifiers2_76Context>(_ctx, getState());
  enterRule(_localctx, 268, CParser::RulePnf_plus_declarationSpecifiers2_76);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1106); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1105);
      declarationSpecifier();
      setState(1108); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || _la == CParser::ThreadLocal

    || _la == CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_plus_designatorList_28Context ------------------------------------------------------------------

CParser::Pnf_plus_designatorList_28Context::Pnf_plus_designatorList_28Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::DesignatorContext *> CParser::Pnf_plus_designatorList_28Context::designator() {
  return getRuleContexts<CParser::DesignatorContext>();
}

CParser::DesignatorContext* CParser::Pnf_plus_designatorList_28Context::designator(size_t i) {
  return getRuleContext<CParser::DesignatorContext>(i);
}


size_t CParser::Pnf_plus_designatorList_28Context::getRuleIndex() const {
  return CParser::RulePnf_plus_designatorList_28;
}

void CParser::Pnf_plus_designatorList_28Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_plus_designatorList_28(this);
}

void CParser::Pnf_plus_designatorList_28Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_plus_designatorList_28(this);
}


antlrcpp::Any CParser::Pnf_plus_designatorList_28Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_plus_designatorList_28(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_plus_designatorList_28Context* CParser::pnf_plus_designatorList_28() {
  Pnf_plus_designatorList_28Context *_localctx = _tracker.createInstance<Pnf_plus_designatorList_28Context>(_ctx, getState());
  enterRule(_localctx, 270, CParser::RulePnf_plus_designatorList_28);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1111); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1110);
      designator();
      setState(1113); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CParser::LeftBracket

    || _la == CParser::Dot);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_plus_primaryExpression_40Context ------------------------------------------------------------------

CParser::Pnf_plus_primaryExpression_40Context::Pnf_plus_primaryExpression_40Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CParser::Pnf_plus_primaryExpression_40Context::StringLiteral() {
  return getTokens(CParser::StringLiteral);
}

tree::TerminalNode* CParser::Pnf_plus_primaryExpression_40Context::StringLiteral(size_t i) {
  return getToken(CParser::StringLiteral, i);
}


size_t CParser::Pnf_plus_primaryExpression_40Context::getRuleIndex() const {
  return CParser::RulePnf_plus_primaryExpression_40;
}

void CParser::Pnf_plus_primaryExpression_40Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_plus_primaryExpression_40(this);
}

void CParser::Pnf_plus_primaryExpression_40Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_plus_primaryExpression_40(this);
}


antlrcpp::Any CParser::Pnf_plus_primaryExpression_40Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_plus_primaryExpression_40(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_plus_primaryExpression_40Context* CParser::pnf_plus_primaryExpression_40() {
  Pnf_plus_primaryExpression_40Context *_localctx = _tracker.createInstance<Pnf_plus_primaryExpression_40Context>(_ctx, getState());
  enterRule(_localctx, 272, CParser::RulePnf_plus_primaryExpression_40);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1116); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1115);
      match(CParser::StringLiteral);
      setState(1118); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_plus_translationUnit_32Context ------------------------------------------------------------------

CParser::Pnf_plus_translationUnit_32Context::Pnf_plus_translationUnit_32Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::ExternalDeclarationContext *> CParser::Pnf_plus_translationUnit_32Context::externalDeclaration() {
  return getRuleContexts<CParser::ExternalDeclarationContext>();
}

CParser::ExternalDeclarationContext* CParser::Pnf_plus_translationUnit_32Context::externalDeclaration(size_t i) {
  return getRuleContext<CParser::ExternalDeclarationContext>(i);
}


size_t CParser::Pnf_plus_translationUnit_32Context::getRuleIndex() const {
  return CParser::RulePnf_plus_translationUnit_32;
}

void CParser::Pnf_plus_translationUnit_32Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_plus_translationUnit_32(this);
}

void CParser::Pnf_plus_translationUnit_32Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_plus_translationUnit_32(this);
}


antlrcpp::Any CParser::Pnf_plus_translationUnit_32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_plus_translationUnit_32(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_plus_translationUnit_32Context* CParser::pnf_plus_translationUnit_32() {
  Pnf_plus_translationUnit_32Context *_localctx = _tracker.createInstance<Pnf_plus_translationUnit_32Context>(_ctx, getState());
  enterRule(_localctx, 274, CParser::RulePnf_plus_translationUnit_32);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1121); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1120);
      externalDeclaration();
      setState(1123); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__3)
      | (1ULL << CParser::T__4)
      | (1ULL << CParser::T__5)
      | (1ULL << CParser::T__6)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Auto)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Extern)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Inline)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Register)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Static)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Typedef)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Alignas)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary)
      | (1ULL << CParser::Noreturn))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CParser::StaticAssert - 64))
      | (1ULL << (CParser::ThreadLocal - 64))
      | (1ULL << (CParser::LeftParen - 64))
      | (1ULL << (CParser::Star - 64))
      | (1ULL << (CParser::Caret - 64))
      | (1ULL << (CParser::Semi - 64))
      | (1ULL << (CParser::Identifier - 64))
      | (1ULL << (CParser::IncludeDirective - 64))
      | (1ULL << (CParser::PragmaDirective - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_plus_typeQualifierList_23Context ------------------------------------------------------------------

CParser::Pnf_plus_typeQualifierList_23Context::Pnf_plus_typeQualifierList_23Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::TypeQualifierContext *> CParser::Pnf_plus_typeQualifierList_23Context::typeQualifier() {
  return getRuleContexts<CParser::TypeQualifierContext>();
}

CParser::TypeQualifierContext* CParser::Pnf_plus_typeQualifierList_23Context::typeQualifier(size_t i) {
  return getRuleContext<CParser::TypeQualifierContext>(i);
}


size_t CParser::Pnf_plus_typeQualifierList_23Context::getRuleIndex() const {
  return CParser::RulePnf_plus_typeQualifierList_23;
}

void CParser::Pnf_plus_typeQualifierList_23Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_plus_typeQualifierList_23(this);
}

void CParser::Pnf_plus_typeQualifierList_23Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_plus_typeQualifierList_23(this);
}


antlrcpp::Any CParser::Pnf_plus_typeQualifierList_23Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_plus_typeQualifierList_23(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_plus_typeQualifierList_23Context* CParser::pnf_plus_typeQualifierList_23() {
  Pnf_plus_typeQualifierList_23Context *_localctx = _tracker.createInstance<Pnf_plus_typeQualifierList_23Context>(_ctx, getState());
  enterRule(_localctx, 276, CParser::RulePnf_plus_typeQualifierList_23);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1126); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1125);
              typeQualifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1128); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_additiveExpression_49Context ------------------------------------------------------------------

CParser::Pnf_star_additiveExpression_49Context::Pnf_star_additiveExpression_49Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_additiveExpression_4Context *> CParser::Pnf_star_additiveExpression_49Context::pnf_part_additiveExpression_4() {
  return getRuleContexts<CParser::Pnf_part_additiveExpression_4Context>();
}

CParser::Pnf_part_additiveExpression_4Context* CParser::Pnf_star_additiveExpression_49Context::pnf_part_additiveExpression_4(size_t i) {
  return getRuleContext<CParser::Pnf_part_additiveExpression_4Context>(i);
}


size_t CParser::Pnf_star_additiveExpression_49Context::getRuleIndex() const {
  return CParser::RulePnf_star_additiveExpression_49;
}

void CParser::Pnf_star_additiveExpression_49Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_additiveExpression_49(this);
}

void CParser::Pnf_star_additiveExpression_49Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_additiveExpression_49(this);
}


antlrcpp::Any CParser::Pnf_star_additiveExpression_49Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_additiveExpression_49(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_additiveExpression_49Context* CParser::pnf_star_additiveExpression_49() {
  Pnf_star_additiveExpression_49Context *_localctx = _tracker.createInstance<Pnf_star_additiveExpression_49Context>(_ctx, getState());
  enterRule(_localctx, 278, CParser::RulePnf_star_additiveExpression_49);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1133);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1130);
        pnf_part_additiveExpression_4(); 
      }
      setState(1135);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_andExpression_53Context ------------------------------------------------------------------

CParser::Pnf_star_andExpression_53Context::Pnf_star_andExpression_53Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_andExpression_8Context *> CParser::Pnf_star_andExpression_53Context::pnf_part_andExpression_8() {
  return getRuleContexts<CParser::Pnf_part_andExpression_8Context>();
}

CParser::Pnf_part_andExpression_8Context* CParser::Pnf_star_andExpression_53Context::pnf_part_andExpression_8(size_t i) {
  return getRuleContext<CParser::Pnf_part_andExpression_8Context>(i);
}


size_t CParser::Pnf_star_andExpression_53Context::getRuleIndex() const {
  return CParser::RulePnf_star_andExpression_53;
}

void CParser::Pnf_star_andExpression_53Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_andExpression_53(this);
}

void CParser::Pnf_star_andExpression_53Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_andExpression_53(this);
}


antlrcpp::Any CParser::Pnf_star_andExpression_53Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_andExpression_53(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_andExpression_53Context* CParser::pnf_star_andExpression_53() {
  Pnf_star_andExpression_53Context *_localctx = _tracker.createInstance<Pnf_star_andExpression_53Context>(_ctx, getState());
  enterRule(_localctx, 280, CParser::RulePnf_star_andExpression_53);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1139);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1136);
        pnf_part_andExpression_8(); 
      }
      setState(1141);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_argumentExpressionList_47Context ------------------------------------------------------------------

CParser::Pnf_star_argumentExpressionList_47Context::Pnf_star_argumentExpressionList_47Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::ArgumentExpressionList_block_1Context *> CParser::Pnf_star_argumentExpressionList_47Context::argumentExpressionList_block_1() {
  return getRuleContexts<CParser::ArgumentExpressionList_block_1Context>();
}

CParser::ArgumentExpressionList_block_1Context* CParser::Pnf_star_argumentExpressionList_47Context::argumentExpressionList_block_1(size_t i) {
  return getRuleContext<CParser::ArgumentExpressionList_block_1Context>(i);
}


size_t CParser::Pnf_star_argumentExpressionList_47Context::getRuleIndex() const {
  return CParser::RulePnf_star_argumentExpressionList_47;
}

void CParser::Pnf_star_argumentExpressionList_47Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_argumentExpressionList_47(this);
}

void CParser::Pnf_star_argumentExpressionList_47Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_argumentExpressionList_47(this);
}


antlrcpp::Any CParser::Pnf_star_argumentExpressionList_47Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_argumentExpressionList_47(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_argumentExpressionList_47Context* CParser::pnf_star_argumentExpressionList_47() {
  Pnf_star_argumentExpressionList_47Context *_localctx = _tracker.createInstance<Pnf_star_argumentExpressionList_47Context>(_ctx, getState());
  enterRule(_localctx, 282, CParser::RulePnf_star_argumentExpressionList_47);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1142);
      argumentExpressionList_block_1();
      setState(1147);
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

//----------------- Pnf_star_assignmentExpression_105Context ------------------------------------------------------------------

CParser::Pnf_star_assignmentExpression_105Context::Pnf_star_assignmentExpression_105Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_assignmentExpression_99Context *> CParser::Pnf_star_assignmentExpression_105Context::pnf_part_assignmentExpression_99() {
  return getRuleContexts<CParser::Pnf_part_assignmentExpression_99Context>();
}

CParser::Pnf_part_assignmentExpression_99Context* CParser::Pnf_star_assignmentExpression_105Context::pnf_part_assignmentExpression_99(size_t i) {
  return getRuleContext<CParser::Pnf_part_assignmentExpression_99Context>(i);
}


size_t CParser::Pnf_star_assignmentExpression_105Context::getRuleIndex() const {
  return CParser::RulePnf_star_assignmentExpression_105;
}

void CParser::Pnf_star_assignmentExpression_105Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_assignmentExpression_105(this);
}

void CParser::Pnf_star_assignmentExpression_105Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_assignmentExpression_105(this);
}


antlrcpp::Any CParser::Pnf_star_assignmentExpression_105Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_assignmentExpression_105(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_assignmentExpression_105Context* CParser::pnf_star_assignmentExpression_105() {
  Pnf_star_assignmentExpression_105Context *_localctx = _tracker.createInstance<Pnf_star_assignmentExpression_105Context>(_ctx, getState());
  enterRule(_localctx, 284, CParser::RulePnf_star_assignmentExpression_105);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1151);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1148);
        pnf_part_assignmentExpression_99(); 
      }
      setState(1153);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_castExpression_107Context ------------------------------------------------------------------

CParser::Pnf_star_castExpression_107Context::Pnf_star_castExpression_107Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_castExpression_103Context *> CParser::Pnf_star_castExpression_107Context::pnf_part_castExpression_103() {
  return getRuleContexts<CParser::Pnf_part_castExpression_103Context>();
}

CParser::Pnf_part_castExpression_103Context* CParser::Pnf_star_castExpression_107Context::pnf_part_castExpression_103(size_t i) {
  return getRuleContext<CParser::Pnf_part_castExpression_103Context>(i);
}


size_t CParser::Pnf_star_castExpression_107Context::getRuleIndex() const {
  return CParser::RulePnf_star_castExpression_107;
}

void CParser::Pnf_star_castExpression_107Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_castExpression_107(this);
}

void CParser::Pnf_star_castExpression_107Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_castExpression_107(this);
}


antlrcpp::Any CParser::Pnf_star_castExpression_107Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_castExpression_107(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_castExpression_107Context* CParser::pnf_star_castExpression_107() {
  Pnf_star_castExpression_107Context *_localctx = _tracker.createInstance<Pnf_star_castExpression_107Context>(_ctx, getState());
  enterRule(_localctx, 286, CParser::RulePnf_star_castExpression_107);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1157);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1154);
        pnf_part_castExpression_103(); 
      }
      setState(1159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_declarationSpecifiers_59Context ------------------------------------------------------------------

CParser::Pnf_star_declarationSpecifiers_59Context::Pnf_star_declarationSpecifiers_59Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::DeclarationSpecifierContext *> CParser::Pnf_star_declarationSpecifiers_59Context::declarationSpecifier() {
  return getRuleContexts<CParser::DeclarationSpecifierContext>();
}

CParser::DeclarationSpecifierContext* CParser::Pnf_star_declarationSpecifiers_59Context::declarationSpecifier(size_t i) {
  return getRuleContext<CParser::DeclarationSpecifierContext>(i);
}


size_t CParser::Pnf_star_declarationSpecifiers_59Context::getRuleIndex() const {
  return CParser::RulePnf_star_declarationSpecifiers_59;
}

void CParser::Pnf_star_declarationSpecifiers_59Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_declarationSpecifiers_59(this);
}

void CParser::Pnf_star_declarationSpecifiers_59Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_declarationSpecifiers_59(this);
}


antlrcpp::Any CParser::Pnf_star_declarationSpecifiers_59Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_declarationSpecifiers_59(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_declarationSpecifiers_59Context* CParser::pnf_star_declarationSpecifiers_59() {
  Pnf_star_declarationSpecifiers_59Context *_localctx = _tracker.createInstance<Pnf_star_declarationSpecifiers_59Context>(_ctx, getState());
  enterRule(_localctx, 288, CParser::RulePnf_star_declarationSpecifiers_59);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1163);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1160);
        declarationSpecifier(); 
      }
      setState(1165);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_declarationSpecifiers_60Context ------------------------------------------------------------------

CParser::Pnf_star_declarationSpecifiers_60Context::Pnf_star_declarationSpecifiers_60Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::PointerContext *> CParser::Pnf_star_declarationSpecifiers_60Context::pointer() {
  return getRuleContexts<CParser::PointerContext>();
}

CParser::PointerContext* CParser::Pnf_star_declarationSpecifiers_60Context::pointer(size_t i) {
  return getRuleContext<CParser::PointerContext>(i);
}


size_t CParser::Pnf_star_declarationSpecifiers_60Context::getRuleIndex() const {
  return CParser::RulePnf_star_declarationSpecifiers_60;
}

void CParser::Pnf_star_declarationSpecifiers_60Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_declarationSpecifiers_60(this);
}

void CParser::Pnf_star_declarationSpecifiers_60Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_declarationSpecifiers_60(this);
}


antlrcpp::Any CParser::Pnf_star_declarationSpecifiers_60Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_declarationSpecifiers_60(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_declarationSpecifiers_60Context* CParser::pnf_star_declarationSpecifiers_60() {
  Pnf_star_declarationSpecifiers_60Context *_localctx = _tracker.createInstance<Pnf_star_declarationSpecifiers_60Context>(_ctx, getState());
  enterRule(_localctx, 290, CParser::RulePnf_star_declarationSpecifiers_60);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1169);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1166);
        pointer(); 
      }
      setState(1171);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_declarator_63Context ------------------------------------------------------------------

CParser::Pnf_star_declarator_63Context::Pnf_star_declarator_63Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::GccDeclaratorExtensionContext *> CParser::Pnf_star_declarator_63Context::gccDeclaratorExtension() {
  return getRuleContexts<CParser::GccDeclaratorExtensionContext>();
}

CParser::GccDeclaratorExtensionContext* CParser::Pnf_star_declarator_63Context::gccDeclaratorExtension(size_t i) {
  return getRuleContext<CParser::GccDeclaratorExtensionContext>(i);
}


size_t CParser::Pnf_star_declarator_63Context::getRuleIndex() const {
  return CParser::RulePnf_star_declarator_63;
}

void CParser::Pnf_star_declarator_63Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_declarator_63(this);
}

void CParser::Pnf_star_declarator_63Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_declarator_63(this);
}


antlrcpp::Any CParser::Pnf_star_declarator_63Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_declarator_63(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_declarator_63Context* CParser::pnf_star_declarator_63() {
  Pnf_star_declarator_63Context *_localctx = _tracker.createInstance<Pnf_star_declarator_63Context>(_ctx, getState());
  enterRule(_localctx, 292, CParser::RulePnf_star_declarator_63);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1172);
        gccDeclaratorExtension(); 
      }
      setState(1177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_directAbstractDeclarator_78Context ------------------------------------------------------------------

CParser::Pnf_star_directAbstractDeclarator_78Context::Pnf_star_directAbstractDeclarator_78Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_directAbstractDeclarator_27Context *> CParser::Pnf_star_directAbstractDeclarator_78Context::pnf_part_directAbstractDeclarator_27() {
  return getRuleContexts<CParser::Pnf_part_directAbstractDeclarator_27Context>();
}

CParser::Pnf_part_directAbstractDeclarator_27Context* CParser::Pnf_star_directAbstractDeclarator_78Context::pnf_part_directAbstractDeclarator_27(size_t i) {
  return getRuleContext<CParser::Pnf_part_directAbstractDeclarator_27Context>(i);
}


size_t CParser::Pnf_star_directAbstractDeclarator_78Context::getRuleIndex() const {
  return CParser::RulePnf_star_directAbstractDeclarator_78;
}

void CParser::Pnf_star_directAbstractDeclarator_78Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_directAbstractDeclarator_78(this);
}

void CParser::Pnf_star_directAbstractDeclarator_78Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_directAbstractDeclarator_78(this);
}


antlrcpp::Any CParser::Pnf_star_directAbstractDeclarator_78Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_directAbstractDeclarator_78(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_directAbstractDeclarator_78Context* CParser::pnf_star_directAbstractDeclarator_78() {
  Pnf_star_directAbstractDeclarator_78Context *_localctx = _tracker.createInstance<Pnf_star_directAbstractDeclarator_78Context>(_ctx, getState());
  enterRule(_localctx, 294, CParser::RulePnf_star_directAbstractDeclarator_78);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::LeftParen

    || _la == CParser::LeftBracket) {
      setState(1178);
      pnf_part_directAbstractDeclarator_27();
      setState(1183);
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

//----------------- Pnf_star_directDeclarator_69Context ------------------------------------------------------------------

CParser::Pnf_star_directDeclarator_69Context::Pnf_star_directDeclarator_69Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_directDeclarator_21Context *> CParser::Pnf_star_directDeclarator_69Context::pnf_part_directDeclarator_21() {
  return getRuleContexts<CParser::Pnf_part_directDeclarator_21Context>();
}

CParser::Pnf_part_directDeclarator_21Context* CParser::Pnf_star_directDeclarator_69Context::pnf_part_directDeclarator_21(size_t i) {
  return getRuleContext<CParser::Pnf_part_directDeclarator_21Context>(i);
}


size_t CParser::Pnf_star_directDeclarator_69Context::getRuleIndex() const {
  return CParser::RulePnf_star_directDeclarator_69;
}

void CParser::Pnf_star_directDeclarator_69Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_directDeclarator_69(this);
}

void CParser::Pnf_star_directDeclarator_69Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_directDeclarator_69(this);
}


antlrcpp::Any CParser::Pnf_star_directDeclarator_69Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_directDeclarator_69(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_directDeclarator_69Context* CParser::pnf_star_directDeclarator_69() {
  Pnf_star_directDeclarator_69Context *_localctx = _tracker.createInstance<Pnf_star_directDeclarator_69Context>(_ctx, getState());
  enterRule(_localctx, 296, CParser::RulePnf_star_directDeclarator_69);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::LeftParen

    || _la == CParser::LeftBracket) {
      setState(1184);
      pnf_part_directDeclarator_21();
      setState(1189);
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

//----------------- Pnf_star_enumeratorList_68Context ------------------------------------------------------------------

CParser::Pnf_star_enumeratorList_68Context::Pnf_star_enumeratorList_68Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::EnumeratorList_block_1Context *> CParser::Pnf_star_enumeratorList_68Context::enumeratorList_block_1() {
  return getRuleContexts<CParser::EnumeratorList_block_1Context>();
}

CParser::EnumeratorList_block_1Context* CParser::Pnf_star_enumeratorList_68Context::enumeratorList_block_1(size_t i) {
  return getRuleContext<CParser::EnumeratorList_block_1Context>(i);
}


size_t CParser::Pnf_star_enumeratorList_68Context::getRuleIndex() const {
  return CParser::RulePnf_star_enumeratorList_68;
}

void CParser::Pnf_star_enumeratorList_68Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_enumeratorList_68(this);
}

void CParser::Pnf_star_enumeratorList_68Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_enumeratorList_68(this);
}


antlrcpp::Any CParser::Pnf_star_enumeratorList_68Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_enumeratorList_68(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_enumeratorList_68Context* CParser::pnf_star_enumeratorList_68() {
  Pnf_star_enumeratorList_68Context *_localctx = _tracker.createInstance<Pnf_star_enumeratorList_68Context>(_ctx, getState());
  enterRule(_localctx, 298, CParser::RulePnf_star_enumeratorList_68);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1193);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1190);
        enumeratorList_block_1(); 
      }
      setState(1195);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_equalityExpression_52Context ------------------------------------------------------------------

CParser::Pnf_star_equalityExpression_52Context::Pnf_star_equalityExpression_52Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_equalityExpression_7Context *> CParser::Pnf_star_equalityExpression_52Context::pnf_part_equalityExpression_7() {
  return getRuleContexts<CParser::Pnf_part_equalityExpression_7Context>();
}

CParser::Pnf_part_equalityExpression_7Context* CParser::Pnf_star_equalityExpression_52Context::pnf_part_equalityExpression_7(size_t i) {
  return getRuleContext<CParser::Pnf_part_equalityExpression_7Context>(i);
}


size_t CParser::Pnf_star_equalityExpression_52Context::getRuleIndex() const {
  return CParser::RulePnf_star_equalityExpression_52;
}

void CParser::Pnf_star_equalityExpression_52Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_equalityExpression_52(this);
}

void CParser::Pnf_star_equalityExpression_52Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_equalityExpression_52(this);
}


antlrcpp::Any CParser::Pnf_star_equalityExpression_52Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_equalityExpression_52(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_equalityExpression_52Context* CParser::pnf_star_equalityExpression_52() {
  Pnf_star_equalityExpression_52Context *_localctx = _tracker.createInstance<Pnf_star_equalityExpression_52Context>(_ctx, getState());
  enterRule(_localctx, 300, CParser::RulePnf_star_equalityExpression_52);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1199);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1196);
        pnf_part_equalityExpression_7(); 
      }
      setState(1201);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_exclusiveOrExpression_54Context ------------------------------------------------------------------

CParser::Pnf_star_exclusiveOrExpression_54Context::Pnf_star_exclusiveOrExpression_54Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_exclusiveOrExpression_9Context *> CParser::Pnf_star_exclusiveOrExpression_54Context::pnf_part_exclusiveOrExpression_9() {
  return getRuleContexts<CParser::Pnf_part_exclusiveOrExpression_9Context>();
}

CParser::Pnf_part_exclusiveOrExpression_9Context* CParser::Pnf_star_exclusiveOrExpression_54Context::pnf_part_exclusiveOrExpression_9(size_t i) {
  return getRuleContext<CParser::Pnf_part_exclusiveOrExpression_9Context>(i);
}


size_t CParser::Pnf_star_exclusiveOrExpression_54Context::getRuleIndex() const {
  return CParser::RulePnf_star_exclusiveOrExpression_54;
}

void CParser::Pnf_star_exclusiveOrExpression_54Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_exclusiveOrExpression_54(this);
}

void CParser::Pnf_star_exclusiveOrExpression_54Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_exclusiveOrExpression_54(this);
}


antlrcpp::Any CParser::Pnf_star_exclusiveOrExpression_54Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_exclusiveOrExpression_54(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_exclusiveOrExpression_54Context* CParser::pnf_star_exclusiveOrExpression_54() {
  Pnf_star_exclusiveOrExpression_54Context *_localctx = _tracker.createInstance<Pnf_star_exclusiveOrExpression_54Context>(_ctx, getState());
  enterRule(_localctx, 302, CParser::RulePnf_star_exclusiveOrExpression_54);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1205);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1202);
        pnf_part_exclusiveOrExpression_9(); 
      }
      setState(1207);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_expression_58Context ------------------------------------------------------------------

CParser::Pnf_star_expression_58Context::Pnf_star_expression_58Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_expression_13Context *> CParser::Pnf_star_expression_58Context::pnf_part_expression_13() {
  return getRuleContexts<CParser::Pnf_part_expression_13Context>();
}

CParser::Pnf_part_expression_13Context* CParser::Pnf_star_expression_58Context::pnf_part_expression_13(size_t i) {
  return getRuleContext<CParser::Pnf_part_expression_13Context>(i);
}


size_t CParser::Pnf_star_expression_58Context::getRuleIndex() const {
  return CParser::RulePnf_star_expression_58;
}

void CParser::Pnf_star_expression_58Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_expression_58(this);
}

void CParser::Pnf_star_expression_58Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_expression_58(this);
}


antlrcpp::Any CParser::Pnf_star_expression_58Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_expression_58(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_expression_58Context* CParser::pnf_star_expression_58() {
  Pnf_star_expression_58Context *_localctx = _tracker.createInstance<Pnf_star_expression_58Context>(_ctx, getState());
  enterRule(_localctx, 304, CParser::RulePnf_star_expression_58);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1208);
      pnf_part_expression_13();
      setState(1213);
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

//----------------- Pnf_star_gccAttributeList_74Context ------------------------------------------------------------------

CParser::Pnf_star_gccAttributeList_74Context::Pnf_star_gccAttributeList_74Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::GccAttributeList_block_1Context *> CParser::Pnf_star_gccAttributeList_74Context::gccAttributeList_block_1() {
  return getRuleContexts<CParser::GccAttributeList_block_1Context>();
}

CParser::GccAttributeList_block_1Context* CParser::Pnf_star_gccAttributeList_74Context::gccAttributeList_block_1(size_t i) {
  return getRuleContext<CParser::GccAttributeList_block_1Context>(i);
}


size_t CParser::Pnf_star_gccAttributeList_74Context::getRuleIndex() const {
  return CParser::RulePnf_star_gccAttributeList_74;
}

void CParser::Pnf_star_gccAttributeList_74Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_gccAttributeList_74(this);
}

void CParser::Pnf_star_gccAttributeList_74Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_gccAttributeList_74(this);
}


antlrcpp::Any CParser::Pnf_star_gccAttributeList_74Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_gccAttributeList_74(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_gccAttributeList_74Context* CParser::pnf_star_gccAttributeList_74() {
  Pnf_star_gccAttributeList_74Context *_localctx = _tracker.createInstance<Pnf_star_gccAttributeList_74Context>(_ctx, getState());
  enterRule(_localctx, 306, CParser::RulePnf_star_gccAttributeList_74);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1214);
      gccAttributeList_block_1();
      setState(1219);
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

//----------------- Pnf_star_genericAssocList_44Context ------------------------------------------------------------------

CParser::Pnf_star_genericAssocList_44Context::Pnf_star_genericAssocList_44Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::GenericAssocList_block_1Context *> CParser::Pnf_star_genericAssocList_44Context::genericAssocList_block_1() {
  return getRuleContexts<CParser::GenericAssocList_block_1Context>();
}

CParser::GenericAssocList_block_1Context* CParser::Pnf_star_genericAssocList_44Context::genericAssocList_block_1(size_t i) {
  return getRuleContext<CParser::GenericAssocList_block_1Context>(i);
}


size_t CParser::Pnf_star_genericAssocList_44Context::getRuleIndex() const {
  return CParser::RulePnf_star_genericAssocList_44;
}

void CParser::Pnf_star_genericAssocList_44Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_genericAssocList_44(this);
}

void CParser::Pnf_star_genericAssocList_44Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_genericAssocList_44(this);
}


antlrcpp::Any CParser::Pnf_star_genericAssocList_44Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_genericAssocList_44(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_genericAssocList_44Context* CParser::pnf_star_genericAssocList_44() {
  Pnf_star_genericAssocList_44Context *_localctx = _tracker.createInstance<Pnf_star_genericAssocList_44Context>(_ctx, getState());
  enterRule(_localctx, 308, CParser::RulePnf_star_genericAssocList_44);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1223);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1220);
      genericAssocList_block_1();
      setState(1225);
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

//----------------- Pnf_star_identifierList_37Context ------------------------------------------------------------------

CParser::Pnf_star_identifierList_37Context::Pnf_star_identifierList_37Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::IdentifierList_block_1Context *> CParser::Pnf_star_identifierList_37Context::identifierList_block_1() {
  return getRuleContexts<CParser::IdentifierList_block_1Context>();
}

CParser::IdentifierList_block_1Context* CParser::Pnf_star_identifierList_37Context::identifierList_block_1(size_t i) {
  return getRuleContext<CParser::IdentifierList_block_1Context>(i);
}


size_t CParser::Pnf_star_identifierList_37Context::getRuleIndex() const {
  return CParser::RulePnf_star_identifierList_37;
}

void CParser::Pnf_star_identifierList_37Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_identifierList_37(this);
}

void CParser::Pnf_star_identifierList_37Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_identifierList_37(this);
}


antlrcpp::Any CParser::Pnf_star_identifierList_37Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_identifierList_37(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_identifierList_37Context* CParser::pnf_star_identifierList_37() {
  Pnf_star_identifierList_37Context *_localctx = _tracker.createInstance<Pnf_star_identifierList_37Context>(_ctx, getState());
  enterRule(_localctx, 310, CParser::RulePnf_star_identifierList_37);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1226);
      identifierList_block_1();
      setState(1231);
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

//----------------- Pnf_star_inclusiveOrExpression_55Context ------------------------------------------------------------------

CParser::Pnf_star_inclusiveOrExpression_55Context::Pnf_star_inclusiveOrExpression_55Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_inclusiveOrExpression_10Context *> CParser::Pnf_star_inclusiveOrExpression_55Context::pnf_part_inclusiveOrExpression_10() {
  return getRuleContexts<CParser::Pnf_part_inclusiveOrExpression_10Context>();
}

CParser::Pnf_part_inclusiveOrExpression_10Context* CParser::Pnf_star_inclusiveOrExpression_55Context::pnf_part_inclusiveOrExpression_10(size_t i) {
  return getRuleContext<CParser::Pnf_part_inclusiveOrExpression_10Context>(i);
}


size_t CParser::Pnf_star_inclusiveOrExpression_55Context::getRuleIndex() const {
  return CParser::RulePnf_star_inclusiveOrExpression_55;
}

void CParser::Pnf_star_inclusiveOrExpression_55Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_inclusiveOrExpression_55(this);
}

void CParser::Pnf_star_inclusiveOrExpression_55Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_inclusiveOrExpression_55(this);
}


antlrcpp::Any CParser::Pnf_star_inclusiveOrExpression_55Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_inclusiveOrExpression_55(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_inclusiveOrExpression_55Context* CParser::pnf_star_inclusiveOrExpression_55() {
  Pnf_star_inclusiveOrExpression_55Context *_localctx = _tracker.createInstance<Pnf_star_inclusiveOrExpression_55Context>(_ctx, getState());
  enterRule(_localctx, 312, CParser::RulePnf_star_inclusiveOrExpression_55);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1235);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1232);
        pnf_part_inclusiveOrExpression_10(); 
      }
      setState(1237);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_initDeclaratorList_64Context ------------------------------------------------------------------

CParser::Pnf_star_initDeclaratorList_64Context::Pnf_star_initDeclaratorList_64Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::InitDeclaratorList_block_1Context *> CParser::Pnf_star_initDeclaratorList_64Context::initDeclaratorList_block_1() {
  return getRuleContexts<CParser::InitDeclaratorList_block_1Context>();
}

CParser::InitDeclaratorList_block_1Context* CParser::Pnf_star_initDeclaratorList_64Context::initDeclaratorList_block_1(size_t i) {
  return getRuleContext<CParser::InitDeclaratorList_block_1Context>(i);
}


size_t CParser::Pnf_star_initDeclaratorList_64Context::getRuleIndex() const {
  return CParser::RulePnf_star_initDeclaratorList_64;
}

void CParser::Pnf_star_initDeclaratorList_64Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_initDeclaratorList_64(this);
}

void CParser::Pnf_star_initDeclaratorList_64Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_initDeclaratorList_64(this);
}


antlrcpp::Any CParser::Pnf_star_initDeclaratorList_64Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_initDeclaratorList_64(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_initDeclaratorList_64Context* CParser::pnf_star_initDeclaratorList_64() {
  Pnf_star_initDeclaratorList_64Context *_localctx = _tracker.createInstance<Pnf_star_initDeclaratorList_64Context>(_ctx, getState());
  enterRule(_localctx, 314, CParser::RulePnf_star_initDeclaratorList_64);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1241);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1238);
      initDeclaratorList_block_1();
      setState(1243);
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

//----------------- Pnf_star_initializerList_80Context ------------------------------------------------------------------

CParser::Pnf_star_initializerList_80Context::Pnf_star_initializerList_80Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::InitializerList_block_1Context *> CParser::Pnf_star_initializerList_80Context::initializerList_block_1() {
  return getRuleContexts<CParser::InitializerList_block_1Context>();
}

CParser::InitializerList_block_1Context* CParser::Pnf_star_initializerList_80Context::initializerList_block_1(size_t i) {
  return getRuleContext<CParser::InitializerList_block_1Context>(i);
}


size_t CParser::Pnf_star_initializerList_80Context::getRuleIndex() const {
  return CParser::RulePnf_star_initializerList_80;
}

void CParser::Pnf_star_initializerList_80Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_initializerList_80(this);
}

void CParser::Pnf_star_initializerList_80Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_initializerList_80(this);
}


antlrcpp::Any CParser::Pnf_star_initializerList_80Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_initializerList_80(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_initializerList_80Context* CParser::pnf_star_initializerList_80() {
  Pnf_star_initializerList_80Context *_localctx = _tracker.createInstance<Pnf_star_initializerList_80Context>(_ctx, getState());
  enterRule(_localctx, 316, CParser::RulePnf_star_initializerList_80);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1247);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1244);
        initializerList_block_1(); 
      }
      setState(1249);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_logicalAndExpression_56Context ------------------------------------------------------------------

CParser::Pnf_star_logicalAndExpression_56Context::Pnf_star_logicalAndExpression_56Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_logicalAndExpression_11Context *> CParser::Pnf_star_logicalAndExpression_56Context::pnf_part_logicalAndExpression_11() {
  return getRuleContexts<CParser::Pnf_part_logicalAndExpression_11Context>();
}

CParser::Pnf_part_logicalAndExpression_11Context* CParser::Pnf_star_logicalAndExpression_56Context::pnf_part_logicalAndExpression_11(size_t i) {
  return getRuleContext<CParser::Pnf_part_logicalAndExpression_11Context>(i);
}


size_t CParser::Pnf_star_logicalAndExpression_56Context::getRuleIndex() const {
  return CParser::RulePnf_star_logicalAndExpression_56;
}

void CParser::Pnf_star_logicalAndExpression_56Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_logicalAndExpression_56(this);
}

void CParser::Pnf_star_logicalAndExpression_56Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_logicalAndExpression_56(this);
}


antlrcpp::Any CParser::Pnf_star_logicalAndExpression_56Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_logicalAndExpression_56(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_logicalAndExpression_56Context* CParser::pnf_star_logicalAndExpression_56() {
  Pnf_star_logicalAndExpression_56Context *_localctx = _tracker.createInstance<Pnf_star_logicalAndExpression_56Context>(_ctx, getState());
  enterRule(_localctx, 318, CParser::RulePnf_star_logicalAndExpression_56);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1253);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1250);
        pnf_part_logicalAndExpression_11(); 
      }
      setState(1255);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_logicalOrExpression_57Context ------------------------------------------------------------------

CParser::Pnf_star_logicalOrExpression_57Context::Pnf_star_logicalOrExpression_57Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_logicalOrExpression_12Context *> CParser::Pnf_star_logicalOrExpression_57Context::pnf_part_logicalOrExpression_12() {
  return getRuleContexts<CParser::Pnf_part_logicalOrExpression_12Context>();
}

CParser::Pnf_part_logicalOrExpression_12Context* CParser::Pnf_star_logicalOrExpression_57Context::pnf_part_logicalOrExpression_12(size_t i) {
  return getRuleContext<CParser::Pnf_part_logicalOrExpression_12Context>(i);
}


size_t CParser::Pnf_star_logicalOrExpression_57Context::getRuleIndex() const {
  return CParser::RulePnf_star_logicalOrExpression_57;
}

void CParser::Pnf_star_logicalOrExpression_57Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_logicalOrExpression_57(this);
}

void CParser::Pnf_star_logicalOrExpression_57Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_logicalOrExpression_57(this);
}


antlrcpp::Any CParser::Pnf_star_logicalOrExpression_57Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_logicalOrExpression_57(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_logicalOrExpression_57Context* CParser::pnf_star_logicalOrExpression_57() {
  Pnf_star_logicalOrExpression_57Context *_localctx = _tracker.createInstance<Pnf_star_logicalOrExpression_57Context>(_ctx, getState());
  enterRule(_localctx, 320, CParser::RulePnf_star_logicalOrExpression_57);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1259);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1256);
        pnf_part_logicalOrExpression_12(); 
      }
      setState(1261);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_multiplicativeExpression_48Context ------------------------------------------------------------------

CParser::Pnf_star_multiplicativeExpression_48Context::Pnf_star_multiplicativeExpression_48Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_multiplicativeExpression_3Context *> CParser::Pnf_star_multiplicativeExpression_48Context::pnf_part_multiplicativeExpression_3() {
  return getRuleContexts<CParser::Pnf_part_multiplicativeExpression_3Context>();
}

CParser::Pnf_part_multiplicativeExpression_3Context* CParser::Pnf_star_multiplicativeExpression_48Context::pnf_part_multiplicativeExpression_3(size_t i) {
  return getRuleContext<CParser::Pnf_part_multiplicativeExpression_3Context>(i);
}


size_t CParser::Pnf_star_multiplicativeExpression_48Context::getRuleIndex() const {
  return CParser::RulePnf_star_multiplicativeExpression_48;
}

void CParser::Pnf_star_multiplicativeExpression_48Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_multiplicativeExpression_48(this);
}

void CParser::Pnf_star_multiplicativeExpression_48Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_multiplicativeExpression_48(this);
}


antlrcpp::Any CParser::Pnf_star_multiplicativeExpression_48Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_multiplicativeExpression_48(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_multiplicativeExpression_48Context* CParser::pnf_star_multiplicativeExpression_48() {
  Pnf_star_multiplicativeExpression_48Context *_localctx = _tracker.createInstance<Pnf_star_multiplicativeExpression_48Context>(_ctx, getState());
  enterRule(_localctx, 322, CParser::RulePnf_star_multiplicativeExpression_48);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1265);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1262);
        pnf_part_multiplicativeExpression_3(); 
      }
      setState(1267);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_parameterList_77Context ------------------------------------------------------------------

CParser::Pnf_star_parameterList_77Context::Pnf_star_parameterList_77Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::ParameterList_block_1Context *> CParser::Pnf_star_parameterList_77Context::parameterList_block_1() {
  return getRuleContexts<CParser::ParameterList_block_1Context>();
}

CParser::ParameterList_block_1Context* CParser::Pnf_star_parameterList_77Context::parameterList_block_1(size_t i) {
  return getRuleContext<CParser::ParameterList_block_1Context>(i);
}


size_t CParser::Pnf_star_parameterList_77Context::getRuleIndex() const {
  return CParser::RulePnf_star_parameterList_77;
}

void CParser::Pnf_star_parameterList_77Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_parameterList_77(this);
}

void CParser::Pnf_star_parameterList_77Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_parameterList_77(this);
}


antlrcpp::Any CParser::Pnf_star_parameterList_77Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_parameterList_77(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_parameterList_77Context* CParser::pnf_star_parameterList_77() {
  Pnf_star_parameterList_77Context *_localctx = _tracker.createInstance<Pnf_star_parameterList_77Context>(_ctx, getState());
  enterRule(_localctx, 324, CParser::RulePnf_star_parameterList_77);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1271);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1268);
        parameterList_block_1(); 
      }
      setState(1273);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_postfixExpression_45Context ------------------------------------------------------------------

CParser::Pnf_star_postfixExpression_45Context::Pnf_star_postfixExpression_45Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_postfixExpression_0Context *> CParser::Pnf_star_postfixExpression_45Context::pnf_part_postfixExpression_0() {
  return getRuleContexts<CParser::Pnf_part_postfixExpression_0Context>();
}

CParser::Pnf_part_postfixExpression_0Context* CParser::Pnf_star_postfixExpression_45Context::pnf_part_postfixExpression_0(size_t i) {
  return getRuleContext<CParser::Pnf_part_postfixExpression_0Context>(i);
}


size_t CParser::Pnf_star_postfixExpression_45Context::getRuleIndex() const {
  return CParser::RulePnf_star_postfixExpression_45;
}

void CParser::Pnf_star_postfixExpression_45Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_postfixExpression_45(this);
}

void CParser::Pnf_star_postfixExpression_45Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_postfixExpression_45(this);
}


antlrcpp::Any CParser::Pnf_star_postfixExpression_45Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_postfixExpression_45(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_postfixExpression_45Context* CParser::pnf_star_postfixExpression_45() {
  Pnf_star_postfixExpression_45Context *_localctx = _tracker.createInstance<Pnf_star_postfixExpression_45Context>(_ctx, getState());
  enterRule(_localctx, 326, CParser::RulePnf_star_postfixExpression_45);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1277);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (CParser::LeftParen - 66))
      | (1ULL << (CParser::LeftBracket - 66))
      | (1ULL << (CParser::PlusPlus - 66))
      | (1ULL << (CParser::MinusMinus - 66))
      | (1ULL << (CParser::Arrow - 66))
      | (1ULL << (CParser::Dot - 66)))) != 0)) {
      setState(1274);
      pnf_part_postfixExpression_0();
      setState(1279);
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

//----------------- Pnf_star_relationalExpression_51Context ------------------------------------------------------------------

CParser::Pnf_star_relationalExpression_51Context::Pnf_star_relationalExpression_51Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_relationalExpression_6Context *> CParser::Pnf_star_relationalExpression_51Context::pnf_part_relationalExpression_6() {
  return getRuleContexts<CParser::Pnf_part_relationalExpression_6Context>();
}

CParser::Pnf_part_relationalExpression_6Context* CParser::Pnf_star_relationalExpression_51Context::pnf_part_relationalExpression_6(size_t i) {
  return getRuleContext<CParser::Pnf_part_relationalExpression_6Context>(i);
}


size_t CParser::Pnf_star_relationalExpression_51Context::getRuleIndex() const {
  return CParser::RulePnf_star_relationalExpression_51;
}

void CParser::Pnf_star_relationalExpression_51Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_relationalExpression_51(this);
}

void CParser::Pnf_star_relationalExpression_51Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_relationalExpression_51(this);
}


antlrcpp::Any CParser::Pnf_star_relationalExpression_51Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_relationalExpression_51(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_relationalExpression_51Context* CParser::pnf_star_relationalExpression_51() {
  Pnf_star_relationalExpression_51Context *_localctx = _tracker.createInstance<Pnf_star_relationalExpression_51Context>(_ctx, getState());
  enterRule(_localctx, 328, CParser::RulePnf_star_relationalExpression_51);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1283);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1280);
        pnf_part_relationalExpression_6(); 
      }
      setState(1285);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_shiftExpression_50Context ------------------------------------------------------------------

CParser::Pnf_star_shiftExpression_50Context::Pnf_star_shiftExpression_50Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_shiftExpression_5Context *> CParser::Pnf_star_shiftExpression_50Context::pnf_part_shiftExpression_5() {
  return getRuleContexts<CParser::Pnf_part_shiftExpression_5Context>();
}

CParser::Pnf_part_shiftExpression_5Context* CParser::Pnf_star_shiftExpression_50Context::pnf_part_shiftExpression_5(size_t i) {
  return getRuleContext<CParser::Pnf_part_shiftExpression_5Context>(i);
}


size_t CParser::Pnf_star_shiftExpression_50Context::getRuleIndex() const {
  return CParser::RulePnf_star_shiftExpression_50;
}

void CParser::Pnf_star_shiftExpression_50Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_shiftExpression_50(this);
}

void CParser::Pnf_star_shiftExpression_50Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_shiftExpression_50(this);
}


antlrcpp::Any CParser::Pnf_star_shiftExpression_50Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_shiftExpression_50(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_shiftExpression_50Context* CParser::pnf_star_shiftExpression_50() {
  Pnf_star_shiftExpression_50Context *_localctx = _tracker.createInstance<Pnf_star_shiftExpression_50Context>(_ctx, getState());
  enterRule(_localctx, 330, CParser::RulePnf_star_shiftExpression_50);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1289);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1286);
        pnf_part_shiftExpression_5(); 
      }
      setState(1291);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_statement_106Context ------------------------------------------------------------------

CParser::Pnf_star_statement_106Context::Pnf_star_statement_106Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_statement_100Context *> CParser::Pnf_star_statement_106Context::pnf_part_statement_100() {
  return getRuleContexts<CParser::Pnf_part_statement_100Context>();
}

CParser::Pnf_part_statement_100Context* CParser::Pnf_star_statement_106Context::pnf_part_statement_100(size_t i) {
  return getRuleContext<CParser::Pnf_part_statement_100Context>(i);
}


size_t CParser::Pnf_star_statement_106Context::getRuleIndex() const {
  return CParser::RulePnf_star_statement_106;
}

void CParser::Pnf_star_statement_106Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_statement_106(this);
}

void CParser::Pnf_star_statement_106Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_statement_106(this);
}


antlrcpp::Any CParser::Pnf_star_statement_106Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_statement_106(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_statement_106Context* CParser::pnf_star_statement_106() {
  Pnf_star_statement_106Context *_localctx = _tracker.createInstance<Pnf_star_statement_106Context>(_ctx, getState());
  enterRule(_localctx, 332, CParser::RulePnf_star_statement_106);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1295);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1292);
        pnf_part_statement_100(); 
      }
      setState(1297);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_star_statement_92Context ------------------------------------------------------------------

CParser::Pnf_star_statement_92Context::Pnf_star_statement_92Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Statement_block_6Context *> CParser::Pnf_star_statement_92Context::statement_block_6() {
  return getRuleContexts<CParser::Statement_block_6Context>();
}

CParser::Statement_block_6Context* CParser::Pnf_star_statement_92Context::statement_block_6(size_t i) {
  return getRuleContext<CParser::Statement_block_6Context>(i);
}


size_t CParser::Pnf_star_statement_92Context::getRuleIndex() const {
  return CParser::RulePnf_star_statement_92;
}

void CParser::Pnf_star_statement_92Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_statement_92(this);
}

void CParser::Pnf_star_statement_92Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_statement_92(this);
}


antlrcpp::Any CParser::Pnf_star_statement_92Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_statement_92(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_statement_92Context* CParser::pnf_star_statement_92() {
  Pnf_star_statement_92Context *_localctx = _tracker.createInstance<Pnf_star_statement_92Context>(_ctx, getState());
  enterRule(_localctx, 334, CParser::RulePnf_star_statement_92);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1301);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Colon) {
      setState(1298);
      statement_block_6();
      setState(1303);
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

//----------------- Pnf_star_statement_block_3_85Context ------------------------------------------------------------------

CParser::Pnf_star_statement_block_3_85Context::Pnf_star_statement_block_3_85Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Statement_block_2Context *> CParser::Pnf_star_statement_block_3_85Context::statement_block_2() {
  return getRuleContexts<CParser::Statement_block_2Context>();
}

CParser::Statement_block_2Context* CParser::Pnf_star_statement_block_3_85Context::statement_block_2(size_t i) {
  return getRuleContext<CParser::Statement_block_2Context>(i);
}


size_t CParser::Pnf_star_statement_block_3_85Context::getRuleIndex() const {
  return CParser::RulePnf_star_statement_block_3_85;
}

void CParser::Pnf_star_statement_block_3_85Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_statement_block_3_85(this);
}

void CParser::Pnf_star_statement_block_3_85Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_statement_block_3_85(this);
}


antlrcpp::Any CParser::Pnf_star_statement_block_3_85Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_statement_block_3_85(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_statement_block_3_85Context* CParser::pnf_star_statement_block_3_85() {
  Pnf_star_statement_block_3_85Context *_localctx = _tracker.createInstance<Pnf_star_statement_block_3_85Context>(_ctx, getState());
  enterRule(_localctx, 336, CParser::RulePnf_star_statement_block_3_85);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1304);
      statement_block_2();
      setState(1309);
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

//----------------- Pnf_star_statement_block_5_86Context ------------------------------------------------------------------

CParser::Pnf_star_statement_block_5_86Context::Pnf_star_statement_block_5_86Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Statement_block_4Context *> CParser::Pnf_star_statement_block_5_86Context::statement_block_4() {
  return getRuleContexts<CParser::Statement_block_4Context>();
}

CParser::Statement_block_4Context* CParser::Pnf_star_statement_block_5_86Context::statement_block_4(size_t i) {
  return getRuleContext<CParser::Statement_block_4Context>(i);
}


size_t CParser::Pnf_star_statement_block_5_86Context::getRuleIndex() const {
  return CParser::RulePnf_star_statement_block_5_86;
}

void CParser::Pnf_star_statement_block_5_86Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_statement_block_5_86(this);
}

void CParser::Pnf_star_statement_block_5_86Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_statement_block_5_86(this);
}


antlrcpp::Any CParser::Pnf_star_statement_block_5_86Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_statement_block_5_86(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_statement_block_5_86Context* CParser::pnf_star_statement_block_5_86() {
  Pnf_star_statement_block_5_86Context *_localctx = _tracker.createInstance<Pnf_star_statement_block_5_86Context>(_ctx, getState());
  enterRule(_localctx, 338, CParser::RulePnf_star_statement_block_5_86);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1313);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1310);
      statement_block_4();
      setState(1315);
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

//----------------- Pnf_star_structDeclarationList_35Context ------------------------------------------------------------------

CParser::Pnf_star_structDeclarationList_35Context::Pnf_star_structDeclarationList_35Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::StructDeclarationContext *> CParser::Pnf_star_structDeclarationList_35Context::structDeclaration() {
  return getRuleContexts<CParser::StructDeclarationContext>();
}

CParser::StructDeclarationContext* CParser::Pnf_star_structDeclarationList_35Context::structDeclaration(size_t i) {
  return getRuleContext<CParser::StructDeclarationContext>(i);
}


size_t CParser::Pnf_star_structDeclarationList_35Context::getRuleIndex() const {
  return CParser::RulePnf_star_structDeclarationList_35;
}

void CParser::Pnf_star_structDeclarationList_35Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_structDeclarationList_35(this);
}

void CParser::Pnf_star_structDeclarationList_35Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_structDeclarationList_35(this);
}


antlrcpp::Any CParser::Pnf_star_structDeclarationList_35Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_structDeclarationList_35(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_structDeclarationList_35Context* CParser::pnf_star_structDeclarationList_35() {
  Pnf_star_structDeclarationList_35Context *_localctx = _tracker.createInstance<Pnf_star_structDeclarationList_35Context>(_ctx, getState());
  enterRule(_localctx, 340, CParser::RulePnf_star_structDeclarationList_35);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1319);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__0)
      | (1ULL << CParser::T__1)
      | (1ULL << CParser::T__2)
      | (1ULL << CParser::T__7)
      | (1ULL << CParser::T__8)
      | (1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::T__14)
      | (1ULL << CParser::T__15)
      | (1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Enum)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Struct)
      | (1ULL << CParser::Union)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Atomic)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary))) != 0) || _la == CParser::StaticAssert

    || _la == CParser::Identifier) {
      setState(1316);
      structDeclaration();
      setState(1321);
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

//----------------- Pnf_star_structDeclaratorList_67Context ------------------------------------------------------------------

CParser::Pnf_star_structDeclaratorList_67Context::Pnf_star_structDeclaratorList_67Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::StructDeclaratorList_block_1Context *> CParser::Pnf_star_structDeclaratorList_67Context::structDeclaratorList_block_1() {
  return getRuleContexts<CParser::StructDeclaratorList_block_1Context>();
}

CParser::StructDeclaratorList_block_1Context* CParser::Pnf_star_structDeclaratorList_67Context::structDeclaratorList_block_1(size_t i) {
  return getRuleContext<CParser::StructDeclaratorList_block_1Context>(i);
}


size_t CParser::Pnf_star_structDeclaratorList_67Context::getRuleIndex() const {
  return CParser::RulePnf_star_structDeclaratorList_67;
}

void CParser::Pnf_star_structDeclaratorList_67Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_structDeclaratorList_67(this);
}

void CParser::Pnf_star_structDeclaratorList_67Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_structDeclaratorList_67(this);
}


antlrcpp::Any CParser::Pnf_star_structDeclaratorList_67Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_structDeclaratorList_67(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_structDeclaratorList_67Context* CParser::pnf_star_structDeclaratorList_67() {
  Pnf_star_structDeclaratorList_67Context *_localctx = _tracker.createInstance<Pnf_star_structDeclaratorList_67Context>(_ctx, getState());
  enterRule(_localctx, 342, CParser::RulePnf_star_structDeclaratorList_67);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CParser::Comma) {
      setState(1322);
      structDeclaratorList_block_1();
      setState(1327);
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

//----------------- Pnf_star_unaryExpression_108Context ------------------------------------------------------------------

CParser::Pnf_star_unaryExpression_108Context::Pnf_star_unaryExpression_108Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

std::vector<CParser::Pnf_part_unaryExpression_104Context *> CParser::Pnf_star_unaryExpression_108Context::pnf_part_unaryExpression_104() {
  return getRuleContexts<CParser::Pnf_part_unaryExpression_104Context>();
}

CParser::Pnf_part_unaryExpression_104Context* CParser::Pnf_star_unaryExpression_108Context::pnf_part_unaryExpression_104(size_t i) {
  return getRuleContext<CParser::Pnf_part_unaryExpression_104Context>(i);
}


size_t CParser::Pnf_star_unaryExpression_108Context::getRuleIndex() const {
  return CParser::RulePnf_star_unaryExpression_108;
}

void CParser::Pnf_star_unaryExpression_108Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_star_unaryExpression_108(this);
}

void CParser::Pnf_star_unaryExpression_108Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_star_unaryExpression_108(this);
}


antlrcpp::Any CParser::Pnf_star_unaryExpression_108Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_star_unaryExpression_108(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_star_unaryExpression_108Context* CParser::pnf_star_unaryExpression_108() {
  Pnf_star_unaryExpression_108Context *_localctx = _tracker.createInstance<Pnf_star_unaryExpression_108Context>(_ctx, getState());
  enterRule(_localctx, 344, CParser::RulePnf_star_unaryExpression_108);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1331);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1328);
        pnf_part_unaryExpression_104(); 
      }
      setState(1333);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pnf_startContext ------------------------------------------------------------------

CParser::Pnf_startContext::Pnf_startContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::CompilationUnitContext* CParser::Pnf_startContext::compilationUnit() {
  return getRuleContext<CParser::CompilationUnitContext>(0);
}


size_t CParser::Pnf_startContext::getRuleIndex() const {
  return CParser::RulePnf_start;
}

void CParser::Pnf_startContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPnf_start(this);
}

void CParser::Pnf_startContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPnf_start(this);
}


antlrcpp::Any CParser::Pnf_startContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPnf_start(this);
  else
    return visitor->visitChildren(this);
}

CParser::Pnf_startContext* CParser::pnf_start() {
  Pnf_startContext *_localctx = _tracker.createInstance<Pnf_startContext>(_ctx, getState());
  enterRule(_localctx, 346, CParser::RulePnf_start);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1334);
    compilationUnit();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerContext ------------------------------------------------------------------

CParser::PointerContext::PointerContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_pnf_part_directDeclarator_21_70Context* CParser::PointerContext::pnf_option_pnf_part_directDeclarator_21_70() {
  return getRuleContext<CParser::Pnf_option_pnf_part_directDeclarator_21_70Context>(0);
}

CParser::Pnf_option_pointer_26Context* CParser::PointerContext::pnf_option_pointer_26() {
  return getRuleContext<CParser::Pnf_option_pointer_26Context>(0);
}


size_t CParser::PointerContext::getRuleIndex() const {
  return CParser::RulePointer;
}

void CParser::PointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer(this);
}

void CParser::PointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer(this);
}


antlrcpp::Any CParser::PointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPointer(this);
  else
    return visitor->visitChildren(this);
}

CParser::PointerContext* CParser::pointer() {
  PointerContext *_localctx = _tracker.createInstance<PointerContext>(_ctx, getState());
  enterRule(_localctx, 348, CParser::RulePointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::Star: {
        enterOuterAlt(_localctx, 1);
        setState(1336);
        match(CParser::Star);
        setState(1337);
        pnf_option_pnf_part_directDeclarator_21_70();
        setState(1338);
        pnf_option_pointer_26();
        break;
      }

      case CParser::Caret: {
        enterOuterAlt(_localctx, 2);
        setState(1340);
        match(CParser::Caret);
        setState(1341);
        pnf_option_pnf_part_directDeclarator_21_70();
        setState(1342);
        pnf_option_pointer_26();
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

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::PrimaryExpressionContext* CParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CParser::PrimaryExpressionContext>(0);
}

CParser::Pnf_star_postfixExpression_45Context* CParser::PostfixExpressionContext::pnf_star_postfixExpression_45() {
  return getRuleContext<CParser::Pnf_star_postfixExpression_45Context>(0);
}

CParser::Pnf_option_postfixExpression_102Context* CParser::PostfixExpressionContext::pnf_option_postfixExpression_102() {
  return getRuleContext<CParser::Pnf_option_postfixExpression_102Context>(0);
}

CParser::TypeNameContext* CParser::PostfixExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}

CParser::InitializerListContext* CParser::PostfixExpressionContext::initializerList() {
  return getRuleContext<CParser::InitializerListContext>(0);
}

CParser::Pnf_option_postfixExpression_2Context* CParser::PostfixExpressionContext::pnf_option_postfixExpression_2() {
  return getRuleContext<CParser::Pnf_option_postfixExpression_2Context>(0);
}


size_t CParser::PostfixExpressionContext::getRuleIndex() const {
  return CParser::RulePostfixExpression;
}

void CParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void CParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any CParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::PostfixExpressionContext* CParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 350, CParser::RulePostfixExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1359);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1346);
      primaryExpression();
      setState(1347);
      pnf_star_postfixExpression_45();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1349);
      pnf_option_postfixExpression_102();
      setState(1350);
      match(CParser::LeftParen);
      setState(1351);
      typeName();
      setState(1352);
      match(CParser::RightParen);
      setState(1353);
      match(CParser::LeftBrace);
      setState(1354);
      initializerList();
      setState(1355);
      pnf_option_postfixExpression_2();
      setState(1356);
      match(CParser::RightBrace);
      setState(1357);
      pnf_star_postfixExpression_45();
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

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::PrimaryExpressionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}

tree::TerminalNode* CParser::PrimaryExpressionContext::Constant() {
  return getToken(CParser::Constant, 0);
}

CParser::Pnf_plus_primaryExpression_40Context* CParser::PrimaryExpressionContext::pnf_plus_primaryExpression_40() {
  return getRuleContext<CParser::Pnf_plus_primaryExpression_40Context>(0);
}

CParser::Pnf_list_left_8Context* CParser::PrimaryExpressionContext::pnf_list_left_8() {
  return getRuleContext<CParser::Pnf_list_left_8Context>(0);
}

CParser::GenericSelectionContext* CParser::PrimaryExpressionContext::genericSelection() {
  return getRuleContext<CParser::GenericSelectionContext>(0);
}

CParser::Pnf_option_primaryExpression_41Context* CParser::PrimaryExpressionContext::pnf_option_primaryExpression_41() {
  return getRuleContext<CParser::Pnf_option_primaryExpression_41Context>(0);
}

CParser::CompoundStatementContext* CParser::PrimaryExpressionContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::UnaryExpressionContext* CParser::PrimaryExpressionContext::unaryExpression() {
  return getRuleContext<CParser::UnaryExpressionContext>(0);
}

CParser::TypeNameContext* CParser::PrimaryExpressionContext::typeName() {
  return getRuleContext<CParser::TypeNameContext>(0);
}


size_t CParser::PrimaryExpressionContext::getRuleIndex() const {
  return CParser::RulePrimaryExpression;
}

void CParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void CParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any CParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::PrimaryExpressionContext* CParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 352, CParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1388);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1361);
      match(CParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1362);
      match(CParser::Constant);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1363);
      pnf_plus_primaryExpression_40();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1364);
      match(CParser::LeftParen);
      setState(1365);
      pnf_list_left_8();
      setState(1366);
      match(CParser::RightParen);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1368);
      genericSelection();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1369);
      pnf_option_primaryExpression_41();
      setState(1370);
      match(CParser::LeftParen);
      setState(1371);
      compoundStatement();
      setState(1372);
      match(CParser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1374);
      match(CParser::T__10);
      setState(1375);
      match(CParser::LeftParen);
      setState(1376);
      unaryExpression();
      setState(1377);
      match(CParser::Comma);
      setState(1378);
      typeName();
      setState(1379);
      match(CParser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1381);
      match(CParser::T__11);
      setState(1382);
      match(CParser::LeftParen);
      setState(1383);
      typeName();
      setState(1384);
      match(CParser::Comma);
      setState(1385);
      unaryExpression();
      setState(1386);
      match(CParser::RightParen);
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

//----------------- RelationalExpressionContext ------------------------------------------------------------------

CParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ShiftExpressionContext* CParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<CParser::ShiftExpressionContext>(0);
}

CParser::Pnf_star_relationalExpression_51Context* CParser::RelationalExpressionContext::pnf_star_relationalExpression_51() {
  return getRuleContext<CParser::Pnf_star_relationalExpression_51Context>(0);
}


size_t CParser::RelationalExpressionContext::getRuleIndex() const {
  return CParser::RuleRelationalExpression;
}

void CParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void CParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


antlrcpp::Any CParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::RelationalExpressionContext* CParser::relationalExpression() {
  RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 354, CParser::RuleRelationalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1390);
    shiftExpression();
    setState(1391);
    pnf_star_relationalExpression_51();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatement_block_1Context ------------------------------------------------------------------

CParser::SelectionStatement_block_1Context::SelectionStatement_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::StatementContext* CParser::SelectionStatement_block_1Context::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}


size_t CParser::SelectionStatement_block_1Context::getRuleIndex() const {
  return CParser::RuleSelectionStatement_block_1;
}

void CParser::SelectionStatement_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement_block_1(this);
}

void CParser::SelectionStatement_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement_block_1(this);
}


antlrcpp::Any CParser::SelectionStatement_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSelectionStatement_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::SelectionStatement_block_1Context* CParser::selectionStatement_block_1() {
  SelectionStatement_block_1Context *_localctx = _tracker.createInstance<SelectionStatement_block_1Context>(_ctx, getState());
  enterRule(_localctx, 356, CParser::RuleSelectionStatement_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1393);
    match(CParser::Else);
    setState(1394);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

CParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::AdditiveExpressionContext* CParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<CParser::AdditiveExpressionContext>(0);
}

CParser::Pnf_star_shiftExpression_50Context* CParser::ShiftExpressionContext::pnf_star_shiftExpression_50() {
  return getRuleContext<CParser::Pnf_star_shiftExpression_50Context>(0);
}


size_t CParser::ShiftExpressionContext::getRuleIndex() const {
  return CParser::RuleShiftExpression;
}

void CParser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void CParser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


antlrcpp::Any CParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::ShiftExpressionContext* CParser::shiftExpression() {
  ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 358, CParser::RuleShiftExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1396);
    additiveExpression();
    setState(1397);
    pnf_star_shiftExpression_50();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecifierQualifierListContext ------------------------------------------------------------------

CParser::SpecifierQualifierListContext::SpecifierQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::TypeSpecifierContext* CParser::SpecifierQualifierListContext::typeSpecifier() {
  return getRuleContext<CParser::TypeSpecifierContext>(0);
}

CParser::Pnf_option_specifierQualifierList_65Context* CParser::SpecifierQualifierListContext::pnf_option_specifierQualifierList_65() {
  return getRuleContext<CParser::Pnf_option_specifierQualifierList_65Context>(0);
}

CParser::TypeQualifierContext* CParser::SpecifierQualifierListContext::typeQualifier() {
  return getRuleContext<CParser::TypeQualifierContext>(0);
}


size_t CParser::SpecifierQualifierListContext::getRuleIndex() const {
  return CParser::RuleSpecifierQualifierList;
}

void CParser::SpecifierQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecifierQualifierList(this);
}

void CParser::SpecifierQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecifierQualifierList(this);
}


antlrcpp::Any CParser::SpecifierQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitSpecifierQualifierList(this);
  else
    return visitor->visitChildren(this);
}

CParser::SpecifierQualifierListContext* CParser::specifierQualifierList() {
  SpecifierQualifierListContext *_localctx = _tracker.createInstance<SpecifierQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 360, CParser::RuleSpecifierQualifierList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1405);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1399);
      typeSpecifier();
      setState(1400);
      pnf_option_specifierQualifierList_65();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1402);
      typeQualifier();
      setState(1403);
      pnf_option_specifierQualifierList_65();
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

//----------------- StatementContext ------------------------------------------------------------------

CParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_star_statement_106Context* CParser::StatementContext::pnf_star_statement_106() {
  return getRuleContext<CParser::Pnf_star_statement_106Context>(0);
}

CParser::CompoundStatementContext* CParser::StatementContext::compoundStatement() {
  return getRuleContext<CParser::CompoundStatementContext>(0);
}

CParser::ExpressionStatementContext* CParser::StatementContext::expressionStatement() {
  return getRuleContext<CParser::ExpressionStatementContext>(0);
}

CParser::Pnf_list_left_8Context* CParser::StatementContext::pnf_list_left_8() {
  return getRuleContext<CParser::Pnf_list_left_8Context>(0);
}

CParser::StatementContext* CParser::StatementContext::statement() {
  return getRuleContext<CParser::StatementContext>(0);
}

CParser::Pnf_option_selectionStatement_88Context* CParser::StatementContext::pnf_option_selectionStatement_88() {
  return getRuleContext<CParser::Pnf_option_selectionStatement_88Context>(0);
}

CParser::JumpStatementContext* CParser::StatementContext::jumpStatement() {
  return getRuleContext<CParser::JumpStatementContext>(0);
}

CParser::AsmNameContext* CParser::StatementContext::asmName() {
  return getRuleContext<CParser::AsmNameContext>(0);
}

CParser::Pnf_option_statement_89Context* CParser::StatementContext::pnf_option_statement_89() {
  return getRuleContext<CParser::Pnf_option_statement_89Context>(0);
}

CParser::Pnf_option_statement_90Context* CParser::StatementContext::pnf_option_statement_90() {
  return getRuleContext<CParser::Pnf_option_statement_90Context>(0);
}

CParser::Pnf_option_statement_91Context* CParser::StatementContext::pnf_option_statement_91() {
  return getRuleContext<CParser::Pnf_option_statement_91Context>(0);
}

CParser::Pnf_star_statement_92Context* CParser::StatementContext::pnf_star_statement_92() {
  return getRuleContext<CParser::Pnf_star_statement_92Context>(0);
}


size_t CParser::StatementContext::getRuleIndex() const {
  return CParser::RuleStatement;
}

void CParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CParser::StatementContext* CParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 362, CParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1443);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1407);
      pnf_star_statement_106();
      setState(1408);
      compoundStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1410);
      pnf_star_statement_106();
      setState(1411);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1413);
      pnf_star_statement_106();
      setState(1414);
      match(CParser::If);
      setState(1415);
      match(CParser::LeftParen);
      setState(1416);
      pnf_list_left_8();
      setState(1417);
      match(CParser::RightParen);
      setState(1418);
      statement();
      setState(1419);
      pnf_option_selectionStatement_88();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1421);
      pnf_star_statement_106();
      setState(1422);
      match(CParser::Do);
      setState(1423);
      statement();
      setState(1424);
      match(CParser::While);
      setState(1425);
      match(CParser::LeftParen);
      setState(1426);
      pnf_list_left_8();
      setState(1427);
      match(CParser::RightParen);
      setState(1428);
      match(CParser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1430);
      pnf_star_statement_106();
      setState(1431);
      jumpStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1433);
      pnf_star_statement_106();
      setState(1434);
      asmName();
      setState(1435);
      pnf_option_statement_89();
      setState(1436);
      pnf_option_statement_90();
      setState(1437);
      match(CParser::LeftParen);
      setState(1438);
      pnf_option_statement_91();
      setState(1439);
      pnf_star_statement_92();
      setState(1440);
      match(CParser::RightParen);
      setState(1441);
      match(CParser::Semi);
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

//----------------- Statement_block_1Context ------------------------------------------------------------------

CParser::Statement_block_1Context::Statement_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::Statement_block_1Context::getRuleIndex() const {
  return CParser::RuleStatement_block_1;
}

void CParser::Statement_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_block_1(this);
}

void CParser::Statement_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_block_1(this);
}


antlrcpp::Any CParser::Statement_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatement_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::Statement_block_1Context* CParser::statement_block_1() {
  Statement_block_1Context *_localctx = _tracker.createInstance<Statement_block_1Context>(_ctx, getState());
  enterRule(_localctx, 364, CParser::RuleStatement_block_1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1445);
    _la = _input->LA(1);
    if (!(_la == CParser::T__12

    || _la == CParser::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- Statement_block_2Context ------------------------------------------------------------------

CParser::Statement_block_2Context::Statement_block_2Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_1Context* CParser::Statement_block_2Context::pnf_list_left_1() {
  return getRuleContext<CParser::Pnf_list_left_1Context>(0);
}


size_t CParser::Statement_block_2Context::getRuleIndex() const {
  return CParser::RuleStatement_block_2;
}

void CParser::Statement_block_2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_block_2(this);
}

void CParser::Statement_block_2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_block_2(this);
}


antlrcpp::Any CParser::Statement_block_2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatement_block_2(this);
  else
    return visitor->visitChildren(this);
}

CParser::Statement_block_2Context* CParser::statement_block_2() {
  Statement_block_2Context *_localctx = _tracker.createInstance<Statement_block_2Context>(_ctx, getState());
  enterRule(_localctx, 366, CParser::RuleStatement_block_2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1447);
    match(CParser::Comma);
    setState(1448);
    pnf_list_left_1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_block_4Context ------------------------------------------------------------------

CParser::Statement_block_4Context::Statement_block_4Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_list_left_1Context* CParser::Statement_block_4Context::pnf_list_left_1() {
  return getRuleContext<CParser::Pnf_list_left_1Context>(0);
}


size_t CParser::Statement_block_4Context::getRuleIndex() const {
  return CParser::RuleStatement_block_4;
}

void CParser::Statement_block_4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_block_4(this);
}

void CParser::Statement_block_4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_block_4(this);
}


antlrcpp::Any CParser::Statement_block_4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatement_block_4(this);
  else
    return visitor->visitChildren(this);
}

CParser::Statement_block_4Context* CParser::statement_block_4() {
  Statement_block_4Context *_localctx = _tracker.createInstance<Statement_block_4Context>(_ctx, getState());
  enterRule(_localctx, 368, CParser::RuleStatement_block_4);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1450);
    match(CParser::Comma);
    setState(1451);
    pnf_list_left_1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_block_6Context ------------------------------------------------------------------

CParser::Statement_block_6Context::Statement_block_6Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_statement_block_6_39Context* CParser::Statement_block_6Context::pnf_option_statement_block_6_39() {
  return getRuleContext<CParser::Pnf_option_statement_block_6_39Context>(0);
}


size_t CParser::Statement_block_6Context::getRuleIndex() const {
  return CParser::RuleStatement_block_6;
}

void CParser::Statement_block_6Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_block_6(this);
}

void CParser::Statement_block_6Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_block_6(this);
}


antlrcpp::Any CParser::Statement_block_6Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStatement_block_6(this);
  else
    return visitor->visitChildren(this);
}

CParser::Statement_block_6Context* CParser::statement_block_6() {
  Statement_block_6Context *_localctx = _tracker.createInstance<Statement_block_6Context>(_ctx, getState());
  enterRule(_localctx, 370, CParser::RuleStatement_block_6);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1453);
    match(CParser::Colon);
    setState(1454);
    pnf_option_statement_block_6_39();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticAssertDeclarationContext ------------------------------------------------------------------

CParser::StaticAssertDeclarationContext::StaticAssertDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::ConditionalExpressionContext* CParser::StaticAssertDeclarationContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}

CParser::Pnf_plus_primaryExpression_40Context* CParser::StaticAssertDeclarationContext::pnf_plus_primaryExpression_40() {
  return getRuleContext<CParser::Pnf_plus_primaryExpression_40Context>(0);
}


size_t CParser::StaticAssertDeclarationContext::getRuleIndex() const {
  return CParser::RuleStaticAssertDeclaration;
}

void CParser::StaticAssertDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticAssertDeclaration(this);
}

void CParser::StaticAssertDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticAssertDeclaration(this);
}


antlrcpp::Any CParser::StaticAssertDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStaticAssertDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::StaticAssertDeclarationContext* CParser::staticAssertDeclaration() {
  StaticAssertDeclarationContext *_localctx = _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 372, CParser::RuleStaticAssertDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1456);
    match(CParser::StaticAssert);
    setState(1457);
    match(CParser::LeftParen);
    setState(1458);
    conditionalExpression();
    setState(1459);
    match(CParser::Comma);
    setState(1460);
    pnf_plus_primaryExpression_40();
    setState(1461);
    match(CParser::RightParen);
    setState(1462);
    match(CParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

CParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::StorageClassSpecifierContext::getRuleIndex() const {
  return CParser::RuleStorageClassSpecifier;
}

void CParser::StorageClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageClassSpecifier(this);
}

void CParser::StorageClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageClassSpecifier(this);
}


antlrcpp::Any CParser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStorageClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::StorageClassSpecifierContext* CParser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 374, CParser::RuleStorageClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1464);
    _la = _input->LA(1);
    if (!(((((_la - 22) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 22)) & ((1ULL << (CParser::Auto - 22))
      | (1ULL << (CParser::Extern - 22))
      | (1ULL << (CParser::Register - 22))
      | (1ULL << (CParser::Static - 22))
      | (1ULL << (CParser::Typedef - 22))
      | (1ULL << (CParser::ThreadLocal - 22)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- StructDeclarationContext ------------------------------------------------------------------

CParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_typeName_42Context* CParser::StructDeclarationContext::pnf_option_typeName_42() {
  return getRuleContext<CParser::Pnf_option_typeName_42Context>(0);
}

CParser::SpecifierQualifierListContext* CParser::StructDeclarationContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}

CParser::Pnf_option_structDeclaration_18Context* CParser::StructDeclarationContext::pnf_option_structDeclaration_18() {
  return getRuleContext<CParser::Pnf_option_structDeclaration_18Context>(0);
}

CParser::StaticAssertDeclarationContext* CParser::StructDeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CParser::StaticAssertDeclarationContext>(0);
}


size_t CParser::StructDeclarationContext::getRuleIndex() const {
  return CParser::RuleStructDeclaration;
}

void CParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void CParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}


antlrcpp::Any CParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructDeclarationContext* CParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 376, CParser::RuleStructDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1472);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__0:
      case CParser::T__1:
      case CParser::T__2:
      case CParser::T__7:
      case CParser::T__8:
      case CParser::T__9:
      case CParser::T__13:
      case CParser::T__14:
      case CParser::T__15:
      case CParser::T__16:
      case CParser::T__17:
      case CParser::T__18:
      case CParser::Char:
      case CParser::Const:
      case CParser::Double:
      case CParser::Enum:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Restrict:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Struct:
      case CParser::Union:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Volatile:
      case CParser::Atomic:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Imaginary:
      case CParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1466);
        pnf_option_typeName_42();
        setState(1467);
        specifierQualifierList();
        setState(1468);
        pnf_option_structDeclaration_18();
        setState(1469);
        match(CParser::Semi);
        break;
      }

      case CParser::StaticAssert: {
        enterOuterAlt(_localctx, 2);
        setState(1471);
        staticAssertDeclaration();
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

//----------------- StructDeclaratorContext ------------------------------------------------------------------

CParser::StructDeclaratorContext::StructDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::DeclaratorContext* CParser::StructDeclaratorContext::declarator() {
  return getRuleContext<CParser::DeclaratorContext>(0);
}

CParser::Pnf_option_structDeclarator_66Context* CParser::StructDeclaratorContext::pnf_option_structDeclarator_66() {
  return getRuleContext<CParser::Pnf_option_structDeclarator_66Context>(0);
}

CParser::ConditionalExpressionContext* CParser::StructDeclaratorContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}

CParser::Pnf_option_structOrUnionSpecifier_61Context* CParser::StructDeclaratorContext::pnf_option_structOrUnionSpecifier_61() {
  return getRuleContext<CParser::Pnf_option_structOrUnionSpecifier_61Context>(0);
}


size_t CParser::StructDeclaratorContext::getRuleIndex() const {
  return CParser::RuleStructDeclarator;
}

void CParser::StructDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclarator(this);
}

void CParser::StructDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclarator(this);
}


antlrcpp::Any CParser::StructDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructDeclaratorContext* CParser::structDeclarator() {
  StructDeclaratorContext *_localctx = _tracker.createInstance<StructDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 378, CParser::RuleStructDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1474);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1475);
      pnf_option_structDeclarator_66();
      setState(1476);
      match(CParser::Colon);
      setState(1477);
      conditionalExpression();
      setState(1478);
      pnf_option_structOrUnionSpecifier_61();
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

//----------------- StructDeclaratorList_block_1Context ------------------------------------------------------------------

CParser::StructDeclaratorList_block_1Context::StructDeclaratorList_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::StructDeclaratorContext* CParser::StructDeclaratorList_block_1Context::structDeclarator() {
  return getRuleContext<CParser::StructDeclaratorContext>(0);
}


size_t CParser::StructDeclaratorList_block_1Context::getRuleIndex() const {
  return CParser::RuleStructDeclaratorList_block_1;
}

void CParser::StructDeclaratorList_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaratorList_block_1(this);
}

void CParser::StructDeclaratorList_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaratorList_block_1(this);
}


antlrcpp::Any CParser::StructDeclaratorList_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructDeclaratorList_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructDeclaratorList_block_1Context* CParser::structDeclaratorList_block_1() {
  StructDeclaratorList_block_1Context *_localctx = _tracker.createInstance<StructDeclaratorList_block_1Context>(_ctx, getState());
  enterRule(_localctx, 380, CParser::RuleStructDeclaratorList_block_1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1482);
    match(CParser::Comma);
    setState(1483);
    structDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructOrUnionContext ------------------------------------------------------------------

CParser::StructOrUnionContext::StructOrUnionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::StructOrUnionContext::getRuleIndex() const {
  return CParser::RuleStructOrUnion;
}

void CParser::StructOrUnionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructOrUnion(this);
}

void CParser::StructOrUnionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructOrUnion(this);
}


antlrcpp::Any CParser::StructOrUnionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructOrUnion(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructOrUnionContext* CParser::structOrUnion() {
  StructOrUnionContext *_localctx = _tracker.createInstance<StructOrUnionContext>(_ctx, getState());
  enterRule(_localctx, 382, CParser::RuleStructOrUnion);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1485);
    _la = _input->LA(1);
    if (!(_la == CParser::Struct

    || _la == CParser::Union)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- StructOrUnionSpecifierContext ------------------------------------------------------------------

CParser::StructOrUnionSpecifierContext::StructOrUnionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::StructOrUnionContext* CParser::StructOrUnionSpecifierContext::structOrUnion() {
  return getRuleContext<CParser::StructOrUnionContext>(0);
}

CParser::Pnf_option_structOrUnionSpecifier_61Context* CParser::StructOrUnionSpecifierContext::pnf_option_structOrUnionSpecifier_61() {
  return getRuleContext<CParser::Pnf_option_structOrUnionSpecifier_61Context>(0);
}

CParser::Pnf_option_structOrUnionSpecifier_62Context* CParser::StructOrUnionSpecifierContext::pnf_option_structOrUnionSpecifier_62() {
  return getRuleContext<CParser::Pnf_option_structOrUnionSpecifier_62Context>(0);
}

CParser::Pnf_star_structDeclarationList_35Context* CParser::StructOrUnionSpecifierContext::pnf_star_structDeclarationList_35() {
  return getRuleContext<CParser::Pnf_star_structDeclarationList_35Context>(0);
}

tree::TerminalNode* CParser::StructOrUnionSpecifierContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::StructOrUnionSpecifierContext::getRuleIndex() const {
  return CParser::RuleStructOrUnionSpecifier;
}

void CParser::StructOrUnionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructOrUnionSpecifier(this);
}

void CParser::StructOrUnionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructOrUnionSpecifier(this);
}


antlrcpp::Any CParser::StructOrUnionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitStructOrUnionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::StructOrUnionSpecifierContext* CParser::structOrUnionSpecifier() {
  StructOrUnionSpecifierContext *_localctx = _tracker.createInstance<StructOrUnionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 384, CParser::RuleStructOrUnionSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1497);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1487);
      structOrUnion();
      setState(1488);
      pnf_option_structOrUnionSpecifier_61();
      setState(1489);
      pnf_option_structOrUnionSpecifier_62();
      setState(1490);
      match(CParser::LeftBrace);
      setState(1491);
      pnf_star_structDeclarationList_35();
      setState(1492);
      match(CParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1494);
      structOrUnion();
      setState(1495);
      match(CParser::Identifier);
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

//----------------- TypeNameContext ------------------------------------------------------------------

CParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_option_typeName_42Context* CParser::TypeNameContext::pnf_option_typeName_42() {
  return getRuleContext<CParser::Pnf_option_typeName_42Context>(0);
}

CParser::SpecifierQualifierListContext* CParser::TypeNameContext::specifierQualifierList() {
  return getRuleContext<CParser::SpecifierQualifierListContext>(0);
}

CParser::Pnf_option_typeName_43Context* CParser::TypeNameContext::pnf_option_typeName_43() {
  return getRuleContext<CParser::Pnf_option_typeName_43Context>(0);
}


size_t CParser::TypeNameContext::getRuleIndex() const {
  return CParser::RuleTypeName;
}

void CParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void CParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any CParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeNameContext* CParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 386, CParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1499);
    pnf_option_typeName_42();
    setState(1500);
    specifierQualifierList();
    setState(1501);
    pnf_option_typeName_43();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierContext ------------------------------------------------------------------

CParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::TypeQualifierContext::getRuleIndex() const {
  return CParser::RuleTypeQualifier;
}

void CParser::TypeQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifier(this);
}

void CParser::TypeQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifier(this);
}


antlrcpp::Any CParser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeQualifierContext* CParser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 388, CParser::RuleTypeQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1503);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__9)
      | (1ULL << CParser::T__13)
      | (1ULL << CParser::Const)
      | (1ULL << CParser::Restrict)
      | (1ULL << CParser::Volatile)
      | (1ULL << CParser::Atomic))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- TypeSpecifierContext ------------------------------------------------------------------

CParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::TypeSpecifier_block_1Context* CParser::TypeSpecifierContext::typeSpecifier_block_1() {
  return getRuleContext<CParser::TypeSpecifier_block_1Context>(0);
}

CParser::TypeSpecifier_block_2Context* CParser::TypeSpecifierContext::typeSpecifier_block_2() {
  return getRuleContext<CParser::TypeSpecifier_block_2Context>(0);
}

CParser::AtomicTypeSpecifierContext* CParser::TypeSpecifierContext::atomicTypeSpecifier() {
  return getRuleContext<CParser::AtomicTypeSpecifierContext>(0);
}

CParser::StructOrUnionSpecifierContext* CParser::TypeSpecifierContext::structOrUnionSpecifier() {
  return getRuleContext<CParser::StructOrUnionSpecifierContext>(0);
}

CParser::EnumSpecifierContext* CParser::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<CParser::EnumSpecifierContext>(0);
}

CParser::TypedefNameContext* CParser::TypeSpecifierContext::typedefName() {
  return getRuleContext<CParser::TypedefNameContext>(0);
}

CParser::ConditionalExpressionContext* CParser::TypeSpecifierContext::conditionalExpression() {
  return getRuleContext<CParser::ConditionalExpressionContext>(0);
}


size_t CParser::TypeSpecifierContext::getRuleIndex() const {
  return CParser::RuleTypeSpecifier;
}

void CParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void CParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


antlrcpp::Any CParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeSpecifierContext* CParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 390, CParser::RuleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1525);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CParser::T__16:
      case CParser::T__17:
      case CParser::T__18:
      case CParser::Char:
      case CParser::Double:
      case CParser::Float:
      case CParser::Int:
      case CParser::Long:
      case CParser::Short:
      case CParser::Signed:
      case CParser::Unsigned:
      case CParser::Void:
      case CParser::Bool:
      case CParser::Complex:
      case CParser::Imaginary: {
        enterOuterAlt(_localctx, 1);
        setState(1505);
        typeSpecifier_block_1();
        break;
      }

      case CParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(1506);
        match(CParser::T__9);
        setState(1507);
        match(CParser::LeftParen);
        setState(1508);
        typeSpecifier_block_2();
        setState(1509);
        match(CParser::RightParen);
        break;
      }

      case CParser::Atomic: {
        enterOuterAlt(_localctx, 3);
        setState(1511);
        atomicTypeSpecifier();
        break;
      }

      case CParser::Struct:
      case CParser::Union: {
        enterOuterAlt(_localctx, 4);
        setState(1512);
        structOrUnionSpecifier();
        break;
      }

      case CParser::Enum: {
        enterOuterAlt(_localctx, 5);
        setState(1513);
        enumSpecifier();
        break;
      }

      case CParser::Identifier: {
        enterOuterAlt(_localctx, 6);
        setState(1514);
        typedefName();
        break;
      }

      case CParser::T__14: {
        enterOuterAlt(_localctx, 7);
        setState(1515);
        match(CParser::T__14);
        setState(1516);
        match(CParser::LeftParen);
        setState(1517);
        conditionalExpression();
        setState(1518);
        match(CParser::RightParen);
        break;
      }

      case CParser::T__15: {
        enterOuterAlt(_localctx, 8);
        setState(1520);
        match(CParser::T__15);
        setState(1521);
        match(CParser::LeftParen);
        setState(1522);
        conditionalExpression();
        setState(1523);
        match(CParser::RightParen);
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

//----------------- TypeSpecifier_block_1Context ------------------------------------------------------------------

CParser::TypeSpecifier_block_1Context::TypeSpecifier_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::TypeSpecifier_block_1Context::Imaginary() {
  return getToken(CParser::Imaginary, 0);
}


size_t CParser::TypeSpecifier_block_1Context::getRuleIndex() const {
  return CParser::RuleTypeSpecifier_block_1;
}

void CParser::TypeSpecifier_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier_block_1(this);
}

void CParser::TypeSpecifier_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier_block_1(this);
}


antlrcpp::Any CParser::TypeSpecifier_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeSpecifier_block_1Context* CParser::typeSpecifier_block_1() {
  TypeSpecifier_block_1Context *_localctx = _tracker.createInstance<TypeSpecifier_block_1Context>(_ctx, getState());
  enterRule(_localctx, 392, CParser::RuleTypeSpecifier_block_1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1527);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18)
      | (1ULL << CParser::Char)
      | (1ULL << CParser::Double)
      | (1ULL << CParser::Float)
      | (1ULL << CParser::Int)
      | (1ULL << CParser::Long)
      | (1ULL << CParser::Short)
      | (1ULL << CParser::Signed)
      | (1ULL << CParser::Unsigned)
      | (1ULL << CParser::Void)
      | (1ULL << CParser::Bool)
      | (1ULL << CParser::Complex)
      | (1ULL << CParser::Imaginary))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- TypeSpecifier_block_2Context ------------------------------------------------------------------

CParser::TypeSpecifier_block_2Context::TypeSpecifier_block_2Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::TypeSpecifier_block_2Context::getRuleIndex() const {
  return CParser::RuleTypeSpecifier_block_2;
}

void CParser::TypeSpecifier_block_2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier_block_2(this);
}

void CParser::TypeSpecifier_block_2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier_block_2(this);
}


antlrcpp::Any CParser::TypeSpecifier_block_2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier_block_2(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypeSpecifier_block_2Context* CParser::typeSpecifier_block_2() {
  TypeSpecifier_block_2Context *_localctx = _tracker.createInstance<TypeSpecifier_block_2Context>(_ctx, getState());
  enterRule(_localctx, 394, CParser::RuleTypeSpecifier_block_2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1529);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CParser::T__16)
      | (1ULL << CParser::T__17)
      | (1ULL << CParser::T__18))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- TypedefNameContext ------------------------------------------------------------------

CParser::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::TypedefNameContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::TypedefNameContext::getRuleIndex() const {
  return CParser::RuleTypedefName;
}

void CParser::TypedefNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefName(this);
}

void CParser::TypedefNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefName(this);
}


antlrcpp::Any CParser::TypedefNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitTypedefName(this);
  else
    return visitor->visitChildren(this);
}

CParser::TypedefNameContext* CParser::typedefName() {
  TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
  enterRule(_localctx, 396, CParser::RuleTypedefName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1531);
    match(CParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

CParser::Pnf_star_unaryExpression_108Context* CParser::UnaryExpressionContext::pnf_star_unaryExpression_108() {
  return getRuleContext<CParser::Pnf_star_unaryExpression_108Context>(0);
}

CParser::PostfixExpressionContext* CParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<CParser::PostfixExpressionContext>(0);
}

CParser::UnaryOperatorContext* CParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CParser::UnaryOperatorContext>(0);
}

CParser::Pnf_star_castExpression_107Context* CParser::UnaryExpressionContext::pnf_star_castExpression_107() {
  return getRuleContext<CParser::Pnf_star_castExpression_107Context>(0);
}

std::vector<CParser::TypeNameContext *> CParser::UnaryExpressionContext::typeName() {
  return getRuleContexts<CParser::TypeNameContext>();
}

CParser::TypeNameContext* CParser::UnaryExpressionContext::typeName(size_t i) {
  return getRuleContext<CParser::TypeNameContext>(i);
}

CParser::InitializerContext* CParser::UnaryExpressionContext::initializer() {
  return getRuleContext<CParser::InitializerContext>(0);
}

CParser::UnaryExpression_block_1Context* CParser::UnaryExpressionContext::unaryExpression_block_1() {
  return getRuleContext<CParser::UnaryExpression_block_1Context>(0);
}

tree::TerminalNode* CParser::UnaryExpressionContext::Identifier() {
  return getToken(CParser::Identifier, 0);
}


size_t CParser::UnaryExpressionContext::getRuleIndex() const {
  return CParser::RuleUnaryExpression;
}

void CParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void CParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any CParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryExpressionContext* CParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 398, CParser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1568);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1533);
      pnf_star_unaryExpression_108();
      setState(1534);
      postfixExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1536);
      pnf_star_unaryExpression_108();
      setState(1537);
      unaryOperator();
      setState(1538);
      pnf_star_castExpression_107();
      setState(1539);
      match(CParser::LeftParen);
      setState(1540);
      typeName();
      setState(1541);
      match(CParser::RightParen);
      setState(1542);
      initializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1544);
      pnf_star_unaryExpression_108();
      setState(1545);
      match(CParser::Sizeof);
      setState(1546);
      match(CParser::LeftParen);
      setState(1547);
      typeName();
      setState(1548);
      match(CParser::RightParen);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1550);
      pnf_star_unaryExpression_108();
      setState(1551);
      unaryExpression_block_1();
      setState(1552);
      match(CParser::LeftParen);
      setState(1553);
      typeName();
      setState(1554);
      match(CParser::RightParen);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1556);
      pnf_star_unaryExpression_108();
      setState(1557);
      match(CParser::T__19);
      setState(1558);
      match(CParser::LeftParen);
      setState(1559);
      typeName();
      setState(1560);
      match(CParser::Comma);
      setState(1561);
      typeName();
      setState(1562);
      match(CParser::RightParen);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1564);
      pnf_star_unaryExpression_108();
      setState(1565);
      match(CParser::AndAnd);
      setState(1566);
      match(CParser::Identifier);
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

//----------------- UnaryExpression_block_1Context ------------------------------------------------------------------

CParser::UnaryExpression_block_1Context::UnaryExpression_block_1Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::UnaryExpression_block_1Context::getRuleIndex() const {
  return CParser::RuleUnaryExpression_block_1;
}

void CParser::UnaryExpression_block_1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression_block_1(this);
}

void CParser::UnaryExpression_block_1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression_block_1(this);
}


antlrcpp::Any CParser::UnaryExpression_block_1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression_block_1(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryExpression_block_1Context* CParser::unaryExpression_block_1() {
  UnaryExpression_block_1Context *_localctx = _tracker.createInstance<UnaryExpression_block_1Context>(_ctx, getState());
  enterRule(_localctx, 400, CParser::RuleUnaryExpression_block_1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1570);
    _la = _input->LA(1);
    if (!(_la == CParser::T__20

    || _la == CParser::Alignof)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- UnaryExpression_block_2Context ------------------------------------------------------------------

CParser::UnaryExpression_block_2Context::UnaryExpression_block_2Context(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}

tree::TerminalNode* CParser::UnaryExpression_block_2Context::RealPart() {
  return getToken(CParser::RealPart, 0);
}

tree::TerminalNode* CParser::UnaryExpression_block_2Context::ImaginaryPart() {
  return getToken(CParser::ImaginaryPart, 0);
}


size_t CParser::UnaryExpression_block_2Context::getRuleIndex() const {
  return CParser::RuleUnaryExpression_block_2;
}

void CParser::UnaryExpression_block_2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression_block_2(this);
}

void CParser::UnaryExpression_block_2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression_block_2(this);
}


antlrcpp::Any CParser::UnaryExpression_block_2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression_block_2(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryExpression_block_2Context* CParser::unaryExpression_block_2() {
  UnaryExpression_block_2Context *_localctx = _tracker.createInstance<UnaryExpression_block_2Context>(_ctx, getState());
  enterRule(_localctx, 402, CParser::RuleUnaryExpression_block_2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1572);
    _la = _input->LA(1);
    if (!(_la == CParser::RealPart

    || _la == CParser::ImaginaryPart)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : antlr4::RuleContextWithAltNum(parent, invokingState) {
}


size_t CParser::UnaryOperatorContext::getRuleIndex() const {
  return CParser::RuleUnaryOperator;
}

void CParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void CParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any CParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CParser::UnaryOperatorContext* CParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 404, CParser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1574);
    _la = _input->LA(1);
    if (!(((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (CParser::Plus - 78))
      | (1ULL << (CParser::Minus - 78))
      | (1ULL << (CParser::Star - 78))
      | (1ULL << (CParser::And - 78))
      | (1ULL << (CParser::Not - 78))
      | (1ULL << (CParser::Tilde - 78)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

// Static vars and initialization.
std::vector<dfa::DFA> CParser::_decisionToDFA;
atn::PredictionContextCache CParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CParser::_atn;
std::vector<uint16_t> CParser::_serializedATN;

std::vector<std::string> CParser::_ruleNames = {
  "abstractDeclarator", "additiveExpression", "alignmentSpecifier", "argumentExpressionList_block_1", 
  "asmName", "assignmentExpression", "assignmentOperator", "atomicTypeSpecifier", 
  "blockItem", "castExpression", "compilationUnit", "compoundStatement", 
  "conditionalExpression", "conditionalExpression_block_1", "declaration", 
  "declarationSpecifier", "declarationSpecifiers", "declarator", "designation", 
  "designator", "designator_block_1", "directAbstractDeclarator", "directDeclarator", 
  "enumSpecifier", "enumerationConstant", "enumerator", "enumeratorList_block_1", 
  "equalityExpression", "expressionStatement", "externalDeclaration", "functionDefinition", 
  "functionSpecifier", "functionSpecifier_block_1", "gccAttribute", "gccAttributeList_block_1", 
  "gccAttributeSpecifier", "gccAttribute_block_1", "gccDeclaratorExtension", 
  "genericAssocList_block_1", "genericAssociation", "genericSelection", 
  "identifierList_block_1", "initDeclarator", "initDeclaratorList_block_1", 
  "initializer", "initializerList", "initializerList_block_1", "initializer_block_1", 
  "jumpStatement", "multiplicativeExpression", "parameterDeclaration", "parameterList_block_1", 
  "parameterTypeList", "pnf_list_left_0", "pnf_list_left_1", "pnf_list_left_10", 
  "pnf_list_left_11", "pnf_list_left_12", "pnf_list_left_13", "pnf_list_left_14", 
  "pnf_list_left_15", "pnf_list_left_2", "pnf_list_left_3", "pnf_list_left_4", 
  "pnf_list_left_5", "pnf_list_left_6", "pnf_list_left_7", "pnf_list_left_8", 
  "pnf_list_left_9", "pnf_option_compilationUnit_98", "pnf_option_compoundStatement_87", 
  "pnf_option_conditionalExpression_46", "pnf_option_conditionalExpression_block_1_34", 
  "pnf_option_declaration_14", "pnf_option_designator_83", "pnf_option_directAbstractDeclarator_79", 
  "pnf_option_enumerator_20", "pnf_option_externalDeclaration_31", "pnf_option_functionDefinition_93", 
  "pnf_option_functionDefinition_94", "pnf_option_gccAttributeList_22", 
  "pnf_option_gccAttributeSpecifier_15", "pnf_option_gccAttribute_73", "pnf_option_gccAttribute_block_1_36", 
  "pnf_option_initDeclarator_17", "pnf_option_initializerList_block_1_38", 
  "pnf_option_initializer_82", "pnf_option_initializer_block_1_81", "pnf_option_parameterTypeList_25", 
  "pnf_option_pnf_part_directDeclarator_21_70", "pnf_option_pnf_part_directDeclarator_21_71", 
  "pnf_option_pnf_part_directDeclarator_21_72", "pnf_option_pointer_26", 
  "pnf_option_postfixExpression_102", "pnf_option_postfixExpression_2", 
  "pnf_option_primaryExpression_41", "pnf_option_selectionStatement_88", 
  "pnf_option_specifierQualifierList_65", "pnf_option_statement_89", "pnf_option_statement_90", 
  "pnf_option_statement_91", "pnf_option_statement_block_6_39", "pnf_option_structDeclaration_18", 
  "pnf_option_structDeclarator_66", "pnf_option_structOrUnionSpecifier_61", 
  "pnf_option_structOrUnionSpecifier_62", "pnf_option_typeName_42", "pnf_option_typeName_43", 
  "pnf_part_additiveExpression_4", "pnf_part_andExpression_8", "pnf_part_assignmentExpression_99", 
  "pnf_part_castExpression_103", "pnf_part_directAbstractDeclarator_27", 
  "pnf_part_directDeclarator_21", "pnf_part_enumerator_19", "pnf_part_equalityExpression_7", 
  "pnf_part_exclusiveOrExpression_9", "pnf_part_expression_13", "pnf_part_externalDeclaration_30", 
  "pnf_part_inclusiveOrExpression_10", "pnf_part_initDeclarator_16", "pnf_part_logicalAndExpression_11", 
  "pnf_part_logicalOrExpression_12", "pnf_part_multiplicativeExpression_3", 
  "pnf_part_parameterTypeList_24", "pnf_part_postfixExpression_0", "pnf_part_postfixExpression_1", 
  "pnf_part_postfixExpression_101", "pnf_part_relationalExpression_6", "pnf_part_shiftExpression_5", 
  "pnf_part_statement_100", "pnf_part_unaryExpression_104", "pnf_plus_blockItemList_29", 
  "pnf_plus_declarationList_33", "pnf_plus_declarationSpecifiers2_76", "pnf_plus_designatorList_28", 
  "pnf_plus_primaryExpression_40", "pnf_plus_translationUnit_32", "pnf_plus_typeQualifierList_23", 
  "pnf_star_additiveExpression_49", "pnf_star_andExpression_53", "pnf_star_argumentExpressionList_47", 
  "pnf_star_assignmentExpression_105", "pnf_star_castExpression_107", "pnf_star_declarationSpecifiers_59", 
  "pnf_star_declarationSpecifiers_60", "pnf_star_declarator_63", "pnf_star_directAbstractDeclarator_78", 
  "pnf_star_directDeclarator_69", "pnf_star_enumeratorList_68", "pnf_star_equalityExpression_52", 
  "pnf_star_exclusiveOrExpression_54", "pnf_star_expression_58", "pnf_star_gccAttributeList_74", 
  "pnf_star_genericAssocList_44", "pnf_star_identifierList_37", "pnf_star_inclusiveOrExpression_55", 
  "pnf_star_initDeclaratorList_64", "pnf_star_initializerList_80", "pnf_star_logicalAndExpression_56", 
  "pnf_star_logicalOrExpression_57", "pnf_star_multiplicativeExpression_48", 
  "pnf_star_parameterList_77", "pnf_star_postfixExpression_45", "pnf_star_relationalExpression_51", 
  "pnf_star_shiftExpression_50", "pnf_star_statement_106", "pnf_star_statement_92", 
  "pnf_star_statement_block_3_85", "pnf_star_statement_block_5_86", "pnf_star_structDeclarationList_35", 
  "pnf_star_structDeclaratorList_67", "pnf_star_unaryExpression_108", "pnf_start", 
  "pointer", "postfixExpression", "primaryExpression", "relationalExpression", 
  "selectionStatement_block_1", "shiftExpression", "specifierQualifierList", 
  "statement", "statement_block_1", "statement_block_2", "statement_block_4", 
  "statement_block_6", "staticAssertDeclaration", "storageClassSpecifier", 
  "structDeclaration", "structDeclarator", "structDeclaratorList_block_1", 
  "structOrUnion", "structOrUnionSpecifier", "typeName", "typeQualifier", 
  "typeSpecifier", "typeSpecifier_block_1", "typeSpecifier_block_2", "typedefName", 
  "unaryExpression", "unaryExpression_block_1", "unaryExpression_block_2", 
  "unaryOperator"
};

std::vector<std::string> CParser::_literalNames = {
  "", "'asm'", "'__asm'", "'__asm__'", "'__declspec'", "'__inline__'", "'__inline'", 
  "'__stdcall'", "'__attribute__'", "'__attribute'", "'__extension__'", 
  "'__builtin_va_arg'", "'__builtin_offsetof'", "'__volatile__'", "'__restrict'", 
  "'__typeof__'", "'__typeof'", "'__m128'", "'__m128d'", "'__m128i'", "'__builtin_types_compatible_p'", 
  "'__alignof__'", "'auto'", "'break'", "'case'", "'char'", "'const'", "'continue'", 
  "'default'", "'do'", "'double'", "'else'", "'enum'", "'extern'", "'float'", 
  "'for'", "'goto'", "'if'", "'inline'", "'int'", "'long'", "'register'", 
  "'restrict'", "'return'", "'short'", "'signed'", "'sizeof'", "'static'", 
  "'struct'", "'switch'", "'typedef'", "'union'", "'unsigned'", "'void'", 
  "'volatile'", "'while'", "'_Alignas'", "'_Alignof'", "'_Atomic'", "'_Bool'", 
  "'_Complex'", "'_Generic'", "'_Imaginary'", "'_Noreturn'", "'_Static_assert'", 
  "'_Thread_local'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'<'", "'<='", 
  "'>'", "'>='", "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", 
  "'%'", "'&'", "'|'", "'&&'", "'||'", "'^'", "'!'", "'~'", "'?'", "':'", 
  "';'", "','", "'='", "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", 
  "'>>='", "'&='", "'^='", "'|='", "'=='", "'!='", "'->'", "'.'", "'...'", 
  "'__real__'", "'__imag__'"
};

std::vector<std::string> CParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "Auto", "Break", "Case", "Char", "Const", "Continue", 
  "Default", "Do", "Double", "Else", "Enum", "Extern", "Float", "For", "Goto", 
  "If", "Inline", "Int", "Long", "Register", "Restrict", "Return", "Short", 
  "Signed", "Sizeof", "Static", "Struct", "Switch", "Typedef", "Union", 
  "Unsigned", "Void", "Volatile", "While", "Alignas", "Alignof", "Atomic", 
  "Bool", "Complex", "Generic", "Imaginary", "Noreturn", "StaticAssert", 
  "ThreadLocal", "LeftParen", "RightParen", "LeftBracket", "RightBracket", 
  "LeftBrace", "RightBrace", "Less", "LessEqual", "Greater", "GreaterEqual", 
  "LeftShift", "RightShift", "Plus", "PlusPlus", "Minus", "MinusMinus", 
  "Star", "Div", "Mod", "And", "Or", "AndAnd", "OrOr", "Caret", "Not", "Tilde", 
  "Question", "Colon", "Semi", "Comma", "Assign", "StarAssign", "DivAssign", 
  "ModAssign", "PlusAssign", "MinusAssign", "LeftShiftAssign", "RightShiftAssign", 
  "AndAssign", "XorAssign", "OrAssign", "Equal", "NotEqual", "Arrow", "Dot", 
  "Ellipsis", "RealPart", "ImaginaryPart", "Identifier", "Constant", "StringLiteral", 
  "ComplexDefine", "LineAfterPreprocessing", "LineDirective", "IncludeDirective", 
  "PragmaDirective", "Whitespace", "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary CParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CParser::_tokenNames;

CParser::Initializer::Initializer() {
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
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x7f, 0x62b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 
    0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 0x9, 0xaa, 
    0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 0x9, 0xad, 0x4, 
    0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 0x9, 0xb0, 0x4, 0xb1, 
    0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 0x9, 0xb3, 0x4, 0xb4, 0x9, 
    0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 
    0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 
    0xbb, 0x9, 0xbb, 0x4, 0xbc, 0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 
    0x9, 0xbe, 0x4, 0xbf, 0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 
    0xc1, 0x4, 0xc2, 0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 
    0x4, 0xc5, 0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 
    0xc8, 0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
    0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x19e, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1ad, 0xa, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x1c1, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x1cc, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1e3, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x1ec, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1fc, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0x205, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x22e, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x5, 0x18, 0x237, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 
    0x19, 0x242, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x259, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x266, 
    0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x27e, 0xa, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x28a, 0xa, 0x27, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x296, 0xa, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x2ad, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2c9, 
    0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2d4, 0xa, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x5, 0x47, 0x30d, 0xa, 0x47, 0x3, 0x48, 
    0x5, 0x48, 0x310, 0xa, 0x48, 0x3, 0x49, 0x5, 0x49, 0x313, 0xa, 0x49, 
    0x3, 0x4a, 0x5, 0x4a, 0x316, 0xa, 0x4a, 0x3, 0x4b, 0x5, 0x4b, 0x319, 
    0xa, 0x4b, 0x3, 0x4c, 0x5, 0x4c, 0x31c, 0xa, 0x4c, 0x3, 0x4d, 0x5, 0x4d, 
    0x31f, 0xa, 0x4d, 0x3, 0x4e, 0x5, 0x4e, 0x322, 0xa, 0x4e, 0x3, 0x4f, 
    0x5, 0x4f, 0x325, 0xa, 0x4f, 0x3, 0x50, 0x5, 0x50, 0x328, 0xa, 0x50, 
    0x3, 0x51, 0x5, 0x51, 0x32b, 0xa, 0x51, 0x3, 0x52, 0x5, 0x52, 0x32e, 
    0xa, 0x52, 0x3, 0x53, 0x5, 0x53, 0x331, 0xa, 0x53, 0x3, 0x54, 0x5, 0x54, 
    0x334, 0xa, 0x54, 0x3, 0x55, 0x5, 0x55, 0x337, 0xa, 0x55, 0x3, 0x56, 
    0x5, 0x56, 0x33a, 0xa, 0x56, 0x3, 0x57, 0x5, 0x57, 0x33d, 0xa, 0x57, 
    0x3, 0x58, 0x5, 0x58, 0x340, 0xa, 0x58, 0x3, 0x59, 0x5, 0x59, 0x343, 
    0xa, 0x59, 0x3, 0x5a, 0x5, 0x5a, 0x346, 0xa, 0x5a, 0x3, 0x5b, 0x5, 0x5b, 
    0x349, 0xa, 0x5b, 0x3, 0x5c, 0x5, 0x5c, 0x34c, 0xa, 0x5c, 0x3, 0x5d, 
    0x5, 0x5d, 0x34f, 0xa, 0x5d, 0x3, 0x5e, 0x5, 0x5e, 0x352, 0xa, 0x5e, 
    0x3, 0x5f, 0x5, 0x5f, 0x355, 0xa, 0x5f, 0x3, 0x60, 0x5, 0x60, 0x358, 
    0xa, 0x60, 0x3, 0x61, 0x5, 0x61, 0x35b, 0xa, 0x61, 0x3, 0x62, 0x5, 0x62, 
    0x35e, 0xa, 0x62, 0x3, 0x63, 0x5, 0x63, 0x361, 0xa, 0x63, 0x3, 0x64, 
    0x5, 0x64, 0x364, 0xa, 0x64, 0x3, 0x65, 0x5, 0x65, 0x367, 0xa, 0x65, 
    0x3, 0x66, 0x5, 0x66, 0x36a, 0xa, 0x66, 0x3, 0x67, 0x5, 0x67, 0x36d, 
    0xa, 0x67, 0x3, 0x68, 0x5, 0x68, 0x370, 0xa, 0x68, 0x3, 0x69, 0x5, 0x69, 
    0x373, 0xa, 0x69, 0x3, 0x6a, 0x5, 0x6a, 0x376, 0xa, 0x6a, 0x3, 0x6b, 
    0x5, 0x6b, 0x379, 0xa, 0x6b, 0x3, 0x6c, 0x5, 0x6c, 0x37c, 0xa, 0x6c, 
    0x3, 0x6d, 0x5, 0x6d, 0x37f, 0xa, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
    0x3, 0x6e, 0x5, 0x6e, 0x385, 0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
    0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 
    0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
    0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
    0x72, 0x5, 0x72, 0x3ab, 0xa, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
    0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
    0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x73, 0x5, 0x73, 0x3cb, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
    0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x5, 0x75, 0x3d4, 0xa, 0x75, 
    0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
    0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 
    0x3, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
    0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x3f3, 0xa, 0x7d, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
    0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 
    0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x406, 0xa, 0x7f, 0x3, 0x80, 
    0x3, 0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 
    0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x414, 
    0xa, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x41a, 
    0xa, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
    0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
    0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
    0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
    0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
    0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x43f, 0xa, 0x84, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x5, 0x85, 0x448, 0xa, 0x85, 0x3, 0x86, 0x6, 0x86, 0x44b, 0xa, 
    0x86, 0xd, 0x86, 0xe, 0x86, 0x44c, 0x3, 0x87, 0x6, 0x87, 0x450, 0xa, 
    0x87, 0xd, 0x87, 0xe, 0x87, 0x451, 0x3, 0x88, 0x6, 0x88, 0x455, 0xa, 
    0x88, 0xd, 0x88, 0xe, 0x88, 0x456, 0x3, 0x89, 0x6, 0x89, 0x45a, 0xa, 
    0x89, 0xd, 0x89, 0xe, 0x89, 0x45b, 0x3, 0x8a, 0x6, 0x8a, 0x45f, 0xa, 
    0x8a, 0xd, 0x8a, 0xe, 0x8a, 0x460, 0x3, 0x8b, 0x6, 0x8b, 0x464, 0xa, 
    0x8b, 0xd, 0x8b, 0xe, 0x8b, 0x465, 0x3, 0x8c, 0x6, 0x8c, 0x469, 0xa, 
    0x8c, 0xd, 0x8c, 0xe, 0x8c, 0x46a, 0x3, 0x8d, 0x7, 0x8d, 0x46e, 0xa, 
    0x8d, 0xc, 0x8d, 0xe, 0x8d, 0x471, 0xb, 0x8d, 0x3, 0x8e, 0x7, 0x8e, 
    0x474, 0xa, 0x8e, 0xc, 0x8e, 0xe, 0x8e, 0x477, 0xb, 0x8e, 0x3, 0x8f, 
    0x7, 0x8f, 0x47a, 0xa, 0x8f, 0xc, 0x8f, 0xe, 0x8f, 0x47d, 0xb, 0x8f, 
    0x3, 0x90, 0x7, 0x90, 0x480, 0xa, 0x90, 0xc, 0x90, 0xe, 0x90, 0x483, 
    0xb, 0x90, 0x3, 0x91, 0x7, 0x91, 0x486, 0xa, 0x91, 0xc, 0x91, 0xe, 0x91, 
    0x489, 0xb, 0x91, 0x3, 0x92, 0x7, 0x92, 0x48c, 0xa, 0x92, 0xc, 0x92, 
    0xe, 0x92, 0x48f, 0xb, 0x92, 0x3, 0x93, 0x7, 0x93, 0x492, 0xa, 0x93, 
    0xc, 0x93, 0xe, 0x93, 0x495, 0xb, 0x93, 0x3, 0x94, 0x7, 0x94, 0x498, 
    0xa, 0x94, 0xc, 0x94, 0xe, 0x94, 0x49b, 0xb, 0x94, 0x3, 0x95, 0x7, 0x95, 
    0x49e, 0xa, 0x95, 0xc, 0x95, 0xe, 0x95, 0x4a1, 0xb, 0x95, 0x3, 0x96, 
    0x7, 0x96, 0x4a4, 0xa, 0x96, 0xc, 0x96, 0xe, 0x96, 0x4a7, 0xb, 0x96, 
    0x3, 0x97, 0x7, 0x97, 0x4aa, 0xa, 0x97, 0xc, 0x97, 0xe, 0x97, 0x4ad, 
    0xb, 0x97, 0x3, 0x98, 0x7, 0x98, 0x4b0, 0xa, 0x98, 0xc, 0x98, 0xe, 0x98, 
    0x4b3, 0xb, 0x98, 0x3, 0x99, 0x7, 0x99, 0x4b6, 0xa, 0x99, 0xc, 0x99, 
    0xe, 0x99, 0x4b9, 0xb, 0x99, 0x3, 0x9a, 0x7, 0x9a, 0x4bc, 0xa, 0x9a, 
    0xc, 0x9a, 0xe, 0x9a, 0x4bf, 0xb, 0x9a, 0x3, 0x9b, 0x7, 0x9b, 0x4c2, 
    0xa, 0x9b, 0xc, 0x9b, 0xe, 0x9b, 0x4c5, 0xb, 0x9b, 0x3, 0x9c, 0x7, 0x9c, 
    0x4c8, 0xa, 0x9c, 0xc, 0x9c, 0xe, 0x9c, 0x4cb, 0xb, 0x9c, 0x3, 0x9d, 
    0x7, 0x9d, 0x4ce, 0xa, 0x9d, 0xc, 0x9d, 0xe, 0x9d, 0x4d1, 0xb, 0x9d, 
    0x3, 0x9e, 0x7, 0x9e, 0x4d4, 0xa, 0x9e, 0xc, 0x9e, 0xe, 0x9e, 0x4d7, 
    0xb, 0x9e, 0x3, 0x9f, 0x7, 0x9f, 0x4da, 0xa, 0x9f, 0xc, 0x9f, 0xe, 0x9f, 
    0x4dd, 0xb, 0x9f, 0x3, 0xa0, 0x7, 0xa0, 0x4e0, 0xa, 0xa0, 0xc, 0xa0, 
    0xe, 0xa0, 0x4e3, 0xb, 0xa0, 0x3, 0xa1, 0x7, 0xa1, 0x4e6, 0xa, 0xa1, 
    0xc, 0xa1, 0xe, 0xa1, 0x4e9, 0xb, 0xa1, 0x3, 0xa2, 0x7, 0xa2, 0x4ec, 
    0xa, 0xa2, 0xc, 0xa2, 0xe, 0xa2, 0x4ef, 0xb, 0xa2, 0x3, 0xa3, 0x7, 0xa3, 
    0x4f2, 0xa, 0xa3, 0xc, 0xa3, 0xe, 0xa3, 0x4f5, 0xb, 0xa3, 0x3, 0xa4, 
    0x7, 0xa4, 0x4f8, 0xa, 0xa4, 0xc, 0xa4, 0xe, 0xa4, 0x4fb, 0xb, 0xa4, 
    0x3, 0xa5, 0x7, 0xa5, 0x4fe, 0xa, 0xa5, 0xc, 0xa5, 0xe, 0xa5, 0x501, 
    0xb, 0xa5, 0x3, 0xa6, 0x7, 0xa6, 0x504, 0xa, 0xa6, 0xc, 0xa6, 0xe, 0xa6, 
    0x507, 0xb, 0xa6, 0x3, 0xa7, 0x7, 0xa7, 0x50a, 0xa, 0xa7, 0xc, 0xa7, 
    0xe, 0xa7, 0x50d, 0xb, 0xa7, 0x3, 0xa8, 0x7, 0xa8, 0x510, 0xa, 0xa8, 
    0xc, 0xa8, 0xe, 0xa8, 0x513, 0xb, 0xa8, 0x3, 0xa9, 0x7, 0xa9, 0x516, 
    0xa, 0xa9, 0xc, 0xa9, 0xe, 0xa9, 0x519, 0xb, 0xa9, 0x3, 0xaa, 0x7, 0xaa, 
    0x51c, 0xa, 0xaa, 0xc, 0xaa, 0xe, 0xaa, 0x51f, 0xb, 0xaa, 0x3, 0xab, 
    0x7, 0xab, 0x522, 0xa, 0xab, 0xc, 0xab, 0xe, 0xab, 0x525, 0xb, 0xab, 
    0x3, 0xac, 0x7, 0xac, 0x528, 0xa, 0xac, 0xc, 0xac, 0xe, 0xac, 0x52b, 
    0xb, 0xac, 0x3, 0xad, 0x7, 0xad, 0x52e, 0xa, 0xad, 0xc, 0xad, 0xe, 0xad, 
    0x531, 0xb, 0xad, 0x3, 0xae, 0x7, 0xae, 0x534, 0xa, 0xae, 0xc, 0xae, 
    0xe, 0xae, 0x537, 0xb, 0xae, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 
    0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 
    0xb0, 0x543, 0xa, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 
    0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 
    0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x552, 0xa, 0xb1, 0x3, 0xb2, 
    0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
    0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
    0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
    0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
    0x5, 0xb2, 0x56f, 0xa, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb4, 
    0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb6, 0x3, 
    0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x580, 
    0xa, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 
    0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 
    0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 
    0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 
    0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 
    0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x5a6, 
    0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 
    0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbc, 
    0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 
    0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
    0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x5c3, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x5cb, 0xa, 0xbf, 
    0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc2, 0x3, 
    0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 
    0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x5dc, 0xa, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 
    0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
    0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
    0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
    0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x5f8, 
    0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 
    0xc8, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 
    0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 
    0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 
    0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 
    0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 
    0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x5, 0xc9, 0x623, 0xa, 0xc9, 0x3, 0xca, 
    0x3, 0xca, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x2, 
    0x2, 0xcd, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
    0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 
    0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 
    0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 
    0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 
    0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 
    0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 
    0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 
    0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 
    0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 
    0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 
    0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 
    0x192, 0x194, 0x196, 0x2, 0xf, 0x3, 0x2, 0x3, 0x5, 0x3, 0x2, 0x62, 0x6c, 
    0x5, 0x2, 0x7, 0x9, 0x28, 0x28, 0x41, 0x41, 0x4, 0x2, 0x44, 0x45, 0x61, 
    0x61, 0x4, 0x2, 0xf, 0xf, 0x38, 0x38, 0x8, 0x2, 0x18, 0x18, 0x23, 0x23, 
    0x2b, 0x2b, 0x31, 0x31, 0x34, 0x34, 0x43, 0x43, 0x4, 0x2, 0x32, 0x32, 
    0x35, 0x35, 0x8, 0x2, 0xc, 0xc, 0x10, 0x10, 0x1c, 0x1c, 0x2c, 0x2c, 
    0x38, 0x38, 0x3c, 0x3c, 0xb, 0x2, 0x13, 0x15, 0x1b, 0x1b, 0x20, 0x20, 
    0x24, 0x24, 0x29, 0x2a, 0x2e, 0x2f, 0x36, 0x37, 0x3d, 0x3e, 0x40, 0x40, 
    0x3, 0x2, 0x13, 0x15, 0x4, 0x2, 0x17, 0x17, 0x3b, 0x3b, 0x3, 0x2, 0x72, 
    0x73, 0x7, 0x2, 0x50, 0x50, 0x52, 0x52, 0x54, 0x54, 0x57, 0x57, 0x5c, 
    0x5d, 0x2, 0x60f, 0x2, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0xc, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x1c0, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1cd, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d4, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1e2, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1ed, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x204, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x206, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x22d, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x236, 0x3, 0x2, 0x2, 0x2, 0x30, 0x241, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x243, 0x3, 0x2, 0x2, 0x2, 0x34, 0x245, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x248, 0x3, 0x2, 0x2, 0x2, 0x38, 0x24b, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x258, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x265, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x267, 0x3, 0x2, 0x2, 0x2, 0x44, 0x269, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x48, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x27f, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x289, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x28b, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x295, 0x3, 0x2, 0x2, 0x2, 0x52, 0x297, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x56, 0x2a1, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x2ac, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x2b6, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2ca, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x68, 0x2d5, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2db, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2e1, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2e7, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x78, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x2f0, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2f6, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2fc, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x86, 0x302, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x305, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x308, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x312, 0x3, 0x2, 0x2, 0x2, 0x92, 0x315, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x318, 0x3, 0x2, 0x2, 0x2, 0x96, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x98, 0x31e, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x321, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x324, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x327, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x32a, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0x32d, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x330, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0x333, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x336, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0x339, 0x3, 0x2, 0x2, 0x2, 0xac, 0x33c, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0x33f, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x342, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x345, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0x348, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x34b, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0x34e, 0x3, 0x2, 0x2, 0x2, 0xba, 0x351, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0x354, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x357, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0x35a, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x35d, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0x360, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x363, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0x366, 0x3, 0x2, 0x2, 0x2, 0xca, 0x369, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x36c, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0x36f, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x372, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0x375, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x378, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0x37b, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x37e, 0x3, 0x2, 0x2, 
    0x2, 0xda, 0x384, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x386, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0x389, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x38c, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0x3aa, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x3cc, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0xea, 0x3d5, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0xee, 0x3db, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x3e3, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x3e9, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0x405, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x407, 0x3, 0x2, 0x2, 0x2, 0x100, 0x409, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x413, 0x3, 0x2, 0x2, 0x2, 0x104, 0x419, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x108, 0x447, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x44f, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x454, 0x3, 0x2, 0x2, 0x2, 0x110, 0x459, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x114, 0x463, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x468, 0x3, 0x2, 0x2, 0x2, 0x118, 0x46f, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x475, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x47b, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x481, 0x3, 0x2, 0x2, 0x2, 0x120, 0x487, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x124, 0x493, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x499, 0x3, 0x2, 0x2, 0x2, 0x128, 0x49f, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x4ab, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x130, 0x4b7, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x134, 0x4c3, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x138, 0x4cf, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x4db, 
    0x3, 0x2, 0x2, 0x2, 0x13e, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x140, 0x4e7, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x144, 0x4f3, 
    0x3, 0x2, 0x2, 0x2, 0x146, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x148, 0x4ff, 
    0x3, 0x2, 0x2, 0x2, 0x14a, 0x505, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x50b, 
    0x3, 0x2, 0x2, 0x2, 0x14e, 0x511, 0x3, 0x2, 0x2, 0x2, 0x150, 0x517, 
    0x3, 0x2, 0x2, 0x2, 0x152, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x154, 0x523, 
    0x3, 0x2, 0x2, 0x2, 0x156, 0x529, 0x3, 0x2, 0x2, 0x2, 0x158, 0x52f, 
    0x3, 0x2, 0x2, 0x2, 0x15a, 0x535, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x538, 
    0x3, 0x2, 0x2, 0x2, 0x15e, 0x542, 0x3, 0x2, 0x2, 0x2, 0x160, 0x551, 
    0x3, 0x2, 0x2, 0x2, 0x162, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x164, 0x570, 
    0x3, 0x2, 0x2, 0x2, 0x166, 0x573, 0x3, 0x2, 0x2, 0x2, 0x168, 0x576, 
    0x3, 0x2, 0x2, 0x2, 0x16a, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x5a5, 
    0x3, 0x2, 0x2, 0x2, 0x16e, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x170, 0x5a9, 
    0x3, 0x2, 0x2, 0x2, 0x172, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x174, 0x5af, 
    0x3, 0x2, 0x2, 0x2, 0x176, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x178, 0x5ba, 
    0x3, 0x2, 0x2, 0x2, 0x17a, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x5ca, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x180, 0x5cf, 
    0x3, 0x2, 0x2, 0x2, 0x182, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x184, 0x5dd, 
    0x3, 0x2, 0x2, 0x2, 0x186, 0x5e1, 0x3, 0x2, 0x2, 0x2, 0x188, 0x5f7, 
    0x3, 0x2, 0x2, 0x2, 0x18a, 0x5f9, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x5fb, 
    0x3, 0x2, 0x2, 0x2, 0x18e, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x190, 0x622, 
    0x3, 0x2, 0x2, 0x2, 0x192, 0x624, 0x3, 0x2, 0x2, 0x2, 0x194, 0x626, 
    0x3, 0x2, 0x2, 0x2, 0x196, 0x628, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19e, 
    0x5, 0x15e, 0xb0, 0x2, 0x199, 0x19a, 0x5, 0xba, 0x5e, 0x2, 0x19a, 0x19b, 
    0x5, 0x2c, 0x17, 0x2, 0x19b, 0x19c, 0x5, 0x126, 0x94, 0x2, 0x19c, 0x19e, 
    0x3, 0x2, 0x2, 0x2, 0x19d, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x199, 
    0x3, 0x2, 0x2, 0x2, 0x19e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 
    0x64, 0x33, 0x2, 0x1a0, 0x1a1, 0x5, 0x118, 0x8d, 0x2, 0x1a1, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x7, 0x3a, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 
    0x44, 0x2, 0x2, 0x1a4, 0x1a5, 0x5, 0x184, 0xc3, 0x2, 0x1a5, 0x1a6, 0x7, 
    0x45, 0x2, 0x2, 0x1a6, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 
    0x3a, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x44, 0x2, 0x2, 0x1a9, 0x1aa, 0x5, 
    0x1a, 0xe, 0x2, 0x1aa, 0x1ab, 0x7, 0x45, 0x2, 0x2, 0x1ab, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1a7, 0x3, 
    0x2, 0x2, 0x2, 0x1ad, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x61, 
    0x2, 0x2, 0x1af, 0x1b0, 0x5, 0xc, 0x7, 0x2, 0x1b0, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x1b1, 0x1b2, 0x9, 0x2, 0x2, 0x2, 0x1b2, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x1b3, 0x1b4, 0x5, 0x11e, 0x90, 0x2, 0x1b4, 0x1b5, 0x5, 0x1a, 0xe, 0x2, 
    0x1b5, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x9, 0x3, 0x2, 0x2, 0x1b7, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x3c, 0x2, 0x2, 0x1b9, 0x1ba, 
    0x7, 0x44, 0x2, 0x2, 0x1ba, 0x1bb, 0x5, 0x184, 0xc3, 0x2, 0x1bb, 0x1bc, 
    0x7, 0x45, 0x2, 0x2, 0x1bc, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1c1, 
    0x5, 0x1e, 0x10, 0x2, 0x1be, 0x1c1, 0x5, 0x16c, 0xb7, 0x2, 0x1bf, 0x1c1, 
    0x5, 0x3e, 0x20, 0x2, 0x1c0, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1be, 
    0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x120, 0x91, 0x2, 0x1c3, 0x1c4, 0x5, 
    0x190, 0xc9, 0x2, 0x1c4, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 
    0x120, 0x91, 0x2, 0x1c6, 0x1c7, 0x7, 0x44, 0x2, 0x2, 0x1c7, 0x1c8, 0x5, 
    0x184, 0xc3, 0x2, 0x1c8, 0x1c9, 0x7, 0x45, 0x2, 0x2, 0x1c9, 0x1ca, 0x5, 
    0x5a, 0x2e, 0x2, 0x1ca, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c2, 0x3, 
    0x2, 0x2, 0x2, 0x1cb, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x1cd, 0x1ce, 0x5, 0x8c, 0x47, 0x2, 0x1ce, 0x1cf, 0x7, 0x2, 
    0x2, 0x3, 0x1cf, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x48, 
    0x2, 0x2, 0x1d1, 0x1d2, 0x5, 0x8e, 0x48, 0x2, 0x1d2, 0x1d3, 0x7, 0x49, 
    0x2, 0x2, 0x1d3, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0xc0, 
    0x61, 0x2, 0x1d5, 0x1d6, 0x5, 0x6e, 0x38, 0x2, 0x1d6, 0x1d7, 0x5, 0x90, 
    0x49, 0x2, 0x1d7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x5e, 
    0x2, 0x2, 0x1d9, 0x1da, 0x5, 0x92, 0x4a, 0x2, 0x1da, 0x1db, 0x7, 0x5f, 
    0x2, 0x2, 0x1db, 0x1dc, 0x5, 0x1a, 0xe, 0x2, 0x1dc, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x1dd, 0x1de, 0x5, 0x22, 0x12, 0x2, 0x1de, 0x1df, 0x5, 0x94, 
    0x4b, 0x2, 0x1df, 0x1e0, 0x7, 0x60, 0x2, 0x2, 0x1e0, 0x1e3, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x1e3, 0x5, 0x176, 0xbc, 0x2, 0x1e2, 0x1dd, 0x3, 0x2, 
    0x2, 0x2, 0x1e2, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x1e4, 0x1ec, 0x5, 0x178, 0xbd, 0x2, 0x1e5, 0x1e6, 0x5, 0x188, 
    0xc5, 0x2, 0x1e6, 0x1e7, 0x5, 0x124, 0x93, 0x2, 0x1e7, 0x1ec, 0x3, 0x2, 
    0x2, 0x2, 0x1e8, 0x1ec, 0x5, 0x186, 0xc4, 0x2, 0x1e9, 0x1ec, 0x5, 0x40, 
    0x21, 0x2, 0x1ea, 0x1ec, 0x5, 0x6, 0x4, 0x2, 0x1eb, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1eb, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1e8, 0x3, 0x2, 
    0x2, 0x2, 0x1eb, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1ec, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x5, 0x122, 
    0x92, 0x2, 0x1ee, 0x1ef, 0x5, 0x188, 0xc5, 0x2, 0x1ef, 0x1f0, 0x5, 0x124, 
    0x93, 0x2, 0x1f0, 0x1f1, 0x5, 0x122, 0x92, 0x2, 0x1f1, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x1f3, 0x5, 0xba, 0x5e, 0x2, 0x1f3, 0x1f4, 0x5, 0x2e, 
    0x18, 0x2, 0x1f4, 0x1f5, 0x5, 0x126, 0x94, 0x2, 0x1f5, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x1f7, 0x5, 0x110, 0x89, 0x2, 0x1f7, 0x1f8, 0x7, 0x62, 
    0x2, 0x2, 0x1f8, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x7, 0x74, 
    0x2, 0x2, 0x1fa, 0x1fc, 0x7, 0x5f, 0x2, 0x2, 0x1fb, 0x1f6, 0x3, 0x2, 
    0x2, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x1fd, 0x1fe, 0x7, 0x46, 0x2, 0x2, 0x1fe, 0x1ff, 0x5, 0x1a, 0xe, 
    0x2, 0x1ff, 0x200, 0x5, 0x96, 0x4c, 0x2, 0x200, 0x201, 0x7, 0x47, 0x2, 
    0x2, 0x201, 0x205, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x7, 0x70, 0x2, 
    0x2, 0x203, 0x205, 0x7, 0x74, 0x2, 0x2, 0x204, 0x1fd, 0x3, 0x2, 0x2, 
    0x2, 0x204, 0x202, 0x3, 0x2, 0x2, 0x2, 0x205, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x207, 0x7, 0x71, 0x2, 0x2, 0x207, 0x208, 0x5, 0x1a, 0xe, 0x2, 
    0x208, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x7, 0x44, 0x2, 0x2, 
    0x20a, 0x20b, 0x5, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x7, 0x45, 0x2, 0x2, 
    0x20c, 0x20d, 0x5, 0x126, 0x94, 0x2, 0x20d, 0x20e, 0x5, 0x128, 0x95, 
    0x2, 0x20e, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x46, 0x2, 
    0x2, 0x210, 0x211, 0x5, 0xb4, 0x5b, 0x2, 0x211, 0x212, 0x5, 0xb6, 0x5c, 
    0x2, 0x212, 0x213, 0x7, 0x47, 0x2, 0x2, 0x213, 0x214, 0x5, 0x128, 0x95, 
    0x2, 0x214, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x7, 0x46, 0x2, 
    0x2, 0x216, 0x217, 0x7, 0x31, 0x2, 0x2, 0x217, 0x218, 0x5, 0xb4, 0x5b, 
    0x2, 0x218, 0x219, 0x5, 0xc, 0x7, 0x2, 0x219, 0x21a, 0x7, 0x47, 0x2, 
    0x2, 0x21a, 0x21b, 0x5, 0x128, 0x95, 0x2, 0x21b, 0x22e, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x21d, 0x7, 0x46, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0x116, 0x8c, 
    0x2, 0x21e, 0x21f, 0x7, 0x31, 0x2, 0x2, 0x21f, 0x220, 0x5, 0xc, 0x7, 
    0x2, 0x220, 0x221, 0x7, 0x47, 0x2, 0x2, 0x221, 0x222, 0x5, 0x128, 0x95, 
    0x2, 0x222, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x7, 0x46, 0x2, 
    0x2, 0x224, 0x225, 0x7, 0x54, 0x2, 0x2, 0x225, 0x226, 0x7, 0x47, 0x2, 
    0x2, 0x226, 0x22e, 0x5, 0x128, 0x95, 0x2, 0x227, 0x228, 0x7, 0x44, 0x2, 
    0x2, 0x228, 0x229, 0x5, 0x98, 0x4d, 0x2, 0x229, 0x22a, 0x7, 0x45, 0x2, 
    0x2, 0x22a, 0x22b, 0x5, 0x126, 0x94, 0x2, 0x22b, 0x22c, 0x5, 0x128, 
    0x95, 0x2, 0x22c, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x215, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x223, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x22f, 0x230, 0x7, 0x74, 0x2, 0x2, 0x230, 0x237, 0x5, 0x12a, 0x96, 
    0x2, 0x231, 0x232, 0x7, 0x44, 0x2, 0x2, 0x232, 0x233, 0x5, 0x24, 0x13, 
    0x2, 0x233, 0x234, 0x7, 0x45, 0x2, 0x2, 0x234, 0x235, 0x5, 0x12a, 0x96, 
    0x2, 0x235, 0x237, 0x3, 0x2, 0x2, 0x2, 0x236, 0x22f, 0x3, 0x2, 0x2, 
    0x2, 0x236, 0x231, 0x3, 0x2, 0x2, 0x2, 0x237, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x238, 0x239, 0x7, 0x22, 0x2, 0x2, 0x239, 0x23a, 0x5, 0xd4, 0x6b, 0x2, 
    0x23a, 0x23b, 0x7, 0x48, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0x72, 0x3a, 0x2, 
    0x23c, 0x23d, 0x5, 0xbe, 0x60, 0x2, 0x23d, 0x23e, 0x7, 0x49, 0x2, 0x2, 
    0x23e, 0x242, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x7, 0x22, 0x2, 0x2, 
    0x240, 0x242, 0x7, 0x74, 0x2, 0x2, 0x241, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x242, 0x31, 0x3, 0x2, 0x2, 0x2, 0x243, 
    0x244, 0x7, 0x74, 0x2, 0x2, 0x244, 0x33, 0x3, 0x2, 0x2, 0x2, 0x245, 
    0x246, 0x5, 0x32, 0x1a, 0x2, 0x246, 0x247, 0x5, 0x9a, 0x4e, 0x2, 0x247, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 0x61, 0x2, 0x2, 0x249, 
    0x24a, 0x5, 0x34, 0x1b, 0x2, 0x24a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x24b, 
    0x24c, 0x5, 0x164, 0xb3, 0x2, 0x24c, 0x24d, 0x5, 0x12e, 0x98, 0x2, 0x24d, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x5, 0x92, 0x4a, 0x2, 0x24f, 
    0x250, 0x7, 0x60, 0x2, 0x2, 0x250, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x251, 
    0x259, 0x7, 0x7a, 0x2, 0x2, 0x252, 0x259, 0x7, 0x7b, 0x2, 0x2, 0x253, 
    0x259, 0x5, 0x3e, 0x20, 0x2, 0x254, 0x259, 0x5, 0x1e, 0x10, 0x2, 0x255, 
    0x256, 0x5, 0x9c, 0x4f, 0x2, 0x256, 0x257, 0x7, 0x60, 0x2, 0x2, 0x257, 
    0x259, 0x3, 0x2, 0x2, 0x2, 0x258, 0x251, 0x3, 0x2, 0x2, 0x2, 0x258, 
    0x252, 0x3, 0x2, 0x2, 0x2, 0x258, 0x253, 0x3, 0x2, 0x2, 0x2, 0x258, 
    0x254, 0x3, 0x2, 0x2, 0x2, 0x258, 0x255, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x5, 0x9e, 0x50, 0x2, 0x25b, 
    0x25c, 0x5, 0x24, 0x13, 0x2, 0x25c, 0x25d, 0x5, 0xa0, 0x51, 0x2, 0x25d, 
    0x25e, 0x5, 0x18, 0xd, 0x2, 0x25e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x25f, 
    0x266, 0x5, 0x42, 0x22, 0x2, 0x260, 0x266, 0x5, 0x48, 0x25, 0x2, 0x261, 
    0x262, 0x7, 0x6, 0x2, 0x2, 0x262, 0x263, 0x7, 0x44, 0x2, 0x2, 0x263, 
    0x264, 0x7, 0x74, 0x2, 0x2, 0x264, 0x266, 0x7, 0x45, 0x2, 0x2, 0x265, 
    0x25f, 0x3, 0x2, 0x2, 0x2, 0x265, 0x260, 0x3, 0x2, 0x2, 0x2, 0x265, 
    0x261, 0x3, 0x2, 0x2, 0x2, 0x266, 0x41, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 
    0x9, 0x4, 0x2, 0x2, 0x268, 0x43, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0xa, 
    0x5, 0x2, 0x2, 0x26a, 0x26b, 0x5, 0xa6, 0x54, 0x2, 0x26b, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x26c, 0x26d, 0x7, 0x61, 0x2, 0x2, 0x26d, 0x26e, 0x5, 
    0xa2, 0x52, 0x2, 0x26e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x7, 
    0xa, 0x2, 0x2, 0x270, 0x271, 0x7, 0x44, 0x2, 0x2, 0x271, 0x272, 0x7, 
    0x44, 0x2, 0x2, 0x272, 0x273, 0x5, 0xa4, 0x53, 0x2, 0x273, 0x274, 0x7, 
    0x45, 0x2, 0x2, 0x274, 0x275, 0x7, 0x45, 0x2, 0x2, 0x275, 0x27e, 0x3, 
    0x2, 0x2, 0x2, 0x276, 0x277, 0x7, 0xb, 0x2, 0x2, 0x277, 0x278, 0x7, 
    0x44, 0x2, 0x2, 0x278, 0x279, 0x7, 0x44, 0x2, 0x2, 0x279, 0x27a, 0x5, 
    0xa4, 0x53, 0x2, 0x27a, 0x27b, 0x7, 0x45, 0x2, 0x2, 0x27b, 0x27c, 0x7, 
    0x45, 0x2, 0x2, 0x27c, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x26f, 0x3, 
    0x2, 0x2, 0x2, 0x27d, 0x276, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x27f, 0x280, 0x7, 0x44, 0x2, 0x2, 0x280, 0x281, 0x5, 0xa8, 
    0x55, 0x2, 0x281, 0x282, 0x7, 0x45, 0x2, 0x2, 0x282, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x284, 0x5, 0xa, 0x6, 0x2, 0x284, 0x285, 0x7, 0x44, 
    0x2, 0x2, 0x285, 0x286, 0x5, 0x112, 0x8a, 0x2, 0x286, 0x287, 0x7, 0x45, 
    0x2, 0x2, 0x287, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x288, 0x28a, 0x5, 0x48, 
    0x25, 0x2, 0x289, 0x283, 0x3, 0x2, 0x2, 0x2, 0x289, 0x288, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0x61, 
    0x2, 0x2, 0x28c, 0x28d, 0x5, 0x50, 0x29, 0x2, 0x28d, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x28e, 0x28f, 0x5, 0x184, 0xc3, 0x2, 0x28f, 0x290, 0x7, 0x5f, 
    0x2, 0x2, 0x290, 0x291, 0x5, 0xc, 0x7, 0x2, 0x291, 0x296, 0x3, 0x2, 
    0x2, 0x2, 0x292, 0x293, 0x7, 0x1e, 0x2, 0x2, 0x293, 0x294, 0x7, 0x5f, 
    0x2, 0x2, 0x294, 0x296, 0x5, 0xc, 0x7, 0x2, 0x295, 0x28e, 0x3, 0x2, 
    0x2, 0x2, 0x295, 0x292, 0x3, 0x2, 0x2, 0x2, 0x296, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x297, 0x298, 0x7, 0x3f, 0x2, 0x2, 0x298, 0x299, 0x7, 0x44, 0x2, 
    0x2, 0x299, 0x29a, 0x5, 0xc, 0x7, 0x2, 0x29a, 0x29b, 0x7, 0x61, 0x2, 
    0x2, 0x29b, 0x29c, 0x5, 0x7c, 0x3f, 0x2, 0x29c, 0x29d, 0x7, 0x45, 0x2, 
    0x2, 0x29d, 0x53, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x61, 0x2, 
    0x2, 0x29f, 0x2a0, 0x7, 0x74, 0x2, 0x2, 0x2a0, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x2a1, 0x2a2, 0x5, 0x24, 0x13, 0x2, 0x2a2, 0x2a3, 0x5, 0xaa, 0x56, 
    0x2, 0x2a3, 0x57, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x61, 0x2, 
    0x2, 0x2a5, 0x2a6, 0x5, 0x56, 0x2c, 0x2, 0x2a6, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x2a7, 0x2ad, 0x5, 0xc, 0x7, 0x2, 0x2a8, 0x2a9, 0x7, 0x48, 0x2, 
    0x2, 0x2a9, 0x2aa, 0x5, 0xae, 0x58, 0x2, 0x2aa, 0x2ab, 0x7, 0x49, 0x2, 
    0x2, 0x2ab, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2a7, 0x3, 0x2, 0x2, 
    0x2, 0x2ac, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x2ae, 0x2af, 0x5, 0xac, 0x57, 0x2, 0x2af, 0x2b0, 0x5, 0x5a, 0x2e, 0x2, 
    0x2b0, 0x2b1, 0x5, 0x13e, 0xa0, 0x2, 0x2b1, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x2b2, 0x2b3, 0x7, 0x61, 0x2, 0x2, 0x2b3, 0x2b4, 0x5, 0xac, 0x57, 0x2, 
    0x2b4, 0x2b5, 0x5, 0x5a, 0x2e, 0x2, 0x2b5, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x2b6, 0x2b7, 0x5, 0x5c, 0x2f, 0x2, 0x2b7, 0x2b8, 0x5, 0xb0, 0x59, 0x2, 
    0x2b8, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x26, 0x2, 0x2, 
    0x2ba, 0x2bb, 0x7, 0x74, 0x2, 0x2, 0x2bb, 0x2c9, 0x7, 0x60, 0x2, 0x2, 
    0x2bc, 0x2bd, 0x7, 0x1d, 0x2, 0x2, 0x2bd, 0x2c9, 0x7, 0x60, 0x2, 0x2, 
    0x2be, 0x2bf, 0x7, 0x19, 0x2, 0x2, 0x2bf, 0x2c9, 0x7, 0x60, 0x2, 0x2, 
    0x2c0, 0x2c1, 0x7, 0x2d, 0x2, 0x2, 0x2c1, 0x2c2, 0x5, 0x92, 0x4a, 0x2, 
    0x2c2, 0x2c3, 0x7, 0x60, 0x2, 0x2, 0x2c3, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
    0x2c4, 0x2c5, 0x7, 0x26, 0x2, 0x2, 0x2c5, 0x2c6, 0x5, 0x190, 0xc9, 0x2, 
    0x2c6, 0x2c7, 0x7, 0x60, 0x2, 0x2, 0x2c7, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
    0x2c8, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2bc, 0x3, 0x2, 0x2, 0x2, 
    0x2c8, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c0, 0x3, 0x2, 0x2, 0x2, 
    0x2c8, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x63, 0x3, 0x2, 0x2, 0x2, 0x2ca, 
    0x2cb, 0x5, 0x14, 0xb, 0x2, 0x2cb, 0x2cc, 0x5, 0x144, 0xa3, 0x2, 0x2cc, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 0x5, 0x22, 0x12, 0x2, 0x2ce, 
    0x2cf, 0x5, 0x24, 0x13, 0x2, 0x2cf, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
    0x2d1, 0x5, 0x10e, 0x88, 0x2, 0x2d1, 0x2d2, 0x5, 0xd8, 0x6d, 0x2, 0x2d2, 
    0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2d3, 
    0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 
    0x7, 0x61, 0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0x66, 0x34, 0x2, 0x2d7, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0x76, 0x3c, 0x2, 0x2d9, 0x2da, 
    0x5, 0xb2, 0x5a, 0x2, 0x2da, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 
    0x7, 0x74, 0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0x138, 0x9d, 0x2, 0x2dd, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x5, 0x86, 0x44, 0x2, 0x2df, 0x2e0, 
    0x5, 0x142, 0xa2, 0x2, 0x2e0, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e2, 
    0x5, 0x17c, 0xbf, 0x2, 0x2e2, 0x2e3, 0x5, 0x158, 0xad, 0x2, 0x2e3, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x5, 0x34, 0x1b, 0x2, 0x2e5, 0x2e6, 
    0x5, 0x12c, 0x97, 0x2, 0x2e6, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 
    0x5, 0xa2, 0x52, 0x2, 0x2e8, 0x2e9, 0x5, 0x134, 0x9b, 0x2, 0x2e9, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0x66, 0x34, 0x2, 0x2eb, 0x2ec, 
    0x5, 0x146, 0xa4, 0x2, 0x2ec, 0x77, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 
    0x5, 0x6e, 0x38, 0x2, 0x2ee, 0x2ef, 0x5, 0x152, 0xaa, 0x2, 0x2ef, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x5, 0x6e, 0x38, 0x2, 0x2f1, 0x2f2, 
    0x5, 0x154, 0xab, 0x2, 0x2f2, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 
    0x5, 0x50, 0x29, 0x2, 0x2f4, 0x2f5, 0x5, 0x136, 0x9c, 0x2, 0x2f5, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x5, 0xc, 0x7, 0x2, 0x2f7, 0x2f8, 
    0x5, 0x11c, 0x8f, 0x2, 0x2f8, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 
    0x5, 0x38, 0x1d, 0x2, 0x2fa, 0x2fb, 0x5, 0x11a, 0x8e, 0x2, 0x2fb, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0x80, 0x41, 0x2, 0x2fd, 0x2fe, 
    0x5, 0x130, 0x99, 0x2, 0x2fe, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 
    0x5, 0x82, 0x42, 0x2, 0x300, 0x301, 0x5, 0x13a, 0x9e, 0x2, 0x301, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x5, 0x84, 0x43, 0x2, 0x303, 0x304, 
    0x5, 0x140, 0xa1, 0x2, 0x304, 0x87, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 
    0x5, 0xc, 0x7, 0x2, 0x306, 0x307, 0x5, 0x132, 0x9a, 0x2, 0x307, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0x5, 0x56, 0x2c, 0x2, 0x309, 0x30a, 
    0x5, 0x13c, 0x9f, 0x2, 0x30a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30d, 
    0x5, 0x114, 0x8b, 0x2, 0x30c, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 
    0x3, 0x2, 0x2, 0x2, 0x30d, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x310, 0x5, 
    0x10a, 0x86, 0x2, 0x30f, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 
    0x2, 0x2, 0x2, 0x310, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x311, 0x313, 0x5, 0x1c, 
    0xf, 0x2, 0x312, 0x311, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x3, 0x2, 
    0x2, 0x2, 0x313, 0x91, 0x3, 0x2, 0x2, 0x2, 0x314, 0x316, 0x5, 0x88, 
    0x45, 0x2, 0x315, 0x314, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x3, 0x2, 
    0x2, 0x2, 0x316, 0x93, 0x3, 0x2, 0x2, 0x2, 0x317, 0x319, 0x5, 0x8a, 
    0x46, 0x2, 0x318, 0x317, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x3, 0x2, 
    0x2, 0x2, 0x319, 0x95, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31c, 0x5, 0x2a, 
    0x16, 0x2, 0x31b, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x3, 0x2, 
    0x2, 0x2, 0x31c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31f, 0x5, 0x6a, 
    0x36, 0x2, 0x31e, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 
    0x2, 0x2, 0x31f, 0x99, 0x3, 0x2, 0x2, 0x2, 0x320, 0x322, 0x5, 0xe6, 
    0x74, 0x2, 0x321, 0x320, 0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x3, 0x2, 
    0x2, 0x2, 0x322, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x323, 0x325, 0x5, 0xee, 
    0x78, 0x2, 0x324, 0x323, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x3, 0x2, 
    0x2, 0x2, 0x325, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x326, 0x328, 0x5, 0x22, 
    0x12, 0x2, 0x327, 0x326, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x3, 0x2, 
    0x2, 0x2, 0x328, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32b, 0x5, 0x10c, 
    0x87, 0x2, 0x32a, 0x329, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 0x2, 
    0x2, 0x2, 0x32b, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32e, 0x5, 0x44, 
    0x23, 0x2, 0x32d, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x3, 0x2, 
    0x2, 0x2, 0x32e, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x331, 0x5, 0x74, 
    0x3b, 0x2, 0x330, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 
    0x2, 0x2, 0x331, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x332, 0x334, 0x5, 0x4a, 
    0x26, 0x2, 0x333, 0x332, 0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 0x3, 0x2, 
    0x2, 0x2, 0x334, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x335, 0x337, 0x5, 0x7e, 
    0x40, 0x2, 0x336, 0x335, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x3, 0x2, 
    0x2, 0x2, 0x337, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x338, 0x33a, 0x5, 0xf2, 
    0x7a, 0x2, 0x339, 0x338, 0x3, 0x2, 0x2, 0x2, 0x339, 0x33a, 0x3, 0x2, 
    0x2, 0x2, 0x33a, 0xab, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33d, 0x5, 0x26, 
    0x14, 0x2, 0x33c, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 0x3, 0x2, 
    0x2, 0x2, 0x33d, 0xad, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x340, 0x5, 0x60, 
    0x31, 0x2, 0x33f, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 0x3, 0x2, 
    0x2, 0x2, 0x340, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x341, 0x343, 0x7, 0x61, 
    0x2, 0x2, 0x342, 0x341, 0x3, 0x2, 0x2, 0x2, 0x342, 0x343, 0x3, 0x2, 
    0x2, 0x2, 0x343, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x344, 0x346, 0x5, 0xfa, 
    0x7e, 0x2, 0x345, 0x344, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0x3, 0x2, 
    0x2, 0x2, 0x346, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x347, 0x349, 0x5, 0x116, 
    0x8c, 0x2, 0x348, 0x347, 0x3, 0x2, 0x2, 0x2, 0x348, 0x349, 0x3, 0x2, 
    0x2, 0x2, 0x349, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34c, 0x5, 0xc, 0x7, 
    0x2, 0x34b, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 0x3, 0x2, 0x2, 
    0x2, 0x34c, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34f, 0x5, 0x6c, 0x37, 
    0x2, 0x34e, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34f, 0x3, 0x2, 0x2, 
    0x2, 0x34f, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x350, 0x352, 0x5, 0x15e, 0xb0, 
    0x2, 0x351, 0x350, 0x3, 0x2, 0x2, 0x2, 0x351, 0x352, 0x3, 0x2, 0x2, 
    0x2, 0x352, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x353, 0x355, 0x5, 0x100, 0x81, 
    0x2, 0x354, 0x353, 0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 0x3, 0x2, 0x2, 
    0x2, 0x355, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x356, 0x358, 0x5, 0xfe, 0x80, 
    0x2, 0x357, 0x356, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 
    0x2, 0x358, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x359, 0x35b, 0x7, 0xc, 0x2, 0x2, 
    0x35a, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 
    0x35b, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35e, 0x5, 0x166, 0xb4, 0x2, 
    0x35d, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 0x3, 0x2, 0x2, 0x2, 
    0x35e, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x361, 0x5, 0x16a, 0xb6, 0x2, 
    0x360, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x3, 0x2, 0x2, 0x2, 
    0x361, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x362, 0x364, 0x5, 0x16e, 0xb8, 0x2, 
    0x363, 0x362, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x3, 0x2, 0x2, 0x2, 
    0x364, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x365, 0x367, 0x7, 0x26, 0x2, 0x2, 
    0x366, 0x365, 0x3, 0x2, 0x2, 0x2, 0x366, 0x367, 0x3, 0x2, 0x2, 0x2, 
    0x367, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x368, 0x36a, 0x5, 0x78, 0x3d, 0x2, 
    0x369, 0x368, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36a, 0x3, 0x2, 0x2, 0x2, 
    0x36a, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36d, 0x5, 0x7a, 0x3e, 0x2, 
    0x36c, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x3, 0x2, 0x2, 0x2, 
    0x36d, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x370, 0x5, 0x70, 0x39, 0x2, 
    0x36f, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 0x3, 0x2, 0x2, 0x2, 
    0x370, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x371, 0x373, 0x5, 0x24, 0x13, 0x2, 
    0x372, 0x371, 0x3, 0x2, 0x2, 0x2, 0x372, 0x373, 0x3, 0x2, 0x2, 0x2, 
    0x373, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x374, 0x376, 0x5, 0x48, 0x25, 0x2, 
    0x375, 0x374, 0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 0x3, 0x2, 0x2, 0x2, 
    0x376, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x377, 0x379, 0x7, 0x74, 0x2, 0x2, 
    0x378, 0x377, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 
    0x379, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37c, 0x5, 0x4c, 0x27, 0x2, 
    0x37b, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x3, 0x2, 0x2, 0x2, 
    0x37c, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37f, 0x5, 0x2, 0x2, 0x2, 0x37e, 
    0x37d, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x37f, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x7, 0x50, 0x2, 0x2, 0x381, 
    0x385, 0x5, 0x64, 0x33, 0x2, 0x382, 0x383, 0x7, 0x52, 0x2, 0x2, 0x383, 
    0x385, 0x5, 0x64, 0x33, 0x2, 0x384, 0x380, 0x3, 0x2, 0x2, 0x2, 0x384, 
    0x382, 0x3, 0x2, 0x2, 0x2, 0x385, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 
    0x7, 0x57, 0x2, 0x2, 0x387, 0x388, 0x5, 0x38, 0x1d, 0x2, 0x388, 0xdd, 
    0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x5, 0x190, 0xc9, 0x2, 0x38a, 0x38b, 
    0x5, 0xe, 0x8, 0x2, 0x38b, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x5, 
    0xc0, 0x61, 0x2, 0x38d, 0x38e, 0x7, 0x44, 0x2, 0x2, 0x38e, 0x38f, 0x5, 
    0x184, 0xc3, 0x2, 0x38f, 0x390, 0x7, 0x45, 0x2, 0x2, 0x390, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0x391, 0x392, 0x7, 0x46, 0x2, 0x2, 0x392, 0x393, 0x5, 
    0xb4, 0x5b, 0x2, 0x393, 0x394, 0x5, 0xb6, 0x5c, 0x2, 0x394, 0x395, 0x7, 
    0x47, 0x2, 0x2, 0x395, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x7, 
    0x46, 0x2, 0x2, 0x397, 0x398, 0x7, 0x31, 0x2, 0x2, 0x398, 0x399, 0x5, 
    0xb4, 0x5b, 0x2, 0x399, 0x39a, 0x5, 0xc, 0x7, 0x2, 0x39a, 0x39b, 0x7, 
    0x47, 0x2, 0x2, 0x39b, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39d, 0x7, 
    0x46, 0x2, 0x2, 0x39d, 0x39e, 0x5, 0x116, 0x8c, 0x2, 0x39e, 0x39f, 0x7, 
    0x31, 0x2, 0x2, 0x39f, 0x3a0, 0x5, 0xc, 0x7, 0x2, 0x3a0, 0x3a1, 0x7, 
    0x47, 0x2, 0x2, 0x3a1, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x7, 
    0x46, 0x2, 0x2, 0x3a3, 0x3a4, 0x7, 0x54, 0x2, 0x2, 0x3a4, 0x3ab, 0x7, 
    0x47, 0x2, 0x2, 0x3a5, 0x3a6, 0x7, 0x44, 0x2, 0x2, 0x3a6, 0x3a7, 0x5, 
    0x98, 0x4d, 0x2, 0x3a7, 0x3a8, 0x7, 0x45, 0x2, 0x2, 0x3a8, 0x3a9, 0x5, 
    0x126, 0x94, 0x2, 0x3a9, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x391, 0x3, 
    0x2, 0x2, 0x2, 0x3aa, 0x396, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x39c, 0x3, 
    0x2, 0x2, 0x2, 0x3aa, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3a5, 0x3, 
    0x2, 0x2, 0x2, 0x3ab, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x7, 0x46, 
    0x2, 0x2, 0x3ad, 0x3ae, 0x5, 0xb4, 0x5b, 0x2, 0x3ae, 0x3af, 0x5, 0xb6, 
    0x5c, 0x2, 0x3af, 0x3b0, 0x7, 0x47, 0x2, 0x2, 0x3b0, 0x3cb, 0x3, 0x2, 
    0x2, 0x2, 0x3b1, 0x3b2, 0x7, 0x46, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0x31, 
    0x2, 0x2, 0x3b3, 0x3b4, 0x5, 0xb4, 0x5b, 0x2, 0x3b4, 0x3b5, 0x5, 0xc, 
    0x7, 0x2, 0x3b5, 0x3b6, 0x7, 0x47, 0x2, 0x2, 0x3b6, 0x3cb, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x3b8, 0x7, 0x46, 0x2, 0x2, 0x3b8, 0x3b9, 0x5, 0x116, 
    0x8c, 0x2, 0x3b9, 0x3ba, 0x7, 0x31, 0x2, 0x2, 0x3ba, 0x3bb, 0x5, 0xc, 
    0x7, 0x2, 0x3bb, 0x3bc, 0x7, 0x47, 0x2, 0x2, 0x3bc, 0x3cb, 0x3, 0x2, 
    0x2, 0x2, 0x3bd, 0x3be, 0x7, 0x46, 0x2, 0x2, 0x3be, 0x3bf, 0x5, 0xb4, 
    0x5b, 0x2, 0x3bf, 0x3c0, 0x7, 0x54, 0x2, 0x2, 0x3c0, 0x3c1, 0x7, 0x47, 
    0x2, 0x2, 0x3c1, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0x44, 
    0x2, 0x2, 0x3c3, 0x3c4, 0x5, 0x6a, 0x36, 0x2, 0x3c4, 0x3c5, 0x7, 0x45, 
    0x2, 0x2, 0x3c5, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x3c7, 0x7, 0x44, 
    0x2, 0x2, 0x3c7, 0x3c8, 0x5, 0xb8, 0x5d, 0x2, 0x3c8, 0x3c9, 0x7, 0x45, 
    0x2, 0x2, 0x3c9, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3ac, 0x3, 0x2, 
    0x2, 0x2, 0x3ca, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3b7, 0x3, 0x2, 
    0x2, 0x2, 0x3ca, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c2, 0x3, 0x2, 
    0x2, 0x2, 0x3ca, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0x3cc, 0x3cd, 0x7, 0x62, 0x2, 0x2, 0x3cd, 0x3ce, 0x5, 0x1a, 0xe, 
    0x2, 0x3ce, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x7, 0x6d, 0x2, 
    0x2, 0x3d0, 0x3d4, 0x5, 0x164, 0xb3, 0x2, 0x3d1, 0x3d2, 0x7, 0x6e, 0x2, 
    0x2, 0x3d2, 0x3d4, 0x5, 0x164, 0xb3, 0x2, 0x3d3, 0x3cf, 0x3, 0x2, 0x2, 
    0x2, 0x3d3, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0xe9, 0x3, 0x2, 0x2, 0x2, 
    0x3d5, 0x3d6, 0x7, 0x5b, 0x2, 0x2, 0x3d6, 0x3d7, 0x5, 0x80, 0x41, 0x2, 
    0x3d7, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 0x7, 0x61, 0x2, 0x2, 
    0x3d9, 0x3da, 0x5, 0xc, 0x7, 0x2, 0x3da, 0xed, 0x3, 0x2, 0x2, 0x2, 0x3db, 
    0x3dc, 0x5, 0xa, 0x6, 0x2, 0x3dc, 0x3dd, 0x7, 0x44, 0x2, 0x2, 0x3dd, 
    0x3de, 0x5, 0x112, 0x8a, 0x2, 0x3de, 0x3df, 0x7, 0x45, 0x2, 0x2, 0x3df, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x7, 0x58, 0x2, 0x2, 0x3e1, 
    0x3e2, 0x5, 0x82, 0x42, 0x2, 0x3e2, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
    0x3e4, 0x7, 0x62, 0x2, 0x2, 0x3e4, 0x3e5, 0x5, 0x5a, 0x2e, 0x2, 0x3e5, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 0x7, 0x59, 0x2, 0x2, 0x3e7, 
    0x3e8, 0x5, 0x84, 0x43, 0x2, 0x3e8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x3e9, 
    0x3ea, 0x7, 0x5a, 0x2, 0x2, 0x3ea, 0x3eb, 0x5, 0x86, 0x44, 0x2, 0x3eb, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 0x7, 0x54, 0x2, 0x2, 0x3ed, 
    0x3f3, 0x5, 0x14, 0xb, 0x2, 0x3ee, 0x3ef, 0x7, 0x55, 0x2, 0x2, 0x3ef, 
    0x3f3, 0x5, 0x14, 0xb, 0x2, 0x3f0, 0x3f1, 0x7, 0x56, 0x2, 0x2, 0x3f1, 
    0x3f3, 0x5, 0x14, 0xb, 0x2, 0x3f2, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
    0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f3, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 0x7, 0x61, 0x2, 0x2, 0x3f5, 
    0x3f6, 0x7, 0x71, 0x2, 0x2, 0x3f6, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x3f7, 
    0x3f8, 0x7, 0x46, 0x2, 0x2, 0x3f8, 0x3f9, 0x5, 0x88, 0x45, 0x2, 0x3f9, 
    0x3fa, 0x7, 0x47, 0x2, 0x2, 0x3fa, 0x406, 0x3, 0x2, 0x2, 0x2, 0x3fb, 
    0x3fc, 0x7, 0x44, 0x2, 0x2, 0x3fc, 0x3fd, 0x5, 0xa8, 0x55, 0x2, 0x3fd, 
    0x3fe, 0x7, 0x45, 0x2, 0x2, 0x3fe, 0x406, 0x3, 0x2, 0x2, 0x2, 0x3ff, 
    0x400, 0x7, 0x70, 0x2, 0x2, 0x400, 0x406, 0x7, 0x74, 0x2, 0x2, 0x401, 
    0x402, 0x7, 0x6f, 0x2, 0x2, 0x402, 0x406, 0x7, 0x74, 0x2, 0x2, 0x403, 
    0x406, 0x7, 0x51, 0x2, 0x2, 0x404, 0x406, 0x7, 0x53, 0x2, 0x2, 0x405, 
    0x3f7, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x3ff, 0x3, 0x2, 0x2, 0x2, 0x405, 0x401, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x403, 0x3, 0x2, 0x2, 0x2, 0x405, 0x404, 0x3, 0x2, 0x2, 0x2, 0x406, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 0x7, 0x61, 0x2, 0x2, 0x408, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40a, 0x7, 0xc, 0x2, 0x2, 0x40a, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x7, 0x4a, 0x2, 0x2, 0x40c, 0x414, 
    0x5, 0x168, 0xb5, 0x2, 0x40d, 0x40e, 0x7, 0x4c, 0x2, 0x2, 0x40e, 0x414, 
    0x5, 0x168, 0xb5, 0x2, 0x40f, 0x410, 0x7, 0x4b, 0x2, 0x2, 0x410, 0x414, 
    0x5, 0x168, 0xb5, 0x2, 0x411, 0x412, 0x7, 0x4d, 0x2, 0x2, 0x412, 0x414, 
    0x5, 0x168, 0xb5, 0x2, 0x413, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x413, 0x40d, 
    0x3, 0x2, 0x2, 0x2, 0x413, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x413, 0x411, 
    0x3, 0x2, 0x2, 0x2, 0x414, 0x103, 0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 
    0x7, 0x4e, 0x2, 0x2, 0x416, 0x41a, 0x5, 0x4, 0x3, 0x2, 0x417, 0x418, 
    0x7, 0x4f, 0x2, 0x2, 0x418, 0x41a, 0x5, 0x4, 0x3, 0x2, 0x419, 0x415, 
    0x3, 0x2, 0x2, 0x2, 0x419, 0x417, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 0x7, 0x74, 0x2, 0x2, 0x41c, 0x43f, 
    0x7, 0x5f, 0x2, 0x2, 0x41d, 0x41e, 0x7, 0x1a, 0x2, 0x2, 0x41e, 0x41f, 
    0x5, 0x1a, 0xe, 0x2, 0x41f, 0x420, 0x7, 0x5f, 0x2, 0x2, 0x420, 0x43f, 
    0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 0x7, 0x1e, 0x2, 0x2, 0x422, 0x43f, 
    0x7, 0x5f, 0x2, 0x2, 0x423, 0x424, 0x7, 0x33, 0x2, 0x2, 0x424, 0x425, 
    0x7, 0x44, 0x2, 0x2, 0x425, 0x426, 0x5, 0x88, 0x45, 0x2, 0x426, 0x427, 
    0x7, 0x45, 0x2, 0x2, 0x427, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x428, 0x429, 
    0x7, 0x39, 0x2, 0x2, 0x429, 0x42a, 0x7, 0x44, 0x2, 0x2, 0x42a, 0x42b, 
    0x5, 0x88, 0x45, 0x2, 0x42b, 0x42c, 0x7, 0x45, 0x2, 0x2, 0x42c, 0x43f, 
    0x3, 0x2, 0x2, 0x2, 0x42d, 0x42e, 0x7, 0x25, 0x2, 0x2, 0x42e, 0x42f, 
    0x7, 0x44, 0x2, 0x2, 0x42f, 0x430, 0x5, 0x92, 0x4a, 0x2, 0x430, 0x431, 
    0x7, 0x60, 0x2, 0x2, 0x431, 0x432, 0x5, 0x92, 0x4a, 0x2, 0x432, 0x433, 
    0x7, 0x60, 0x2, 0x2, 0x433, 0x434, 0x5, 0x92, 0x4a, 0x2, 0x434, 0x435, 
    0x7, 0x45, 0x2, 0x2, 0x435, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x436, 0x437, 
    0x7, 0x25, 0x2, 0x2, 0x437, 0x438, 0x7, 0x44, 0x2, 0x2, 0x438, 0x439, 
    0x5, 0x1e, 0x10, 0x2, 0x439, 0x43a, 0x5, 0x92, 0x4a, 0x2, 0x43a, 0x43b, 
    0x7, 0x60, 0x2, 0x2, 0x43b, 0x43c, 0x5, 0x92, 0x4a, 0x2, 0x43c, 0x43d, 
    0x7, 0x45, 0x2, 0x2, 0x43d, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x41b, 
    0x3, 0x2, 0x2, 0x2, 0x43e, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x421, 
    0x3, 0x2, 0x2, 0x2, 0x43e, 0x423, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x428, 
    0x3, 0x2, 0x2, 0x2, 0x43e, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x436, 
    0x3, 0x2, 0x2, 0x2, 0x43f, 0x107, 0x3, 0x2, 0x2, 0x2, 0x440, 0x448, 
    0x7, 0x51, 0x2, 0x2, 0x441, 0x448, 0x7, 0x53, 0x2, 0x2, 0x442, 0x443, 
    0x5, 0x196, 0xcc, 0x2, 0x443, 0x444, 0x5, 0x120, 0x91, 0x2, 0x444, 0x448, 
    0x3, 0x2, 0x2, 0x2, 0x445, 0x448, 0x7, 0x30, 0x2, 0x2, 0x446, 0x448, 
    0x5, 0x194, 0xcb, 0x2, 0x447, 0x440, 0x3, 0x2, 0x2, 0x2, 0x447, 0x441, 
    0x3, 0x2, 0x2, 0x2, 0x447, 0x442, 0x3, 0x2, 0x2, 0x2, 0x447, 0x445, 
    0x3, 0x2, 0x2, 0x2, 0x447, 0x446, 0x3, 0x2, 0x2, 0x2, 0x448, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x449, 0x44b, 0x5, 0x12, 0xa, 0x2, 0x44a, 0x449, 
    0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44a, 
    0x3, 0x2, 0x2, 0x2, 0x44c, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x44e, 0x450, 0x5, 0x1e, 0x10, 0x2, 0x44f, 0x44e, 
    0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 0x3, 0x2, 0x2, 0x2, 0x451, 0x44f, 
    0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x3, 0x2, 0x2, 0x2, 0x452, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x453, 0x455, 0x5, 0x20, 0x11, 0x2, 0x454, 0x453, 
    0x3, 0x2, 0x2, 0x2, 0x455, 0x456, 0x3, 0x2, 0x2, 0x2, 0x456, 0x454, 
    0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x3, 0x2, 0x2, 0x2, 0x457, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x458, 0x45a, 0x5, 0x28, 0x15, 0x2, 0x459, 0x458, 
    0x3, 0x2, 0x2, 0x2, 0x45a, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x459, 
    0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x45d, 0x45f, 0x7, 0x76, 0x2, 0x2, 0x45e, 0x45d, 
    0x3, 0x2, 0x2, 0x2, 0x45f, 0x460, 0x3, 0x2, 0x2, 0x2, 0x460, 0x45e, 
    0x3, 0x2, 0x2, 0x2, 0x460, 0x461, 0x3, 0x2, 0x2, 0x2, 0x461, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x462, 0x464, 0x5, 0x3c, 0x1f, 0x2, 0x463, 0x462, 
    0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x3, 0x2, 0x2, 0x2, 0x465, 0x463, 
    0x3, 0x2, 0x2, 0x2, 0x465, 0x466, 0x3, 0x2, 0x2, 0x2, 0x466, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0x467, 0x469, 0x5, 0x186, 0xc4, 0x2, 0x468, 0x467, 
    0x3, 0x2, 0x2, 0x2, 0x469, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x468, 
    0x3, 0x2, 0x2, 0x2, 0x46a, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x117, 
    0x3, 0x2, 0x2, 0x2, 0x46c, 0x46e, 0x5, 0xda, 0x6e, 0x2, 0x46d, 0x46c, 
    0x3, 0x2, 0x2, 0x2, 0x46e, 0x471, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x46d, 
    0x3, 0x2, 0x2, 0x2, 0x46f, 0x470, 0x3, 0x2, 0x2, 0x2, 0x470, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x471, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x472, 0x474, 
    0x5, 0xdc, 0x6f, 0x2, 0x473, 0x472, 0x3, 0x2, 0x2, 0x2, 0x474, 0x477, 
    0x3, 0x2, 0x2, 0x2, 0x475, 0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 
    0x3, 0x2, 0x2, 0x2, 0x476, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x477, 0x475, 
    0x3, 0x2, 0x2, 0x2, 0x478, 0x47a, 0x5, 0x8, 0x5, 0x2, 0x479, 0x478, 
    0x3, 0x2, 0x2, 0x2, 0x47a, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x479, 
    0x3, 0x2, 0x2, 0x2, 0x47b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x47d, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x480, 
    0x5, 0xde, 0x70, 0x2, 0x47f, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x480, 0x483, 
    0x3, 0x2, 0x2, 0x2, 0x481, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x481, 0x482, 
    0x3, 0x2, 0x2, 0x2, 0x482, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x483, 0x481, 
    0x3, 0x2, 0x2, 0x2, 0x484, 0x486, 0x5, 0xe0, 0x71, 0x2, 0x485, 0x484, 
    0x3, 0x2, 0x2, 0x2, 0x486, 0x489, 0x3, 0x2, 0x2, 0x2, 0x487, 0x485, 
    0x3, 0x2, 0x2, 0x2, 0x487, 0x488, 0x3, 0x2, 0x2, 0x2, 0x488, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x489, 0x487, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48c, 
    0x5, 0x20, 0x11, 0x2, 0x48b, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48f, 
    0x3, 0x2, 0x2, 0x2, 0x48d, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 
    0x3, 0x2, 0x2, 0x2, 0x48e, 0x123, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48d, 
    0x3, 0x2, 0x2, 0x2, 0x490, 0x492, 0x5, 0x15e, 0xb0, 0x2, 0x491, 0x490, 
    0x3, 0x2, 0x2, 0x2, 0x492, 0x495, 0x3, 0x2, 0x2, 0x2, 0x493, 0x491, 
    0x3, 0x2, 0x2, 0x2, 0x493, 0x494, 0x3, 0x2, 0x2, 0x2, 0x494, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x495, 0x493, 0x3, 0x2, 0x2, 0x2, 0x496, 0x498, 
    0x5, 0x4c, 0x27, 0x2, 0x497, 0x496, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49b, 
    0x3, 0x2, 0x2, 0x2, 0x499, 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 
    0x3, 0x2, 0x2, 0x2, 0x49a, 0x127, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x499, 
    0x3, 0x2, 0x2, 0x2, 0x49c, 0x49e, 0x5, 0xe2, 0x72, 0x2, 0x49d, 0x49c, 
    0x3, 0x2, 0x2, 0x2, 0x49e, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x49d, 
    0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a4, 
    0x5, 0xe4, 0x73, 0x2, 0x4a3, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a7, 
    0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a6, 
    0x3, 0x2, 0x2, 0x2, 0x4a6, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x4a5, 
    0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4aa, 0x5, 0x36, 0x1c, 0x2, 0x4a9, 0x4a8, 
    0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4a9, 
    0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4b0, 
    0x5, 0xe8, 0x75, 0x2, 0x4af, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b3, 
    0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 
    0x3, 0x2, 0x2, 0x2, 0x4b2, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b1, 
    0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b6, 0x5, 0xea, 0x76, 0x2, 0x4b5, 0x4b4, 
    0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b5, 
    0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bc, 
    0x5, 0xec, 0x77, 0x2, 0x4bb, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bf, 
    0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 
    0x3, 0x2, 0x2, 0x2, 0x4be, 0x133, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4bd, 
    0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4c2, 0x5, 0x46, 0x24, 0x2, 0x4c1, 0x4c0, 
    0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c1, 
    0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c8, 
    0x5, 0x4e, 0x28, 0x2, 0x4c7, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4cb, 
    0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ca, 
    0x3, 0x2, 0x2, 0x2, 0x4ca, 0x137, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4c9, 
    0x3, 0x2, 0x2, 0x2, 0x4cc, 0x4ce, 0x5, 0x54, 0x2b, 0x2, 0x4cd, 0x4cc, 
    0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4cd, 
    0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d4, 
    0x5, 0xf0, 0x79, 0x2, 0x4d3, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d7, 
    0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d6, 
    0x3, 0x2, 0x2, 0x2, 0x4d6, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4d5, 
    0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4da, 0x5, 0x58, 0x2d, 0x2, 0x4d9, 0x4d8, 
    0x3, 0x2, 0x2, 0x2, 0x4da, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4d9, 
    0x3, 0x2, 0x2, 0x2, 0x4db, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x13d, 
    0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4e0, 
    0x5, 0x5e, 0x30, 0x2, 0x4df, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4e3, 
    0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4df, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4e2, 
    0x3, 0x2, 0x2, 0x2, 0x4e2, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e1, 
    0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e6, 0x5, 0xf4, 0x7b, 0x2, 0x4e5, 0x4e4, 
    0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e5, 
    0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4ec, 
    0x5, 0xf6, 0x7c, 0x2, 0x4eb, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ef, 
    0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4ee, 
    0x3, 0x2, 0x2, 0x2, 0x4ee, 0x143, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4ed, 
    0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f2, 0x5, 0xf8, 0x7d, 0x2, 0x4f1, 0x4f0, 
    0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f1, 
    0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x145, 
    0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x4f8, 
    0x5, 0x68, 0x35, 0x2, 0x4f7, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x4fb, 
    0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4fa, 
    0x3, 0x2, 0x2, 0x2, 0x4fa, 0x147, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4f9, 
    0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fe, 0x5, 0xfc, 0x7f, 0x2, 0x4fd, 0x4fc, 
    0x3, 0x2, 0x2, 0x2, 0x4fe, 0x501, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x4fd, 
    0x3, 0x2, 0x2, 0x2, 0x4ff, 0x500, 0x3, 0x2, 0x2, 0x2, 0x500, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x501, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x502, 0x504, 
    0x5, 0x102, 0x82, 0x2, 0x503, 0x502, 0x3, 0x2, 0x2, 0x2, 0x504, 0x507, 
    0x3, 0x2, 0x2, 0x2, 0x505, 0x503, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 
    0x3, 0x2, 0x2, 0x2, 0x506, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x507, 0x505, 
    0x3, 0x2, 0x2, 0x2, 0x508, 0x50a, 0x5, 0x104, 0x83, 0x2, 0x509, 0x508, 
    0x3, 0x2, 0x2, 0x2, 0x50a, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x509, 
    0x3, 0x2, 0x2, 0x2, 0x50b, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x50d, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x510, 
    0x5, 0x106, 0x84, 0x2, 0x50f, 0x50e, 0x3, 0x2, 0x2, 0x2, 0x510, 0x513, 
    0x3, 0x2, 0x2, 0x2, 0x511, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x511, 0x512, 
    0x3, 0x2, 0x2, 0x2, 0x512, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x513, 0x511, 
    0x3, 0x2, 0x2, 0x2, 0x514, 0x516, 0x5, 0x174, 0xbb, 0x2, 0x515, 0x514, 
    0x3, 0x2, 0x2, 0x2, 0x516, 0x519, 0x3, 0x2, 0x2, 0x2, 0x517, 0x515, 
    0x3, 0x2, 0x2, 0x2, 0x517, 0x518, 0x3, 0x2, 0x2, 0x2, 0x518, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x519, 0x517, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x51c, 
    0x5, 0x170, 0xb9, 0x2, 0x51b, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51f, 
    0x3, 0x2, 0x2, 0x2, 0x51d, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x51e, 
    0x3, 0x2, 0x2, 0x2, 0x51e, 0x153, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x51d, 
    0x3, 0x2, 0x2, 0x2, 0x520, 0x522, 0x5, 0x172, 0xba, 0x2, 0x521, 0x520, 
    0x3, 0x2, 0x2, 0x2, 0x522, 0x525, 0x3, 0x2, 0x2, 0x2, 0x523, 0x521, 
    0x3, 0x2, 0x2, 0x2, 0x523, 0x524, 0x3, 0x2, 0x2, 0x2, 0x524, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x525, 0x523, 0x3, 0x2, 0x2, 0x2, 0x526, 0x528, 
    0x5, 0x17a, 0xbe, 0x2, 0x527, 0x526, 0x3, 0x2, 0x2, 0x2, 0x528, 0x52b, 
    0x3, 0x2, 0x2, 0x2, 0x529, 0x527, 0x3, 0x2, 0x2, 0x2, 0x529, 0x52a, 
    0x3, 0x2, 0x2, 0x2, 0x52a, 0x157, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x529, 
    0x3, 0x2, 0x2, 0x2, 0x52c, 0x52e, 0x5, 0x17e, 0xc0, 0x2, 0x52d, 0x52c, 
    0x3, 0x2, 0x2, 0x2, 0x52e, 0x531, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x52d, 
    0x3, 0x2, 0x2, 0x2, 0x52f, 0x530, 0x3, 0x2, 0x2, 0x2, 0x530, 0x159, 
    0x3, 0x2, 0x2, 0x2, 0x531, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x532, 0x534, 
    0x5, 0x108, 0x85, 0x2, 0x533, 0x532, 0x3, 0x2, 0x2, 0x2, 0x534, 0x537, 
    0x3, 0x2, 0x2, 0x2, 0x535, 0x533, 0x3, 0x2, 0x2, 0x2, 0x535, 0x536, 
    0x3, 0x2, 0x2, 0x2, 0x536, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x537, 0x535, 
    0x3, 0x2, 0x2, 0x2, 0x538, 0x539, 0x5, 0x16, 0xc, 0x2, 0x539, 0x15d, 
    0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x7, 0x54, 0x2, 0x2, 0x53b, 0x53c, 
    0x5, 0xb4, 0x5b, 0x2, 0x53c, 0x53d, 0x5, 0xba, 0x5e, 0x2, 0x53d, 0x543, 
    0x3, 0x2, 0x2, 0x2, 0x53e, 0x53f, 0x7, 0x5b, 0x2, 0x2, 0x53f, 0x540, 
    0x5, 0xb4, 0x5b, 0x2, 0x540, 0x541, 0x5, 0xba, 0x5e, 0x2, 0x541, 0x543, 
    0x3, 0x2, 0x2, 0x2, 0x542, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x542, 0x53e, 
    0x3, 0x2, 0x2, 0x2, 0x543, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 
    0x5, 0x162, 0xb2, 0x2, 0x545, 0x546, 0x5, 0x148, 0xa5, 0x2, 0x546, 0x552, 
    0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x5, 0xbc, 0x5f, 0x2, 0x548, 0x549, 
    0x7, 0x44, 0x2, 0x2, 0x549, 0x54a, 0x5, 0x184, 0xc3, 0x2, 0x54a, 0x54b, 
    0x7, 0x45, 0x2, 0x2, 0x54b, 0x54c, 0x7, 0x48, 0x2, 0x2, 0x54c, 0x54d, 
    0x5, 0x5c, 0x2f, 0x2, 0x54d, 0x54e, 0x5, 0xbe, 0x60, 0x2, 0x54e, 0x54f, 
    0x7, 0x49, 0x2, 0x2, 0x54f, 0x550, 0x5, 0x148, 0xa5, 0x2, 0x550, 0x552, 
    0x3, 0x2, 0x2, 0x2, 0x551, 0x544, 0x3, 0x2, 0x2, 0x2, 0x551, 0x547, 
    0x3, 0x2, 0x2, 0x2, 0x552, 0x161, 0x3, 0x2, 0x2, 0x2, 0x553, 0x56f, 
    0x7, 0x74, 0x2, 0x2, 0x554, 0x56f, 0x7, 0x75, 0x2, 0x2, 0x555, 0x56f, 
    0x5, 0x112, 0x8a, 0x2, 0x556, 0x557, 0x7, 0x44, 0x2, 0x2, 0x557, 0x558, 
    0x5, 0x88, 0x45, 0x2, 0x558, 0x559, 0x7, 0x45, 0x2, 0x2, 0x559, 0x56f, 
    0x3, 0x2, 0x2, 0x2, 0x55a, 0x56f, 0x5, 0x52, 0x2a, 0x2, 0x55b, 0x55c, 
    0x5, 0xc0, 0x61, 0x2, 0x55c, 0x55d, 0x7, 0x44, 0x2, 0x2, 0x55d, 0x55e, 
    0x5, 0x18, 0xd, 0x2, 0x55e, 0x55f, 0x7, 0x45, 0x2, 0x2, 0x55f, 0x56f, 
    0x3, 0x2, 0x2, 0x2, 0x560, 0x561, 0x7, 0xd, 0x2, 0x2, 0x561, 0x562, 
    0x7, 0x44, 0x2, 0x2, 0x562, 0x563, 0x5, 0x190, 0xc9, 0x2, 0x563, 0x564, 
    0x7, 0x61, 0x2, 0x2, 0x564, 0x565, 0x5, 0x184, 0xc3, 0x2, 0x565, 0x566, 
    0x7, 0x45, 0x2, 0x2, 0x566, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x567, 0x568, 
    0x7, 0xe, 0x2, 0x2, 0x568, 0x569, 0x7, 0x44, 0x2, 0x2, 0x569, 0x56a, 
    0x5, 0x184, 0xc3, 0x2, 0x56a, 0x56b, 0x7, 0x61, 0x2, 0x2, 0x56b, 0x56c, 
    0x5, 0x190, 0xc9, 0x2, 0x56c, 0x56d, 0x7, 0x45, 0x2, 0x2, 0x56d, 0x56f, 
    0x3, 0x2, 0x2, 0x2, 0x56e, 0x553, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x554, 
    0x3, 0x2, 0x2, 0x2, 0x56e, 0x555, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x556, 
    0x3, 0x2, 0x2, 0x2, 0x56e, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x55b, 
    0x3, 0x2, 0x2, 0x2, 0x56e, 0x560, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x567, 
    0x3, 0x2, 0x2, 0x2, 0x56f, 0x163, 0x3, 0x2, 0x2, 0x2, 0x570, 0x571, 
    0x5, 0x168, 0xb5, 0x2, 0x571, 0x572, 0x5, 0x14a, 0xa6, 0x2, 0x572, 0x165, 
    0x3, 0x2, 0x2, 0x2, 0x573, 0x574, 0x7, 0x21, 0x2, 0x2, 0x574, 0x575, 
    0x5, 0x16c, 0xb7, 0x2, 0x575, 0x167, 0x3, 0x2, 0x2, 0x2, 0x576, 0x577, 
    0x5, 0x4, 0x3, 0x2, 0x577, 0x578, 0x5, 0x14c, 0xa7, 0x2, 0x578, 0x169, 
    0x3, 0x2, 0x2, 0x2, 0x579, 0x57a, 0x5, 0x188, 0xc5, 0x2, 0x57a, 0x57b, 
    0x5, 0xc4, 0x63, 0x2, 0x57b, 0x580, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 
    0x5, 0x186, 0xc4, 0x2, 0x57d, 0x57e, 0x5, 0xc4, 0x63, 0x2, 0x57e, 0x580, 
    0x3, 0x2, 0x2, 0x2, 0x57f, 0x579, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x57c, 
    0x3, 0x2, 0x2, 0x2, 0x580, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x581, 0x582, 
    0x5, 0x14e, 0xa8, 0x2, 0x582, 0x583, 0x5, 0x18, 0xd, 0x2, 0x583, 0x5a6, 
    0x3, 0x2, 0x2, 0x2, 0x584, 0x585, 0x5, 0x14e, 0xa8, 0x2, 0x585, 0x586, 
    0x5, 0x3a, 0x1e, 0x2, 0x586, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x587, 0x588, 
    0x5, 0x14e, 0xa8, 0x2, 0x588, 0x589, 0x7, 0x27, 0x2, 0x2, 0x589, 0x58a, 
    0x7, 0x44, 0x2, 0x2, 0x58a, 0x58b, 0x5, 0x88, 0x45, 0x2, 0x58b, 0x58c, 
    0x7, 0x45, 0x2, 0x2, 0x58c, 0x58d, 0x5, 0x16c, 0xb7, 0x2, 0x58d, 0x58e, 
    0x5, 0xc2, 0x62, 0x2, 0x58e, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x58f, 0x590, 
    0x5, 0x14e, 0xa8, 0x2, 0x590, 0x591, 0x7, 0x1f, 0x2, 0x2, 0x591, 0x592, 
    0x5, 0x16c, 0xb7, 0x2, 0x592, 0x593, 0x7, 0x39, 0x2, 0x2, 0x593, 0x594, 
    0x7, 0x44, 0x2, 0x2, 0x594, 0x595, 0x5, 0x88, 0x45, 0x2, 0x595, 0x596, 
    0x7, 0x45, 0x2, 0x2, 0x596, 0x597, 0x7, 0x60, 0x2, 0x2, 0x597, 0x5a6, 
    0x3, 0x2, 0x2, 0x2, 0x598, 0x599, 0x5, 0x14e, 0xa8, 0x2, 0x599, 0x59a, 
    0x5, 0x62, 0x32, 0x2, 0x59a, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x59c, 
    0x5, 0x14e, 0xa8, 0x2, 0x59c, 0x59d, 0x5, 0xa, 0x6, 0x2, 0x59d, 0x59e, 
    0x5, 0xc6, 0x64, 0x2, 0x59e, 0x59f, 0x5, 0xc8, 0x65, 0x2, 0x59f, 0x5a0, 
    0x7, 0x44, 0x2, 0x2, 0x5a0, 0x5a1, 0x5, 0xca, 0x66, 0x2, 0x5a1, 0x5a2, 
    0x5, 0x150, 0xa9, 0x2, 0x5a2, 0x5a3, 0x7, 0x45, 0x2, 0x2, 0x5a3, 0x5a4, 
    0x7, 0x60, 0x2, 0x2, 0x5a4, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x581, 
    0x3, 0x2, 0x2, 0x2, 0x5a5, 0x584, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x587, 
    0x3, 0x2, 0x2, 0x2, 0x5a5, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x598, 
    0x3, 0x2, 0x2, 0x2, 0x5a5, 0x59b, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x16d, 
    0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a8, 0x9, 0x6, 0x2, 0x2, 0x5a8, 0x16f, 
    0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5aa, 0x7, 0x61, 0x2, 0x2, 0x5aa, 0x5ab, 
    0x5, 0x6e, 0x38, 0x2, 0x5ab, 0x171, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 
    0x7, 0x61, 0x2, 0x2, 0x5ad, 0x5ae, 0x5, 0x6e, 0x38, 0x2, 0x5ae, 0x173, 
    0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b0, 0x7, 0x5f, 0x2, 0x2, 0x5b0, 0x5b1, 
    0x5, 0xcc, 0x67, 0x2, 0x5b1, 0x175, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 
    0x7, 0x42, 0x2, 0x2, 0x5b3, 0x5b4, 0x7, 0x44, 0x2, 0x2, 0x5b4, 0x5b5, 
    0x5, 0x1a, 0xe, 0x2, 0x5b5, 0x5b6, 0x7, 0x61, 0x2, 0x2, 0x5b6, 0x5b7, 
    0x5, 0x112, 0x8a, 0x2, 0x5b7, 0x5b8, 0x7, 0x45, 0x2, 0x2, 0x5b8, 0x5b9, 
    0x7, 0x60, 0x2, 0x2, 0x5b9, 0x177, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bb, 
    0x9, 0x7, 0x2, 0x2, 0x5bb, 0x179, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5bd, 
    0x5, 0xd6, 0x6c, 0x2, 0x5bd, 0x5be, 0x5, 0x16a, 0xb6, 0x2, 0x5be, 0x5bf, 
    0x5, 0xce, 0x68, 0x2, 0x5bf, 0x5c0, 0x7, 0x60, 0x2, 0x2, 0x5c0, 0x5c3, 
    0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c3, 0x5, 0x176, 0xbc, 0x2, 0x5c2, 0x5bc, 
    0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c1, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5cb, 0x5, 0x24, 0x13, 0x2, 0x5c5, 0x5c6, 
    0x5, 0xd0, 0x69, 0x2, 0x5c6, 0x5c7, 0x7, 0x5f, 0x2, 0x2, 0x5c7, 0x5c8, 
    0x5, 0x1a, 0xe, 0x2, 0x5c8, 0x5c9, 0x5, 0xd2, 0x6a, 0x2, 0x5c9, 0x5cb, 
    0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5c5, 
    0x3, 0x2, 0x2, 0x2, 0x5cb, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5cd, 
    0x7, 0x61, 0x2, 0x2, 0x5cd, 0x5ce, 0x5, 0x17c, 0xbf, 0x2, 0x5ce, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d0, 0x9, 0x8, 0x2, 0x2, 0x5d0, 0x181, 
    0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d2, 0x5, 0x180, 0xc1, 0x2, 0x5d2, 0x5d3, 
    0x5, 0xd2, 0x6a, 0x2, 0x5d3, 0x5d4, 0x5, 0xd4, 0x6b, 0x2, 0x5d4, 0x5d5, 
    0x7, 0x48, 0x2, 0x2, 0x5d5, 0x5d6, 0x5, 0x156, 0xac, 0x2, 0x5d6, 0x5d7, 
    0x7, 0x49, 0x2, 0x2, 0x5d7, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d9, 
    0x5, 0x180, 0xc1, 0x2, 0x5d9, 0x5da, 0x7, 0x74, 0x2, 0x2, 0x5da, 0x5dc, 
    0x3, 0x2, 0x2, 0x2, 0x5db, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5d8, 
    0x3, 0x2, 0x2, 0x2, 0x5dc, 0x183, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 
    0x5, 0xd6, 0x6c, 0x2, 0x5de, 0x5df, 0x5, 0x16a, 0xb6, 0x2, 0x5df, 0x5e0, 
    0x5, 0xd8, 0x6d, 0x2, 0x5e0, 0x185, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e2, 
    0x9, 0x9, 0x2, 0x2, 0x5e2, 0x187, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5f8, 
    0x5, 0x18a, 0xc6, 0x2, 0x5e4, 0x5e5, 0x7, 0xc, 0x2, 0x2, 0x5e5, 0x5e6, 
    0x7, 0x44, 0x2, 0x2, 0x5e6, 0x5e7, 0x5, 0x18c, 0xc7, 0x2, 0x5e7, 0x5e8, 
    0x7, 0x45, 0x2, 0x2, 0x5e8, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5f8, 
    0x5, 0x10, 0x9, 0x2, 0x5ea, 0x5f8, 0x5, 0x182, 0xc2, 0x2, 0x5eb, 0x5f8, 
    0x5, 0x30, 0x19, 0x2, 0x5ec, 0x5f8, 0x5, 0x18e, 0xc8, 0x2, 0x5ed, 0x5ee, 
    0x7, 0x11, 0x2, 0x2, 0x5ee, 0x5ef, 0x7, 0x44, 0x2, 0x2, 0x5ef, 0x5f0, 
    0x5, 0x1a, 0xe, 0x2, 0x5f0, 0x5f1, 0x7, 0x45, 0x2, 0x2, 0x5f1, 0x5f8, 
    0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5f3, 0x7, 0x12, 0x2, 0x2, 0x5f3, 0x5f4, 
    0x7, 0x44, 0x2, 0x2, 0x5f4, 0x5f5, 0x5, 0x1a, 0xe, 0x2, 0x5f5, 0x5f6, 
    0x7, 0x45, 0x2, 0x2, 0x5f6, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5e3, 
    0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5e9, 
    0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5eb, 
    0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5ed, 
    0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x189, 
    0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fa, 0x9, 0xa, 0x2, 0x2, 0x5fa, 0x18b, 
    0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fc, 0x9, 0xb, 0x2, 0x2, 0x5fc, 0x18d, 
    0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5fe, 0x7, 0x74, 0x2, 0x2, 0x5fe, 0x18f, 
    0x3, 0x2, 0x2, 0x2, 0x5ff, 0x600, 0x5, 0x15a, 0xae, 0x2, 0x600, 0x601, 
    0x5, 0x160, 0xb1, 0x2, 0x601, 0x623, 0x3, 0x2, 0x2, 0x2, 0x602, 0x603, 
    0x5, 0x15a, 0xae, 0x2, 0x603, 0x604, 0x5, 0x196, 0xcc, 0x2, 0x604, 0x605, 
    0x5, 0x120, 0x91, 0x2, 0x605, 0x606, 0x7, 0x44, 0x2, 0x2, 0x606, 0x607, 
    0x5, 0x184, 0xc3, 0x2, 0x607, 0x608, 0x7, 0x45, 0x2, 0x2, 0x608, 0x609, 
    0x5, 0x5a, 0x2e, 0x2, 0x609, 0x623, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x60b, 
    0x5, 0x15a, 0xae, 0x2, 0x60b, 0x60c, 0x7, 0x30, 0x2, 0x2, 0x60c, 0x60d, 
    0x7, 0x44, 0x2, 0x2, 0x60d, 0x60e, 0x5, 0x184, 0xc3, 0x2, 0x60e, 0x60f, 
    0x7, 0x45, 0x2, 0x2, 0x60f, 0x623, 0x3, 0x2, 0x2, 0x2, 0x610, 0x611, 
    0x5, 0x15a, 0xae, 0x2, 0x611, 0x612, 0x5, 0x192, 0xca, 0x2, 0x612, 0x613, 
    0x7, 0x44, 0x2, 0x2, 0x613, 0x614, 0x5, 0x184, 0xc3, 0x2, 0x614, 0x615, 
    0x7, 0x45, 0x2, 0x2, 0x615, 0x623, 0x3, 0x2, 0x2, 0x2, 0x616, 0x617, 
    0x5, 0x15a, 0xae, 0x2, 0x617, 0x618, 0x7, 0x16, 0x2, 0x2, 0x618, 0x619, 
    0x7, 0x44, 0x2, 0x2, 0x619, 0x61a, 0x5, 0x184, 0xc3, 0x2, 0x61a, 0x61b, 
    0x7, 0x61, 0x2, 0x2, 0x61b, 0x61c, 0x5, 0x184, 0xc3, 0x2, 0x61c, 0x61d, 
    0x7, 0x45, 0x2, 0x2, 0x61d, 0x623, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x61f, 
    0x5, 0x15a, 0xae, 0x2, 0x61f, 0x620, 0x7, 0x59, 0x2, 0x2, 0x620, 0x621, 
    0x7, 0x74, 0x2, 0x2, 0x621, 0x623, 0x3, 0x2, 0x2, 0x2, 0x622, 0x5ff, 
    0x3, 0x2, 0x2, 0x2, 0x622, 0x602, 0x3, 0x2, 0x2, 0x2, 0x622, 0x60a, 
    0x3, 0x2, 0x2, 0x2, 0x622, 0x610, 0x3, 0x2, 0x2, 0x2, 0x622, 0x616, 
    0x3, 0x2, 0x2, 0x2, 0x622, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x623, 0x191, 
    0x3, 0x2, 0x2, 0x2, 0x624, 0x625, 0x9, 0xc, 0x2, 0x2, 0x625, 0x193, 
    0x3, 0x2, 0x2, 0x2, 0x626, 0x627, 0x9, 0xd, 0x2, 0x2, 0x627, 0x195, 
    0x3, 0x2, 0x2, 0x2, 0x628, 0x629, 0x9, 0xe, 0x2, 0x2, 0x629, 0x197, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x19d, 0x1ac, 0x1c0, 0x1cb, 0x1e2, 0x1eb, 
    0x1fb, 0x204, 0x22d, 0x236, 0x241, 0x258, 0x265, 0x27d, 0x289, 0x295, 
    0x2ac, 0x2c8, 0x2d3, 0x30c, 0x30f, 0x312, 0x315, 0x318, 0x31b, 0x31e, 
    0x321, 0x324, 0x327, 0x32a, 0x32d, 0x330, 0x333, 0x336, 0x339, 0x33c, 
    0x33f, 0x342, 0x345, 0x348, 0x34b, 0x34e, 0x351, 0x354, 0x357, 0x35a, 
    0x35d, 0x360, 0x363, 0x366, 0x369, 0x36c, 0x36f, 0x372, 0x375, 0x378, 
    0x37b, 0x37e, 0x384, 0x3aa, 0x3ca, 0x3d3, 0x3f2, 0x405, 0x413, 0x419, 
    0x43e, 0x447, 0x44c, 0x451, 0x456, 0x45b, 0x460, 0x465, 0x46a, 0x46f, 
    0x475, 0x47b, 0x481, 0x487, 0x48d, 0x493, 0x499, 0x49f, 0x4a5, 0x4ab, 
    0x4b1, 0x4b7, 0x4bd, 0x4c3, 0x4c9, 0x4cf, 0x4d5, 0x4db, 0x4e1, 0x4e7, 
    0x4ed, 0x4f3, 0x4f9, 0x4ff, 0x505, 0x50b, 0x511, 0x517, 0x51d, 0x523, 
    0x529, 0x52f, 0x535, 0x542, 0x551, 0x56e, 0x57f, 0x5a5, 0x5c2, 0x5ca, 
    0x5db, 0x5f7, 0x622, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CParser::Initializer CParser::_init;
