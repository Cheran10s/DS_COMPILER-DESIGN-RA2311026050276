
#include "parser.h"

Parser::Parser(const std::vector<Token>& tks) : tokens(tks) {}

ASTNode Parser::parse() {
    return {"Program"};
}
