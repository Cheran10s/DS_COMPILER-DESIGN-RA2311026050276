
# NovaDSL Compiler

LLVM-based end-to-end compiler for a custom Domain-Specific Language (DSL).

## Features
- Lexer
- Parser
- AST Construction
- Semantic Analysis
- LLVM IR Generation
- Native executable generation using LLVM `llc`

## Project Structure
```
NovaDSL-Compiler/
├── lexer/
├── parser/
├── ast/
├── semantics/
├── ir_codegen/
├── examples/
├── docs/
├── tests/
├── main.cpp
└── CMakeLists.txt
```

## Build Instructions
```bash
mkdir build
cd build
cmake ..
make
```

## Run
```bash
./novac ../examples/sample.nova
```

## Example DSL
```nova
func main() {
    let x = 10;
    print(x);
    return 0;
}
```
