Tree-sitter LLVM

A Tree-sitter grammar for LLVM IR assembly (.ll). This parser aims to closely follow LLVM's textual IR as parsed by LLParser, including modules, functions, types, instructions, attributes, metadata, and more.

Highlights and captures are provided in queries/highlights.scm.

Installation
- Node.js
  - npm install tree-sitter-llvm
  - Usage:
    - const Parser = require('tree-sitter');
    - const llvm = require('tree-sitter-llvm');
    - const parser = new Parser();
    - parser.setLanguage(llvm);
    - const tree = parser.parse('%x = alloca i32');

- Rust
  - Cargo.toml:
    - tree-sitter-llvm = "1.1.0"
  - Usage:
    - let mut parser = tree_sitter::Parser::new();
    - let language = tree_sitter_llvm::LANGUAGE;
    - parser.set_language(&language.into()).unwrap();

- Python (tree-sitter >= 0.25)
  - pip install tree-sitter-llvm
  - Usage:
    - from tree_sitter import Language, Parser
    - import tree_sitter_llvm
    - parser = Parser()
    - parser.set_language(Language(tree_sitter_llvm.language()))

- C
  - Include bindings/c/tree-sitter-llvm.h and link the generated parser in src/.
  - The language symbol is: const TSLanguage *tree_sitter_llvm(void);

- Go
  - The binding is in bindings/go. Example with go-tree-sitter:
    - import (
      - "github.com/tree-sitter/go-tree-sitter"
      - llvm "path/to/this/repo/bindings/go"
      - )
    - parser := sitter.NewParser()
    - parser.SetLanguage(sitter.NewLanguage(llvm.Language()))

- Swift (SwiftPM)
  - Add this repository as a dependency and use TreeSitterLlvm target.
  - Example:
    - import SwiftTreeSitter
    - import TreeSitterLlvm
    - let parser = Parser()
    - let language = Language(language: tree_sitter_llvm())
    - try parser.setLanguage(language)

Status and scope
- Language name: llvm (as used by grammar.js)
- Targets LLVM IR textual format (.ll). MIR is out of scope.
- Grammar rules are modeled after LLVM's LLParser constructs (target definitions, declarations/definitions, instructions incl. alloca, getelementptr, phi, cmpxchg, atomicrmw, br; comdat; metadata; summaries; attributes; etc.).

Queries
- queries/highlights.scm contains basic highlighting captures for common editors that consume Tree-sitter queries.

Development
- Prerequisites: Node.js, npm, and tree-sitter-cli (npx tree-sitter works via devDependencies)
- Generate/rebuild parser C sources:
  - npx tree-sitter generate
- Run grammar tests (corpus under test/corpus):
  - npx tree-sitter test
- Rust tests (ensures the language loads):
  - cargo test
- Python tests:
  - pip install -e .[core]
  - pytest bindings/python/tests
- Swift tests:
  - swift test

Example
- See example/ and test/corpus for sample LLVM IR snippets and expected parses.

Contributing
- Issues and PRs are welcome. Please run tree-sitter tests and format code before submitting.

License
- MIT (see LICENSE)

Acknowledgements
- Based on LLVM's existing bindings and textual IR structure: https://github.com/llvm/llvm-project/blob/main/llvm/utils/
