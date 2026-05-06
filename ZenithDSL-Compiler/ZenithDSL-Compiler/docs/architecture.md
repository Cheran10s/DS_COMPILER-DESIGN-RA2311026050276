
# Compiler Architecture

## Compilation Pipeline

Source Code
    ↓
Lexer
    ↓
Parser
    ↓
AST
    ↓
Semantic Analysis
    ↓
LLVM IR Generation
    ↓
llc Backend
    ↓
Native Executable
