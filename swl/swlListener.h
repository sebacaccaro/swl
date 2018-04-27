
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

  virtual void enterWhileloop(swlParser::WhileloopContext *ctx) = 0;
  virtual void exitWhileloop(swlParser::WhileloopContext *ctx) = 0;

  virtual void enterCondition(swlParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(swlParser::ConditionContext *ctx) = 0;

  virtual void enterMulticond(swlParser::MulticondContext *ctx) = 0;
  virtual void exitMulticond(swlParser::MulticondContext *ctx) = 0;

  virtual void enterParcond(swlParser::ParcondContext *ctx) = 0;
  virtual void exitParcond(swlParser::ParcondContext *ctx) = 0;

  virtual void enterFullcond(swlParser::FullcondContext *ctx) = 0;
  virtual void exitFullcond(swlParser::FullcondContext *ctx) = 0;


};

