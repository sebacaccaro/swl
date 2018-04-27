
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

std::vector<swlParser::StatementContext *> swlParser::ProgramContext::statement() {
  return getRuleContexts<swlParser::StatementContext>();
}

swlParser::StatementContext* swlParser::ProgramContext::statement(size_t i) {
  return getRuleContext<swlParser::StatementContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(swlParser::T__0);
    setState(28); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(27);
      statement();
      setState(30); 
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
    setState(32);
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
  enterRule(_localctx, 2, swlParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(41);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        assign();
        break;
      }

      case swlParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        add();
        break;
      }

      case swlParser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(36);
        mul();
        break;
      }

      case swlParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(37);
        div();
        break;
      }

      case swlParser::T__4: {
        enterOuterAlt(_localctx, 5);
        setState(38);
        print();
        break;
      }

      case swlParser::T__10: {
        enterOuterAlt(_localctx, 6);
        setState(39);
        ifcond();
        break;
      }

      case swlParser::T__13: {
        enterOuterAlt(_localctx, 7);
        setState(40);
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
  enterRule(_localctx, 4, swlParser::RuleAssign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(swlParser::T__2);
    setState(44);
    match(swlParser::ID);
    setState(45);
    match(swlParser::T__3);
    setState(46);
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
  enterRule(_localctx, 6, swlParser::RulePrint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(swlParser::T__4);
    setState(49);
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
  enterRule(_localctx, 8, swlParser::RuleAdd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(swlParser::T__5);
    setState(52);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(53);
    match(swlParser::T__6);
    setState(54);
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
  enterRule(_localctx, 10, swlParser::RuleMul);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(swlParser::T__7);
    setState(57);
    match(swlParser::ID);
    setState(58);
    match(swlParser::T__8);
    setState(59);
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
  enterRule(_localctx, 12, swlParser::RuleDiv);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(swlParser::T__9);
    setState(62);
    match(swlParser::ID);
    setState(63);
    match(swlParser::T__8);
    setState(64);
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

std::vector<swlParser::ProgramContext *> swlParser::IfcondContext::program() {
  return getRuleContexts<swlParser::ProgramContext>();
}

swlParser::ProgramContext* swlParser::IfcondContext::program(size_t i) {
  return getRuleContext<swlParser::ProgramContext>(i);
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
  enterRule(_localctx, 14, swlParser::RuleIfcond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(swlParser::T__10);
    setState(67);
    fullcond();
    setState(68);
    match(swlParser::T__11);
    setState(69);
    program();
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == swlParser::T__12) {
      setState(70);
      match(swlParser::T__12);
      setState(71);
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

swlParser::ProgramContext* swlParser::WhileloopContext::program() {
  return getRuleContext<swlParser::ProgramContext>(0);
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
  enterRule(_localctx, 16, swlParser::RuleWhileloop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(swlParser::T__13);
    setState(75);
    fullcond();
    setState(76);
    match(swlParser::T__14);
    setState(77);
    program();
   
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
  enterRule(_localctx, 18, swlParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(80);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << swlParser::T__15)
      | (1ULL << swlParser::T__16)
      | (1ULL << swlParser::T__17)
      | (1ULL << swlParser::T__18)
      | (1ULL << swlParser::T__19)
      | (1ULL << swlParser::T__20))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(81);
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
  enterRule(_localctx, 20, swlParser::RuleMulticond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == swlParser::T__21) {
      setState(83);
      match(swlParser::T__21);
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    condition();
    setState(100);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(90);
        _la = _input->LA(1);
        if (!(_la == swlParser::T__22

        || _la == swlParser::T__23)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(94);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == swlParser::T__21) {
          setState(91);
          match(swlParser::T__21);
          setState(96);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(97);
        condition(); 
      }
      setState(102);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
  enterRule(_localctx, 22, swlParser::RuleParcond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(106);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(103);
        match(swlParser::T__21); 
      }
      setState(108);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::T__21:
      case swlParser::ID:
      case swlParser::NUMBER: {
        setState(109);
        multicond();
        break;
      }

      case swlParser::T__24: {
        setState(110);
        match(swlParser::T__24);
        setState(111);
        multicond();
        setState(112);
        match(swlParser::T__25);
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
  enterRule(_localctx, 24, swlParser::RuleFullcond);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    parcond();
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == swlParser::T__22

    || _la == swlParser::T__23) {
      setState(117);
      _la = _input->LA(1);
      if (!(_la == swlParser::T__22

      || _la == swlParser::T__23)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(118);
      parcond();
      setState(123);
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

// Static vars and initialization.
std::vector<dfa::DFA> swlParser::_decisionToDFA;
atn::PredictionContextCache swlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN swlParser::_atn;
std::vector<uint16_t> swlParser::_serializedATN;

std::vector<std::string> swlParser::_ruleNames = {
  "program", "statement", "assign", "print", "add", "mul", "div", "ifcond", 
  "whileloop", "condition", "multicond", "parcond", "fullcond"
};

std::vector<std::string> swlParser::_literalNames = {
  "", "'begin'", "'end'", "'let'", "'be'", "'print'", "'add'", "'to'", "'mul'", 
  "'by'", "'div'", "'if'", "'then'", "'else'", "'while'", "'do'", "'<'", 
  "'>'", "'<='", "'>='", "'=='", "'=/='", "'not'", "'and'", "'or'", "'('", 
  "')'"
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
    0x3, 0x20, 0x7f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x3, 0x2, 0x6, 0x2, 0x1f, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x20, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x2c, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x4b, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x7, 0xc, 0x57, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0x5a, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x5f, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x62, 0xb, 0xc, 0x3, 0xc, 0x7, 0xc, 0x65, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x68, 0xb, 0xc, 0x3, 0xd, 0x7, 0xd, 0x6b, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x6e, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x75, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x7, 0xe, 0x7a, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x7d, 0xb, 0xe, 
    0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x2, 0x5, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x12, 
    0x17, 0x3, 0x2, 0x19, 0x1a, 0x2, 0x7f, 0x2, 0x1c, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x35, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x58, 0x3, 0x2, 0x2, 0x2, 0x18, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x7, 0x3, 0x2, 0x2, 0x1d, 0x1f, 
    0x5, 0x4, 0x3, 0x2, 0x1e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x7, 0x4, 0x2, 
    0x2, 0x23, 0x3, 0x3, 0x2, 0x2, 0x2, 0x24, 0x2c, 0x5, 0x6, 0x4, 0x2, 
    0x25, 0x2c, 0x5, 0xa, 0x6, 0x2, 0x26, 0x2c, 0x5, 0xc, 0x7, 0x2, 0x27, 
    0x2c, 0x5, 0xe, 0x8, 0x2, 0x28, 0x2c, 0x5, 0x8, 0x5, 0x2, 0x29, 0x2c, 
    0x5, 0x10, 0x9, 0x2, 0x2a, 0x2c, 0x5, 0x12, 0xa, 0x2, 0x2b, 0x24, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x5, 0x2, 0x2, 0x2e, 
    0x2f, 0x7, 0x1d, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x6, 0x2, 0x2, 0x30, 0x31, 
    0x9, 0x2, 0x2, 0x2, 0x31, 0x7, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 
    0x7, 0x2, 0x2, 0x33, 0x34, 0x9, 0x2, 0x2, 0x2, 0x34, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x36, 0x7, 0x8, 0x2, 0x2, 0x36, 0x37, 0x9, 0x2, 0x2, 
    0x2, 0x37, 0x38, 0x7, 0x9, 0x2, 0x2, 0x38, 0x39, 0x7, 0x1d, 0x2, 0x2, 
    0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0xa, 0x2, 0x2, 0x3b, 
    0x3c, 0x7, 0x1d, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0xb, 0x2, 0x2, 0x3d, 0x3e, 
    0x9, 0x2, 0x2, 0x2, 0x3e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 
    0xc, 0x2, 0x2, 0x40, 0x41, 0x7, 0x1d, 0x2, 0x2, 0x41, 0x42, 0x7, 0xb, 
    0x2, 0x2, 0x42, 0x43, 0x9, 0x2, 0x2, 0x2, 0x43, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x45, 0x7, 0xd, 0x2, 0x2, 0x45, 0x46, 0x5, 0x1a, 0xe, 0x2, 
    0x46, 0x47, 0x7, 0xe, 0x2, 0x2, 0x47, 0x4a, 0x5, 0x2, 0x2, 0x2, 0x48, 
    0x49, 0x7, 0xf, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x2, 0x2, 0x2, 0x4a, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x10, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x1a, 
    0xe, 0x2, 0x4e, 0x4f, 0x7, 0x11, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x2, 0x2, 
    0x2, 0x50, 0x13, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x9, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x9, 0x3, 0x2, 0x2, 0x53, 0x54, 0x9, 0x2, 0x2, 0x2, 0x54, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x55, 0x57, 0x7, 0x18, 0x2, 0x2, 0x56, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x66, 0x5, 0x14, 0xb, 
    0x2, 0x5c, 0x60, 0x9, 0x4, 0x2, 0x2, 0x5d, 0x5f, 0x7, 0x18, 0x2, 0x2, 
    0x5e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x5, 
    0x14, 0xb, 0x2, 0x64, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x17, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6b, 0x7, 0x18, 0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x74, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x75, 0x5, 0x16, 0xc, 0x2, 0x70, 0x71, 0x7, 0x1b, 
    0x2, 0x2, 0x71, 0x72, 0x5, 0x16, 0xc, 0x2, 0x72, 0x73, 0x7, 0x1c, 0x2, 
    0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 0x75, 0x19, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x7b, 0x5, 0x18, 0xd, 0x2, 0x77, 0x78, 0x9, 0x4, 0x2, 0x2, 0x78, 0x7a, 
    0x5, 0x18, 0xd, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0xb, 0x20, 0x2b, 0x4a, 0x58, 0x60, 0x66, 0x6c, 0x74, 0x7b, 
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
