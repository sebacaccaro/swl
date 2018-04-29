
// Generated from swl.g4 by ANTLR 4.7.1


#include "swlListener.h"

#include "swlParser.h"


using namespace antlrcpp;
using namespace antlr4;

swlParser::swlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

swlParser::~swlParser() {
  delete _interpreter;
}

std::string swlParser::getGrammarFileName() const {
  return "swl.g4";
}

const std::vector<std::string>& swlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& swlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

swlParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::CodeblockContext* swlParser::ProgramContext::codeblock() {
  return getRuleContext<swlParser::CodeblockContext>(0);
}


size_t swlParser::ProgramContext::getRuleIndex() const {
  return swlParser::RuleProgram;
}

void swlParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void swlParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

swlParser::ProgramContext* swlParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, swlParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    codeblock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeblockContext ------------------------------------------------------------------

swlParser::CodeblockContext::CodeblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<swlParser::StatementContext *> swlParser::CodeblockContext::statement() {
  return getRuleContexts<swlParser::StatementContext>();
}

swlParser::StatementContext* swlParser::CodeblockContext::statement(size_t i) {
  return getRuleContext<swlParser::StatementContext>(i);
}


size_t swlParser::CodeblockContext::getRuleIndex() const {
  return swlParser::RuleCodeblock;
}

void swlParser::CodeblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCodeblock(this);
}

void swlParser::CodeblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCodeblock(this);
}

swlParser::CodeblockContext* swlParser::codeblock() {
  CodeblockContext *_localctx = _tracker.createInstance<CodeblockContext>(_ctx, getState());
  enterRule(_localctx, 2, swlParser::RuleCodeblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(swlParser::T__0);
    setState(54); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(53);
      statement();
      setState(56); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << swlParser::T__2)
      | (1ULL << swlParser::T__4)
      | (1ULL << swlParser::T__5)
      | (1ULL << swlParser::T__7)
      | (1ULL << swlParser::T__9)
      | (1ULL << swlParser::T__10)
      | (1ULL << swlParser::T__13))) != 0));
    setState(58);
    match(swlParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

swlParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::AssignContext* swlParser::StatementContext::assign() {
  return getRuleContext<swlParser::AssignContext>(0);
}

swlParser::AddContext* swlParser::StatementContext::add() {
  return getRuleContext<swlParser::AddContext>(0);
}

swlParser::MulContext* swlParser::StatementContext::mul() {
  return getRuleContext<swlParser::MulContext>(0);
}

swlParser::DivContext* swlParser::StatementContext::div() {
  return getRuleContext<swlParser::DivContext>(0);
}

swlParser::PrintContext* swlParser::StatementContext::print() {
  return getRuleContext<swlParser::PrintContext>(0);
}

swlParser::IfcondContext* swlParser::StatementContext::ifcond() {
  return getRuleContext<swlParser::IfcondContext>(0);
}

swlParser::WhileloopContext* swlParser::StatementContext::whileloop() {
  return getRuleContext<swlParser::WhileloopContext>(0);
}


size_t swlParser::StatementContext::getRuleIndex() const {
  return swlParser::RuleStatement;
}

void swlParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void swlParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

swlParser::StatementContext* swlParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, swlParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(60);
        assign();
        break;
      }

      case swlParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(61);
        add();
        break;
      }

      case swlParser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(62);
        mul();
        break;
      }

      case swlParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(63);
        div();
        break;
      }

      case swlParser::T__4: {
        enterOuterAlt(_localctx, 5);
        setState(64);
        print();
        break;
      }

      case swlParser::T__10: {
        enterOuterAlt(_localctx, 6);
        setState(65);
        ifcond();
        break;
      }

      case swlParser::T__13: {
        enterOuterAlt(_localctx, 7);
        setState(66);
        whileloop();
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

//----------------- AssignContext ------------------------------------------------------------------

swlParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> swlParser::AssignContext::ID() {
  return getTokens(swlParser::ID);
}

tree::TerminalNode* swlParser::AssignContext::ID(size_t i) {
  return getToken(swlParser::ID, i);
}

tree::TerminalNode* swlParser::AssignContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}


