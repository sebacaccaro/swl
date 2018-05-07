
// Generated from swl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "swlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by swlParser.
 */
class  swlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(swlParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(swlParser::ProgramContext *ctx) = 0;

  virtual void enterCodeblock(swlParser::CodeblockContext *ctx) = 0;
  virtual void exitCodeblock(swlParser::CodeblockContext *ctx) = 0;

  virtual void enterStatement(swlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(swlParser::StatementContext *ctx) = 0;

  virtual void enterAssign(swlParser::AssignContext *ctx) = 0;
  virtual void exitAssign(swlParser::AssignContext *ctx) = 0;

  virtual void enterPrint(swlParser::PrintContext *ctx) = 0;
  virtual void exitPrint(swlParser::PrintContext *ctx) = 0;

  virtual void enterAdd(swlParser::AddContext *ctx) = 0;
  virtual void exitAdd(swlParser::AddContext *ctx) = 0;

  virtual void enterMul(swlParser::MulContext *ctx) = 0;
  virtual void exitMul(swlParser::MulContext *ctx) = 0;

  virtual void enterDiv(swlParser::DivContext *ctx) = 0;
  virtual void exitDiv(swlParser::DivContext *ctx) = 0;

  virtual void enterIfcond(swlParser::IfcondContext *ctx) = 0;
  virtual void exitIfcond(swlParser::IfcondContext *ctx) = 0;

  virtual void enterElsecond(swlParser::ElsecondContext *ctx) = 0;
  virtual void exitElsecond(swlParser::ElsecondContext *ctx) = 0;

  virtual void enterWhileloop(swlParser::WhileloopContext *ctx) = 0;
  virtual void exitWhileloop(swlParser::WhileloopContext *ctx) = 0;

  virtual void enterC1(swlParser::C1Context *ctx) = 0;
  virtual void exitC1(swlParser::C1Context *ctx) = 0;

  virtual void enterC2(swlParser::C2Context *ctx) = 0;
  virtual void exitC2(swlParser::C2Context *ctx) = 0;

  virtual void enterMulticond(swlParser::MulticondContext *ctx) = 0;
  virtual void exitMulticond(swlParser::MulticondContext *ctx) = 0;

  virtual void enterParcond(swlParser::ParcondContext *ctx) = 0;
  virtual void exitParcond(swlParser::ParcondContext *ctx) = 0;

  virtual void enterFullcond(swlParser::FullcondContext *ctx) = 0;
  virtual void exitFullcond(swlParser::FullcondContext *ctx) = 0;

  virtual void enterAndS(swlParser::AndSContext *ctx) = 0;
  virtual void exitAndS(swlParser::AndSContext *ctx) = 0;

  virtual void enterOrS(swlParser::OrSContext *ctx) = 0;
  virtual void exitOrS(swlParser::OrSContext *ctx) = 0;

  virtual void enterNotS(swlParser::NotSContext *ctx) = 0;
  virtual void exitNotS(swlParser::NotSContext *ctx) = 0;

  virtual void enterOp(swlParser::OpContext *ctx) = 0;
  virtual void exitOp(swlParser::OpContext *ctx) = 0;

  virtual void enterCp(swlParser::CpContext *ctx) = 0;
  virtual void exitCp(swlParser::CpContext *ctx) = 0;

  virtual void enterLt(swlParser::LtContext *ctx) = 0;
  virtual void exitLt(swlParser::LtContext *ctx) = 0;

  virtual void enterMt(swlParser::MtContext *ctx) = 0;
  virtual void exitMt(swlParser::MtContext *ctx) = 0;

  virtual void enterLe(swlParser::LeContext *ctx) = 0;
  virtual void exitLe(swlParser::LeContext *ctx) = 0;

  virtual void enterMe(swlParser::MeContext *ctx) = 0;
  virtual void exitMe(swlParser::MeContext *ctx) = 0;

  virtual void enterEq(swlParser::EqContext *ctx) = 0;
  virtual void exitEq(swlParser::EqContext *ctx) = 0;

  virtual void enterDi(swlParser::DiContext *ctx) = 0;
  virtual void exitDi(swlParser::DiContext *ctx) = 0;


};

