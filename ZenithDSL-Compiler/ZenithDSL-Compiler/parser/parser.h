
#pragma once
#include <vector>
#include <string>
#include "../lexer/lexer.h"

struct ASTNode {
    std::string type;
};

class Parser {
private:
    std::vector<Token> tokens;

public:
    Parser(const std::vector<Token>& tks);
    ASTNode parse();
};