size_t swlParser::AssignContext::getRuleIndex() const {
  return swlParser::RuleAssign;
}

void swlParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void swlParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

swlParser::AssignContext* swlParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 6, swlParser::RuleAssign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(swlParser::T__2);
    setState(70);
    match(swlParser::ID);
    setState(71);
    match(swlParser::T__3);
    setState(72);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
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

//----------------- PrintContext ------------------------------------------------------------------

swlParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::PrintContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}

tree::TerminalNode* swlParser::PrintContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::PrintContext::getRuleIndex() const {
  return swlParser::RulePrint;
}

void swlParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void swlParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

swlParser::PrintContext* swlParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 8, swlParser::RulePrint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(swlParser::T__4);
    setState(75);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
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

//----------------- AddContext ------------------------------------------------------------------

swlParser::AddContext::AddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> swlParser::AddContext::ID() {
  return getTokens(swlParser::ID);
}

tree::TerminalNode* swlParser::AddContext::ID(size_t i) {
  return getToken(swlParser::ID, i);
}

tree::TerminalNode* swlParser::AddContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}


size_t swlParser::AddContext::getRuleIndex() const {
  return swlParser::RuleAdd;
}

void swlParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}

void swlParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

swlParser::AddContext* swlParser::add() {
  AddContext *_localctx = _tracker.createInstance<AddContext>(_ctx, getState());
  enterRule(_localctx, 10, swlParser::RuleAdd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(swlParser::T__5);
    setState(78);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(79);
    match(swlParser::T__6);
    setState(80);
    match(swlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulContext ------------------------------------------------------------------

swlParser::MulContext::MulContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> swlParser::MulContext::ID() {
  return getTokens(swlParser::ID);
}

tree::TerminalNode* swlParser::MulContext::ID(size_t i) {
  return getToken(swlParser::ID, i);
}

tree::TerminalNode* swlParser::MulContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}


size_t swlParser::MulContext::getRuleIndex() const {
  return swlParser::RuleMul;
}

void swlParser::MulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul(this);
}

void swlParser::MulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul(this);
}

swlParser::MulContext* swlParser::mul() {
  MulContext *_localctx = _tracker.createInstance<MulContext>(_ctx, getState());
  enterRule(_localctx, 12, swlParser::RuleMul);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(swlParser::T__7);
    setState(83);
    match(swlParser::ID);
    setState(84);
    match(swlParser::T__8);
    setState(85);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
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

//----------------- DivContext ------------------------------------------------------------------

swlParser::DivContext::DivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> swlParser::DivContext::ID() {
  return getTokens(swlParser::ID);
}

tree::TerminalNode* swlParser::DivContext::ID(size_t i) {
  return getToken(swlParser::ID, i);
}

tree::TerminalNode* swlParser::DivContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}


size_t swlParser::DivContext::getRuleIndex() const {
  return swlParser::RuleDiv;
}

void swlParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}

void swlParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}

swlParser::DivContext* swlParser::div() {
  DivContext *_localctx = _tracker.createInstance<DivContext>(_ctx, getState());
  enterRule(_localctx, 14, swlParser::RuleDiv);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(swlParser::T__9);
    setState(88);
    match(swlParser::ID);
    setState(89);
    match(swlParser::T__8);
    setState(90);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
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

//----------------- IfcondContext ------------------------------------------------------------------

swlParser::IfcondContext::IfcondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::FullcondContext* swlParser::IfcondContext::fullcond() {
  return getRuleContext<swlParser::FullcondContext>(0);
}

swlParser::CodeblockContext* swlParser::IfcondContext::codeblock() {
  return getRuleContext<swlParser::CodeblockContext>(0);
}

swlParser::ProgramContext* swlParser::IfcondContext::program() {
  return getRuleContext<swlParser::ProgramContext>(0);
}


size_t swlParser::IfcondContext::getRuleIndex() const {
  return swlParser::RuleIfcond;
}

void swlParser::IfcondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfcond(this);
}

void swlParser::IfcondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfcond(this);
}

