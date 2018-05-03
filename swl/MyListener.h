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

  void enterCodeBlock(swlParser::ProgramContext *ctx);

  void exitCodeBlock(swlParser::ProgramContext *ctx);

  void exitAssign(swlParser::AssignContext *ctx);

  void exitPrint(swlParser::PrintContext *ctx);

  void exitAdd(swlParser::AddContext *ctx);

  void exitDiv(swlParser::AddContext *ctx);

  void exitMul(swlParser::AddContext *ctx);

  void enterWhileLoop(swlParser::ProgramContext *ctx);

  void enterIfCond(swlParser::ProgramContext *ctx);

  void enterElseCond(swlParser::ProgramContext *ctx);

  void enterC1(swlParser::AddContext *ctx);

  void exitC1(swlParser::AddContext *ctx);

  void enterC2(swlParser::AddContext *ctx);

  void exitC2(swlParser::AddContext *ctx);

  void exitOp(swlParser::AddContext *ctx);

  void exitCp(swlParser::AddContext *ctx);

  void exitAndS(swlParser::AddContext *ctx);

  void exitOrS(swlParser::AddContext *ctx);

  void exitNotS(swlParser::AddContext *ctx);
};

