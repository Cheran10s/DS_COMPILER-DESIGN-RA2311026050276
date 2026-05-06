
#include "codegen.h"
#include <fstream>

void CodeGenerator::generate(ASTNode& node) {
    std::ofstream out("output.ll");

    out << "define i32 @main() {\n";
    out << "entry:\n";
    out << "ret i32 0\n";
    out << "}\n";

    out.close();
}
