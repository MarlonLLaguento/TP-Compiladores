#include "antlr4-runtime.h"
#include "generated/PolishNotationCalculatorLexer.h"
#include "generated/PolishNotationCalculatorParser.h"
#include <iostream>

int main(int argc, const char* argv[]) {
    std::string input("4 5 + 3 *");
    antlr4::ANTLRInputStream inputStream(input);
    PolishNotationCalculatorLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    PolishNotationCalculatorParser parser(&tokens);

    PolishNotationCalculatorParser::ExprContext* tree = parser.expr();
    EvalVisitor visitor;
    int result = visitor.visit(tree);
    std::cout << "Result: " << result << std::endl;

    return 0;
}