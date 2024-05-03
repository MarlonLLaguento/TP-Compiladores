#include "antlr4-runtime.h"
#include "generated/Lexer.h"
#include "generated/Polaca.h"
#include <iostream>

int main(int argc, const char* argv[]) {
    std::string input("4 5 +");
    antlr4::ANTLRInputStream inputStream(input);
    Lexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    Polaca parser(&tokens);

    Polaca::ExprContext* tree = parser.expr();
    EvalVisitor visitor;
    int result = visitor.visit(tree);
    std::cout << "Result: " << result << std::endl;

    return 0;
}