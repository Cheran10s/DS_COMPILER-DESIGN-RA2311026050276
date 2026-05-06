
#include <iostream>
#include <fstream>
#include <sstream>

#include "lexer.h"
#include "parser.h"
#include "semantic.h"
#include "codegen.h"

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "Usage: ./novac <file.nova>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    std::stringstream buffer;
    buffer << file.rdbuf();

    std::string source = buffer.str();

    Lexer lexer(source);
    auto tokens = lexer.tokenize();

    Parser parser(tokens);
    auto ast = parser.parse();

    SemanticAnalyzer semantic;
    semantic.analyze(ast);

    CodeGenerator generator;
    generator.generate(ast);

    std::cout << "Compilation Successful!" << std::endl;

    return 0;
}
