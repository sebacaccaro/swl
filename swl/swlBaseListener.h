
// Generated from swl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "swlListener.h"


/**
 * This class provides an empty implementation of swlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  swlBaseListener : public swlListener {
public:

  virtual void enterProgram(swlParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(swlParser::ProgramContext * /*ctx*/) override { }

  virtual void enterCodeblock(swlParser::CodeblockContext * /*ctx*/) override { }
  virtual void exitCodeblock(swlParser::CodeblockContext * /*ctx*/) override { }

  virtual void enterStatement(swlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(swlParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssign(swlParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(swlParser::AssignContext * /*ctx*/) override { }

  virtual void enterPrint(swlParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(swlParser::PrintContext * /*ctx*/) override { }

  virtual void enterAdd(swlParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(swlParser::AddContext * /*ctx*/) override { }

  virtual void enterMul(swlParser::MulContext * /*ctx*/) override { }
  virtual void exitMul(swlParser::MulContext * /*ctx*/) override { }

  virtual void enterDiv(swlParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(swlParser::DivContext * /*ctx*/) override { }

  virtual void enterIfcond(swlParser::IfcondContext * /*ctx*/) override { }
  virtual void exitIfcond(swlParser::IfcondContext * /*ctx*/) override { }

  virtual void enterElsecond(swlParser::ElsecondContext * /*ctx*/) override { }
  virtual void exitElsecond(swlParser::ElsecondContext * /*ctx*/) override { }

  virtual void enterWhileloop(swlParser::WhileloopContext * /*ctx*/) override { }
  virtual void exitWhileloop(swlParser::WhileloopContext * /*ctx*/) override { }

  virtual void enterC1(swlParser::C1Context * /*ctx*/) override { }
  virtual void exitC1(swlParser::C1Context * /*ctx*/) override { }

  virtual void enterC2(swlParser::C2Context * /*ctx*/) override { }
  virtual void exitC2(swlParser::C2Context * /*ctx*/) override { }

  virtual void enterMulticond(swlParser::MulticondContext * /*ctx*/) override { }
  virtual void exitMulticond(swlParser::MulticondContext * /*ctx*/) override { }

  virtual void enterParcond(swlParser::ParcondContext * /*ctx*/) override { }
  virtual void exitParcond(swlParser::ParcondContext * /*ctx*/) override { }

  virtual void enterFullcond(swlParser::FullcondContext * /*ctx*/) override { }
  virtual void exitFullcond(swlParser::FullcondContext * /*ctx*/) override { }

  virtual void enterAndS(swlParser::AndSContext * /*ctx*/) override { }
  virtual void exitAndS(swlParser::AndSContext * /*ctx*/) override { }

  virtual void enterOrS(swlParser::OrSContext * /*ctx*/) override { }
  virtual void exitOrS(swlParser::OrSContext * /*ctx*/) override { }

  virtual void enterNotS(swlParser::NotSContext * /*ctx*/) override { }
  virtual void exitNotS(swlParser::NotSContext * /*ctx*/) override { }

  virtual void enterOp(swlParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(swlParser::OpContext * /*ctx*/) override { }

  virtual void enterCp(swlParser::CpContext * /*ctx*/) override { }
  virtual void exitCp(swlParser::CpContext * /*ctx*/) override { }

  virtual void enterLt(swlParser::LtContext * /*ctx*/) override { }
  virtual void exitLt(swlParser::LtContext * /*ctx*/) override { }

  virtual void enterMt(swlParser::MtContext * /*ctx*/) override { }
  virtual void exitMt(swlParser::MtContext * /*ctx*/) override { }

  virtual void enterLe(swlParser::LeContext * /*ctx*/) override { }
  virtual void exitLe(swlParser::LeContext * /*ctx*/) override { }

  virtual void enterMe(swlParser::MeContext * /*ctx*/) override { }
  virtual void exitMe(swlParser::MeContext * /*ctx*/) override { }

  virtual void enterEq(swlParser::EqContext * /*ctx*/) override { }
  virtual void exitEq(swlParser::EqContext * /*ctx*/) override { }

  virtual void enterDi(swlParser::DiContext * /*ctx*/) override { }
  virtual void exitDi(swlParser::DiContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

