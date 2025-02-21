import XCTest
import SwiftTreeSitter
import TreeSitterLlvm

final class TreeSitterLlvmTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_llvm())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Llvm grammar")
    }
}