swlParser::IfcondContext* swlParser::ifcond() {
  IfcondContext *_localctx = _tracker.createInstance<IfcondContext>(_ctx, getState());
  enterRule(_localctx, 16, swlParser::RuleIfcond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(swlParser::T__10);
    setState(93);
    fullcond();
    setState(94);
    match(swlParser::T__11);
    setState(95);
    codeblock();
    setState(98);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == swlParser::T__12) {
      setState(96);
      match(swlParser::T__12);
      setState(97);
      program();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileloopContext ------------------------------------------------------------------

swlParser::WhileloopContext::WhileloopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::FullcondContext* swlParser::WhileloopContext::fullcond() {
  return getRuleContext<swlParser::FullcondContext>(0);
}

swlParser::CodeblockContext* swlParser::WhileloopContext::codeblock() {
  return getRuleContext<swlParser::CodeblockContext>(0);
}


size_t swlParser::WhileloopContext::getRuleIndex() const {
  return swlParser::RuleWhileloop;
}

void swlParser::WhileloopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileloop(this);
}

void swlParser::WhileloopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileloop(this);
}

swlParser::WhileloopContext* swlParser::whileloop() {
  WhileloopContext *_localctx = _tracker.createInstance<WhileloopContext>(_ctx, getState());
  enterRule(_localctx, 18, swlParser::RuleWhileloop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(swlParser::T__13);
    setState(101);
    fullcond();
    setState(102);
    match(swlParser::T__14);
    setState(103);
    codeblock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

swlParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> swlParser::ConditionContext::ID() {
  return getTokens(swlParser::ID);
}

tree::TerminalNode* swlParser::ConditionContext::ID(size_t i) {
  return getToken(swlParser::ID, i);
}

std::vector<tree::TerminalNode *> swlParser::ConditionContext::NUMBER() {
  return getTokens(swlParser::NUMBER);
}

tree::TerminalNode* swlParser::ConditionContext::NUMBER(size_t i) {
  return getToken(swlParser::NUMBER, i);
}

swlParser::LtContext* swlParser::ConditionContext::lt() {
  return getRuleContext<swlParser::LtContext>(0);
}

swlParser::MtContext* swlParser::ConditionContext::mt() {
  return getRuleContext<swlParser::MtContext>(0);
}

swlParser::LeContext* swlParser::ConditionContext::le() {
  return getRuleContext<swlParser::LeContext>(0);
}

swlParser::MeContext* swlParser::ConditionContext::me() {
  return getRuleContext<swlParser::MeContext>(0);
}

swlParser::EqContext* swlParser::ConditionContext::eq() {
  return getRuleContext<swlParser::EqContext>(0);
}

swlParser::DiContext* swlParser::ConditionContext::di() {
  return getRuleContext<swlParser::DiContext>(0);
}


size_t swlParser::ConditionContext::getRuleIndex() const {
  return swlParser::RuleCondition;
}

void swlParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void swlParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

swlParser::ConditionContext* swlParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 20, swlParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::T__20: {
        setState(106);
        lt();
        break;
      }

      case swlParser::T__21: {
        setState(107);
        mt();
        break;
      }

      case swlParser::T__22: {
        setState(108);
        le();
        break;
      }

      case swlParser::T__23: {
        setState(109);
        me();
        break;
      }

      case swlParser::T__24: {
        setState(110);
        eq();
        break;
      }

      case swlParser::T__25: {
        setState(111);
        di();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(114);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
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

//----------------- MulticondContext ------------------------------------------------------------------

swlParser::MulticondContext::MulticondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<swlParser::ConditionContext *> swlParser::MulticondContext::condition() {
  return getRuleContexts<swlParser::ConditionContext>();
}

swlParser::ConditionContext* swlParser::MulticondContext::condition(size_t i) {
  return getRuleContext<swlParser::ConditionContext>(i);
}

std::vector<swlParser::NotSContext *> swlParser::MulticondContext::notS() {
  return getRuleContexts<swlParser::NotSContext>();
}

swlParser::NotSContext* swlParser::MulticondContext::notS(size_t i) {
  return getRuleContext<swlParser::NotSContext>(i);
}

std::vector<swlParser::AndSContext *> swlParser::MulticondContext::andS() {
  return getRuleContexts<swlParser::AndSContext>();
}

swlParser::AndSContext* swlParser::MulticondContext::andS(size_t i) {
  return getRuleContext<swlParser::AndSContext>(i);
}

std::vector<swlParser::OrSContext *> swlParser::MulticondContext::orS() {
  return getRuleContexts<swlParser::OrSContext>();
}

swlParser::OrSContext* swlParser::MulticondContext::orS(size_t i) {
  return getRuleContext<swlParser::OrSContext>(i);
}


size_t swlParser::MulticondContext::getRuleIndex() const {
  return swlParser::RuleMulticond;
}

void swlParser::MulticondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulticond(this);
}

void swlParser::MulticondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulticond(this);
}

swlParser::MulticondContext* swlParser::multicond() {
  MulticondContext *_localctx = _tracker.createInstance<MulticondContext>(_ctx, getState());
  enterRule(_localctx, 22, swlParser::RuleMulticond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == swlParser::T__17) {
      setState(116);
      notS();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(122);
    condition();
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(125);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case swlParser::T__15: {
            setState(123);
            andS();
            break;
          }

          case swlParser::T__16: {
            setState(124);
            orS();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(130);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == swlParser::T__17) {
          setState(127);
          notS();
          setState(132);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(133);
        condition(); 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParcondContext ------------------------------------------------------------------

swlParser::ParcondContext::ParcondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::MulticondContext* swlParser::ParcondContext::multicond() {
  return getRuleContext<swlParser::MulticondContext>(0);
}

swlParser::OpContext* swlParser::ParcondContext::op() {
  return getRuleContext<swlParser::OpContext>(0);
}

swlParser::CpContext* swlParser::ParcondContext::cp() {
  return getRuleContext<swlParser::CpContext>(0);
}

std::vector<swlParser::NotSContext *> swlParser::ParcondContext::notS() {
  return getRuleContexts<swlParser::NotSContext>();
}

swlParser::NotSContext* swlParser::ParcondContext::notS(size_t i) {
  return getRuleContext<swlParser::NotSContext>(i);
}


size_t swlParser::ParcondContext::getRuleIndex() const {
  return swlParser::RuleParcond;
}

void swlParser::ParcondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParcond(this);
}

void swlParser::ParcondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParcond(this);
}

swlParser::ParcondContext* swlParser::parcond() {
  ParcondContext *_localctx = _tracker.createInstance<ParcondContext>(_ctx, getState());
  enterRule(_localctx, 24, swlParser::RuleParcond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(140);
        notS(); 
      }
      setState(145);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::T__17:
      case swlParser::ID:
      case swlParser::NUMBER: {
        setState(146);
        multicond();
        break;
      }

      case swlParser::T__18: {
        setState(147);
        op();
        setState(148);
        multicond();
        setState(149);
        cp();
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

//----------------- FullcondContext ------------------------------------------------------------------

swlParser::FullcondContext::FullcondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<swlParser::ParcondContext *> swlParser::FullcondContext::parcond() {
  return getRuleContexts<swlParser::ParcondContext>();
}

swlParser::ParcondContext* swlParser::FullcondContext::parcond(size_t i) {
  return getRuleContext<swlParser::ParcondContext>(i);
}

std::vector<swlParser::AndSContext *> swlParser::FullcondContext::andS() {
  return getRuleContexts<swlParser::AndSContext>();
}

swlParser::AndSContext* swlParser::FullcondContext::andS(size_t i) {
  return getRuleContext<swlParser::AndSContext>(i);
}

std::vector<swlParser::OrSContext *> swlParser::FullcondContext::orS() {
  return getRuleContexts<swlParser::OrSContext>();
}

swlParser::OrSContext* swlParser::FullcondContext::orS(size_t i) {
  return getRuleContext<swlParser::OrSContext>(i);
}


size_t swlParser::FullcondContext::getRuleIndex() const {
  return swlParser::RuleFullcond;
}

void swlParser::FullcondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullcond(this);
}

void swlParser::FullcondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullcond(this);
}

swlParser::FullcondContext* swlParser::fullcond() {
  FullcondContext *_localctx = _tracker.createInstance<FullcondContext>(_ctx, getState());
  enterRule(_localctx, 26, swlParser::RuleFullcond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    parcond();
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == swlParser::T__15

    || _la == swlParser::T__16) {
      setState(156);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case swlParser::T__15: {
          setState(154);
          andS();
          break;
        }

        case swlParser::T__16: {
          setState(155);
          orS();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(158);
      parcond();
      setState(164);
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

//----------------- AndSContext ------------------------------------------------------------------

swlParser::AndSContext::AndSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::AndSContext::getRuleIndex() const {
  return swlParser::RuleAndS;
}

void swlParser::AndSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndS(this);
}

void swlParser::AndSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndS(this);
}

swlParser::AndSContext* swlParser::andS() {
  AndSContext *_localctx = _tracker.createInstance<AndSContext>(_ctx, getState());
  enterRule(_localctx, 28, swlParser::RuleAndS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(swlParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrSContext ------------------------------------------------------------------

swlParser::OrSContext::OrSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::OrSContext::getRuleIndex() const {
  return swlParser::RuleOrS;
}

void swlParser::OrSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrS(this);
}

void swlParser::OrSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrS(this);
}

swlParser::OrSContext* swlParser::orS() {
  OrSContext *_localctx = _tracker.createInstance<OrSContext>(_ctx, getState());
  enterRule(_localctx, 30, swlParser::RuleOrS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(swlParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotSContext ------------------------------------------------------------------

swlParser::NotSContext::NotSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::NotSContext::getRuleIndex() const {
  return swlParser::RuleNotS;
}

void swlParser::NotSContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotS(this);
}

void swlParser::NotSContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotS(this);
}

swlParser::NotSContext* swlParser::notS() {
  NotSContext *_localctx = _tracker.createInstance<NotSContext>(_ctx, getState());
  enterRule(_localctx, 32, swlParser::RuleNotS);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(swlParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

swlParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::OpContext::getRuleIndex() const {
  return swlParser::RuleOp;
}

void swlParser::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void swlParser::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}

swlParser::OpContext* swlParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 34, swlParser::RuleOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(swlParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CpContext ------------------------------------------------------------------

swlParser::CpContext::CpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::CpContext::getRuleIndex() const {
  return swlParser::RuleCp;
}

void swlParser::CpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCp(this);
}

void swlParser::CpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCp(this);
}

swlParser::CpContext* swlParser::cp() {
  CpContext *_localctx = _tracker.createInstance<CpContext>(_ctx, getState());
  enterRule(_localctx, 36, swlParser::RuleCp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(swlParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LtContext ------------------------------------------------------------------

swlParser::LtContext::LtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::LtContext::getRuleIndex() const {
  return swlParser::RuleLt;
}

void swlParser::LtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLt(this);
}

void swlParser::LtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLt(this);
}

swlParser::LtContext* swlParser::lt() {
  LtContext *_localctx = _tracker.createInstance<LtContext>(_ctx, getState());
  enterRule(_localctx, 38, swlParser::RuleLt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(swlParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

swlParser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::MtContext::getRuleIndex() const {
  return swlParser::RuleMt;
}

void swlParser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void swlParser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

swlParser::MtContext* swlParser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 40, swlParser::RuleMt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(swlParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeContext ------------------------------------------------------------------

swlParser::LeContext::LeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::LeContext::getRuleIndex() const {
  return swlParser::RuleLe;
}

void swlParser::LeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLe(this);
}

void swlParser::LeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLe(this);
}

swlParser::LeContext* swlParser::le() {
  LeContext *_localctx = _tracker.createInstance<LeContext>(_ctx, getState());
  enterRule(_localctx, 42, swlParser::RuleLe);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(swlParser::T__22);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeContext ------------------------------------------------------------------

swlParser::MeContext::MeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::MeContext::getRuleIndex() const {
  return swlParser::RuleMe;
}

void swlParser::MeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMe(this);
}

void swlParser::MeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMe(this);
}

swlParser::MeContext* swlParser::me() {
  MeContext *_localctx = _tracker.createInstance<MeContext>(_ctx, getState());
  enterRule(_localctx, 44, swlParser::RuleMe);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(swlParser::T__23);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqContext ------------------------------------------------------------------

swlParser::EqContext::EqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::EqContext::getRuleIndex() const {
  return swlParser::RuleEq;
}

void swlParser::EqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEq(this);
}

void swlParser::EqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEq(this);
}

swlParser::EqContext* swlParser::eq() {
  EqContext *_localctx = _tracker.createInstance<EqContext>(_ctx, getState());
  enterRule(_localctx, 46, swlParser::RuleEq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(swlParser::T__24);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiContext ------------------------------------------------------------------

swlParser::DiContext::DiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t swlParser::DiContext::getRuleIndex() const {
  return swlParser::RuleDi;
}

void swlParser::DiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDi(this);
}

void swlParser::DiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDi(this);
}

swlParser::DiContext* swlParser::di() {
  DiContext *_localctx = _tracker.createInstance<DiContext>(_ctx, getState());
  enterRule(_localctx, 48, swlParser::RuleDi);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(swlParser::T__25);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> swlParser::_decisionToDFA;
atn::PredictionContextCache swlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN swlParser::_atn;
std::vector<uint16_t> swlParser::_serializedATN;

std::vector<std::string> swlParser::_ruleNames = {
  "program", "codeblock", "statement", "assign", "print", "add", "mul", 
  "div", "ifcond", "whileloop", "condition", "multicond", "parcond", "fullcond", 
  "andS", "orS", "notS", "op", "cp", "lt", "mt", "le", "me", "eq", "di"
};

std::vector<std::string> swlParser::_literalNames = {
  "", "'begin'", "'end'", "'let'", "'be'", "'print'", "'add'", "'to'", "'mul'", 
  "'by'", "'div'", "'if'", "'then'", "'else'", "'while'", "'do'", "'and'", 
  "'or'", "'not'", "'('", "')'", "'<'", "'>'", "'<='", "'>='", "'=='", "'=/='"
};

std::vector<std::string> swlParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "ID", "NUMBER", "WS", "ErrorChar"
};

dfa::Vocabulary swlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> swlParser::_tokenNames;

swlParser::Initializer::Initializer() {
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
    0x3, 0x20, 0xbe, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x6, 0x3, 0x39, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x3a, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x46, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x65, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x73, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x7, 0xd, 0x78, 0xa, 0xd, 0xc, 
    0xd, 0xe, 0xd, 0x7b, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x80, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0x83, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x86, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x8a, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0x8d, 0xb, 0xd, 0x3, 0xe, 0x7, 0xe, 0x90, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0x93, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x9a, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0x9f, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xa3, 0xa, 0xf, 0xc, 0xf, 
    0xe, 0xf, 0xa6, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x2, 
    0x2, 0x1b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x2, 0x3, 0x3, 0x2, 0x1d, 0x1e, 0x2, 0xb9, 0x2, 0x34, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x36, 0x3, 0x2, 0x2, 0x2, 0x6, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x47, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x54, 0x3, 0x2, 0x2, 0x2, 0x10, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x91, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x9b, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xab, 0x3, 0x2, 0x2, 0x2, 0x24, 0xad, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x32, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x35, 0x5, 0x4, 0x3, 0x2, 0x35, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x38, 0x7, 0x3, 0x2, 0x2, 0x37, 0x39, 0x5, 0x6, 0x4, 0x2, 
    0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x4, 0x2, 0x2, 0x3d, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x46, 0x5, 0x8, 0x5, 0x2, 0x3f, 0x46, 0x5, 0xc, 
    0x7, 0x2, 0x40, 0x46, 0x5, 0xe, 0x8, 0x2, 0x41, 0x46, 0x5, 0x10, 0x9, 
    0x2, 0x42, 0x46, 0x5, 0xa, 0x6, 0x2, 0x43, 0x46, 0x5, 0x12, 0xa, 0x2, 
    0x44, 0x46, 0x5, 0x14, 0xb, 0x2, 0x45, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x45, 0x40, 0x3, 0x2, 0x2, 0x2, 0x45, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x48, 0x7, 0x5, 0x2, 0x2, 0x48, 0x49, 0x7, 0x1d, 0x2, 
    0x2, 0x49, 0x4a, 0x7, 0x6, 0x2, 0x2, 0x4a, 0x4b, 0x9, 0x2, 0x2, 0x2, 
    0x4b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x7, 0x2, 0x2, 0x4d, 
    0x4e, 0x9, 0x2, 0x2, 0x2, 0x4e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 
    0x7, 0x8, 0x2, 0x2, 0x50, 0x51, 0x9, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 
    0x9, 0x2, 0x2, 0x52, 0x53, 0x7, 0x1d, 0x2, 0x2, 0x53, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x55, 0x7, 0xa, 0x2, 0x2, 0x55, 0x56, 0x7, 0x1d, 0x2, 
    0x2, 0x56, 0x57, 0x7, 0xb, 0x2, 0x2, 0x57, 0x58, 0x9, 0x2, 0x2, 0x2, 
    0x58, 0xf, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0xc, 0x2, 0x2, 0x5a, 
    0x5b, 0x7, 0x1d, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0xb, 0x2, 0x2, 0x5c, 0x5d, 
    0x9, 0x2, 0x2, 0x2, 0x5d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 
    0xd, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x1c, 0xf, 0x2, 0x60, 0x61, 0x7, 0xe, 
    0x2, 0x2, 0x61, 0x64, 0x5, 0x4, 0x3, 0x2, 0x62, 0x63, 0x7, 0xf, 0x2, 
    0x2, 0x63, 0x65, 0x5, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x13, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x67, 0x7, 0x10, 0x2, 0x2, 0x67, 0x68, 0x5, 0x1c, 0xf, 0x2, 0x68, 0x69, 
    0x7, 0x11, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x4, 0x3, 0x2, 0x6a, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x72, 0x9, 0x2, 0x2, 0x2, 0x6c, 0x73, 0x5, 0x28, 
    0x15, 0x2, 0x6d, 0x73, 0x5, 0x2a, 0x16, 0x2, 0x6e, 0x73, 0x5, 0x2c, 
    0x17, 0x2, 0x6f, 0x73, 0x5, 0x2e, 0x18, 0x2, 0x70, 0x73, 0x5, 0x30, 
    0x19, 0x2, 0x71, 0x73, 0x5, 0x32, 0x1a, 0x2, 0x72, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 
    0x9, 0x2, 0x2, 0x2, 0x75, 0x17, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x5, 
    0x22, 0x12, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x8b, 0x5, 0x16, 0xc, 0x2, 0x7d, 0x80, 0x5, 0x1e, 0x10, 0x2, 0x7e, 
    0x80, 0x5, 0x20, 0x11, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x84, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x5, 
    0x22, 0x12, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x86, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x88, 0x5, 0x16, 0xc, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x90, 0x5, 0x22, 
    0x12, 0x2, 0x8f, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x99, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x9a, 0x5, 0x18, 0xd, 0x2, 0x95, 0x96, 0x5, 0x24, 0x13, 0x2, 0x96, 0x97, 
    0x5, 0x18, 0xd, 0x2, 0x97, 0x98, 0x5, 0x26, 0x14, 0x2, 0x98, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x94, 0x3, 0x2, 0x2, 0x2, 0x99, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0xa4, 0x5, 0x1a, 0xe, 
    0x2, 0x9c, 0x9f, 0x5, 0x1e, 0x10, 0x2, 0x9d, 0x9f, 0x5, 0x20, 0x11, 
    0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x1a, 0xe, 0x2, 0xa1, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa8, 0x7, 0x12, 0x2, 0x2, 0xa8, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x7, 0x13, 0x2, 0x2, 0xaa, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xac, 0x7, 0x14, 0x2, 0x2, 0xac, 0x23, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xae, 0x7, 0x15, 0x2, 0x2, 0xae, 0x25, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x7, 0x16, 0x2, 0x2, 0xb0, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 
    0x17, 0x2, 0x2, 0xb2, 0x29, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x18, 
    0x2, 0x2, 0xb4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x19, 0x2, 
    0x2, 0xb6, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x1a, 0x2, 0x2, 
    0xb8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x1b, 0x2, 0x2, 0xba, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x1c, 0x2, 0x2, 0xbc, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x3a, 0x45, 0x64, 0x72, 0x79, 0x7f, 0x84, 0x8b, 
    0x91, 0x99, 0x9e, 0xa4, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

swlParser::Initializer swlParser::_init;
