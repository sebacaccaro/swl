// Generated from swl.g4 by ANTLR 4.7
#include <iostream>
#include "MyListener.h"

using namespace std;

void MyListener::enterProgram(swlParser::ProgramContext *ctx) {
    cout << "#include <iostream>" << endl << endl
         << "using namespace std;" << endl << endl
         << "int main()" << endl;
}

void MyListener::enterCodeblock(swlParser::CodeblockContext *ctx) {
    cout << "{" << endl;
    indent += 4;
}

void MyListener::exitCodeblock(swlParser::CodeblockContext *ctx) {
    indent -= 4;
    cout << string(indent, ' ') << "}" << endl;

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


void MyListener::exitMul(swlParser::MulContext *ctx) {
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


void MyListener::exitDiv(swlParser::DivContext *ctx) {
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


void MyListener::enterWhileloop(swlParser::WhileloopContext *ctx) {
    cout << string(indent, ' ') <<"while";
}

void MyListener::enterIfcond(swlParser::IfcondContext *ctx){
    cout << string(indent, ' ') << "if";
}

void MyListener::enterElsecond(swlParser::ElsecondContext *ctx){
    cout << string(indent, ' ') << "else ";
}

void MyListener::enterFullcond(swlParser::FullcondContext *ctx){
    cout << "( ";
}

void MyListener::exitFullcond(swlParser::FullcondContext *ctx){
    cout << " )";
}

void MyListener::enterC1(swlParser::C1Context *ctx) {
    cout << ctx->ID(0)->getText() << ' ';
    if(ctx->lt() != NULL)
        cout << "< ";
    else if(ctx->mt() != NULL)
        cout << "> ";
    else if(ctx->le() != NULL)
        cout << "<= ";
    else if(ctx->me() != NULL)
        cout << ">= ";
    else if(ctx->eq() != NULL)
        cout << "== ";
    else if(ctx->di() != NULL)
        cout << "!= ";
}

void MyListener::exitC1(swlParser::C1Context *ctx) {
    if(ctx->ID().size() > 1)
        cout << ctx->ID(1)->getText();
    else
        cout << ctx->NUMBER()->getText();
}

void MyListener::enterC2(swlParser::C2Context *ctx) {
    cout << ctx->NUMBER(0)->getText();
}


void MyListener::exitC2(swlParser::C2Context *ctx) {
    if(ctx->NUMBER().size() > 1)
        cout << ctx->NUMBER(1)->getText();
    else
        cout << ctx->ID()->getText();
}

void MyListener::exitOp(swlParser::OpContext *ctx) {
    cout << "( ";
}

void MyListener::exitCp(swlParser::CpContext *ctx) {
    cout << " )";
}

void MyListener::exitAndS(swlParser::AndSContext *ctx) {
    cout << " && ";
}

void MyListener::exitOrS(swlParser::OrSContext *ctx) {
    cout << " || ";
}

void MyListener::exitNotS(swlParser::NotSContext *ctx) {
    cout << " !";
}
