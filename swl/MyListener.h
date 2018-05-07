#pragma once

#include "antlr4-runtime.h"
#include "swlParser.h"
#include "swlBaseListener.h"


/**
 * This class defines a concrete listener for a parse tree produced by swlParser.
 */
class  MyListener : public swlBaseListener {
private:
  int indent = 0;

public:

  void enterProgram(swlParser::ProgramContext *ctx);

  void enterCodeblock(swlParser::CodeblockContext *ctx);

  void exitCodeblock(swlParser::CodeblockContext *ctx);

  void exitAssign(swlParser::AssignContext *ctx);

  void exitPrint(swlParser::PrintContext *ctx);

  void exitAdd(swlParser::AddContext *ctx);

  void exitDiv(swlParser::DivContext *ctx);

  void exitMul(swlParser::MulContext *ctx);

  void enterWhileloop(swlParser::WhileloopContext *ctx);

  void enterIfcond(swlParser::IfcondContext *ctx);

  void enterElsecond(swlParser::ElsecondContext *ctx);

  void enterFullcond(swlParser::FullcondContext *ctx);

  void exitFullcond(swlParser::FullcondContext *ctx);

  void enterC1(swlParser::C1Context *ctx);

  void exitC1(swlParser::C1Context *ctx);

  void enterC2(swlParser::C2Context *ctx);

  void exitC2(swlParser::C2Context *ctx);

  void exitOp(swlParser::OpContext *ctx);

  void exitCp(swlParser::CpContext *ctx);

  void exitAndS(swlParser::AndSContext *ctx);

  void exitOrS(swlParser::OrSContext *ctx);

  void exitNotS(swlParser::NotSContext *ctx);
};
