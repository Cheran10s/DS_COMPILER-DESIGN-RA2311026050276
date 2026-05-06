
#pragma once
#include <vector>
#include <string>

struct Token {
    std::string type;
    std::string value;
};

class Lexer {
private:
    std::string source;

public:
    Lexer(const std::string& src);
    std::vector<Token> tokenize();
};
