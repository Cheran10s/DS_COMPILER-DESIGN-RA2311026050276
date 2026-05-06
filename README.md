# DS_COMPILER-DESIGN-RA2311026050276
NovaDSL Compiler

An LLVM-based End-to-End Compiler for a Custom Domain-Specific Language (DSL) designed with a complete compilation pipeline from source code to native executable generation.

Project Overview

NovaDSL Compiler is a modular compiler implementation that demonstrates the complete workflow of modern compiler construction using LLVM infrastructure. The project converts custom DSL source code into LLVM Intermediate Representation (IR) and further generates native executable code using the LLVM llc backend.

This project is developed for:

Compiler Design and Construction
LLVM IR Generation
DSL Implementation
Open-Source Compiler Architecture
Academic and Research Purposes
Features
Custom Domain-Specific Language (DSL)
Lexical Analysis (Lexer)
Syntax Analysis (Parser)
AST Construction
Semantic Analysis
LLVM IR Code Generation
Native Executable Generation using llc
Modular and Scalable Architecture
Professional Repository Structure
Easy Extension for Future Features

Compiler Architecture
Source Code (.nova)
        ↓
Lexer
        ↓
Parser
        ↓
Abstract Syntax Tree (AST)
        ↓
Semantic Analysis
        ↓
LLVM IR Generator
        ↓
LLVM llc Backend
        ↓
Assembly Code
        ↓
Native Executable

Project Structure
NovaDSL-Compiler/
│
├── lexer/
│   ├── lexer.h
│   └── lexer.cpp
│
├── parser/
│   ├── parser.h
│   └── parser.cpp
│
├── semantics/
│   ├── semantic.h
│   └── semantic.cpp
│
├── ir_codegen/
│   ├── codegen.h
│   └── codegen.cpp
│
├── examples/
│   └── sample.nova
│
├── docs/
│   └── architecture.md
│
├── tests/
│
├── main.cpp
├── CMakeLists.txt
├── README.md
├── LICENSE
└── .gitignore

Build Instructions
git clone https://github.com/your-username/NovaDSL-Compiler.git

cd NovaDSL-Compiler

mkdir build
cd build

cmake ..
make

Sample LLVM IR Output
define i32 @main() {
entry:
  ret i32 0
}

Current Compiler Modules
Lexer

Responsible for tokenizing source code into meaningful tokens.

Supported Tokens
Keywords
Identifiers
Operators
Numbers
Delimiters
