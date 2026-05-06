
cmake_minimum_required(VERSION 3.10)
project(NovaDSLCompiler)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    lexer
    parser
    ast
    semantics
    ir_codegen
)

add_executable(novac
    main.cpp
    lexer/lexer.cpp
    parser/parser.cpp
    semantics/semantic.cpp
    ir_codegen/codegen.cpp
)
