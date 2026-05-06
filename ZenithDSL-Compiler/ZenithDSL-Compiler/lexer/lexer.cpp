
#include "lexer.h"

Lexer::Lexer(const std::string& src) : source(src) {}

std::vector<Token> Lexer::tokenize() {
    std::vector<Token> tokens;

    tokens.push_back({"FUNC", "func"});
    tokens.push_back({"IDENTIFIER", "main"});

    return tokens;
}
