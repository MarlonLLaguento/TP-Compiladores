#include "generated/PolishNotationCalculatorBaseVisitor.h"

class EvalVisitor : public PolishNotationCalculatorBaseVisitor {
public:
    virtual antlrcpp::Any visitBinaryOp(PolishNotationCalculatorParser::BinaryOpContext *ctx) override {
        int left = visit(ctx->expr(0));  // Visit left expression
        int right = visit(ctx->expr(1)); // Visit right expression
        if (ctx->op()->getText() == "+") return left + right;
        else if (ctx->op()->getText() == "-") return left - right;
        else if (ctx->op()->getText() == "*") return left * right;
        else if (ctx->op()->getText() == "/") return right != 0 ? left / right : 0; // Guard against division by zero
        return 0;
    }

    virtual antlrcpp::Any visitInt(PolishNotationCalculatorParser::IntContext *ctx) override {
        return std::stoi(ctx->getText());
    }
};