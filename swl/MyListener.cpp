// Generated from swl.g4 by ANTLR 4.7
#include <iostream>
#include "MyListener.h"

using namespace std;

void MyListener::enterProgram(swlParser::ProgramContext *ctx) {
    cout << "#include <iostream>" << endl << endl
         << "using namespace std;" << endl << endl
         << "int main()" << endl;
}

void MyListener::enterCodeBlock(swlParser::ProgramContext *ctx) {
    cout << "{" << endl;
    indent += 4;
}

void MyListener::exitCodeBlock(swlParser::ProgramContext *ctx) {
    cout << "}" << endl;
    indent -= 4;
}

void MyListener::exitAssign(swlParser::AssignContext *ctx) {
    string name = ctx->ID(0)->getText();
    string val;
    if(ctx->ID().size() > 1) {
        val = ctx->ID(1)->getText();
    } else {
        val = ctx->NUMBER()->getText();
    }
    cout << string(indent, ' ') << "int " << name << " = " << val << ";" << endl;
}


void MyListener::exitPrint(swlParser::PrintContext *ctx) {
    string val;
    if(ctx->ID() != NULL) {
        val = ctx->ID()->getText();
    } else {
        val = ctx->NUMBER()->getText();
    }
    cout << string(indent, ' ') << "cout << " << val << " << endl;" << endl;    
}

void MyListener::exitAdd(swlParser::AddContext *ctx) {
    string name;
    string val;
    if(ctx->ID().size() > 1) {
        name = ctx->ID(1)->getText();
        val = ctx->ID(0)->getText();
    } else {
        name = ctx->ID(0)->getText();
        val = ctx->NUMBER()->getText();
    }
    cout << string(indent, ' ') << name << " += " << val << ";" << endl;
}


void MyListener::exitMul(swlParser::AddContext *ctx) {
    string name;
    string val;
    if(ctx->ID().size() > 1) {
        name = ctx->ID(0)->getText();
        val = ctx->ID(1)->getText();
    } else {
        name = ctx->ID(0)->getText();
        val = ctx->NUMBER()->getText();
    }
    cout << string(indent, ' ') << name << " = " << name << " * " << val << ";" << endl;
}


void MyListener::exitDiv(swlParser::AddContext *ctx) {
    string name;
    string val;
    if(ctx->ID().size() > 1) {
        name = ctx->ID(0)->getText();
        val = ctx->ID(1)->getText();
    } else {
        name = ctx->ID(0)->getText();
        val = ctx->NUMBER()->getText();
    }
    cout << string(indent, ' ') << name << " = " << name << " / " << val << ";" << endl;
}


void MyListener::enterWhileLoop(swlParser::ProgramContext *ctx) {
    cout << "while ";
}

void MyListener::enterIfCond(swlParser::ProgramContext *ctx){
    cout << "if ";
}

void MyListener::enterElseCond(swlParser::ProgramContext *ctx){
    cout << "else ";
}

void MyListener::enterC1(swlParser::AddContext *ctx) {
    cout << string(indent, ' ') << ctx->ID(0)->getText() << ' ';
    if(ctx->lt() != NULL)
        cout << ;
    else if(ctx->mt() != NULL)
        cout << ;
    else if(ctx->le() != NULL)
        cout << ;
    else if(ctx->me() != NULL)
        cout << ;
    else if(ctx->eq() != NULL)
        cout << ;
    else if(ctx->di() != NULL)
        cout << ;
}

void MyListener::exitC1(swlParser::AddContext *ctx) {
    if(ctx->ID().size() > 1)
        cout << string(indent, ' ') << ctx->ID(1)->getText();
    else
        cout << string(indent, ' ') << ctx->NUMBER()->getText();
}

void MyListener::enterC2(swlParser::AddContext *ctx) {
    cout << string(indent, ' ') << ctx->NUMBER()->getText();
}


void MyListener::exitC2(swlParser::AddContext *ctx) {
    if(ctx->NUMBER().size() > 1)
        cout << string(indent, ' ') << ctx->NUMBER(1)->getText();
    else
        cout << string(indent, ' ') << ctx->ID(0)->getText();
}

void MyListener::exitOp(swlParser::AddContext *ctx) {
    cout << "( ";
}

void MyListener::exitCp(swlParser::AddContext *ctx) {
    cout << " )";
}

void MyListener::exitAndS(swlParser::AddContext *ctx) {
    cout << " && ";
}

void MyListener::exitOrS(swlParser::AddContext *ctx) {
    cout << " || ";
}

void MyListener::exitNotS(swlParser::AddContext *ctx) {
    cout << " !";
}
