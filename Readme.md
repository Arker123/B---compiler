# Compiler for B-- Programming Language

This project involved writing a compiler for the B-- programming language from scratch using Flex and Bison tools. The compiler is able to recognize the source code of the B-- programming language, generate an abstract syntax tree (AST), and generate meaningful error messages for various syntax errors in the source code.

## Team Members
1. Arnav Kharbanda      - 2021CSB1072
2. Yashasav Prajapati   - 2021CSB1143

## Overview

The B-- programming language is a toy programming language based on BASIC. The compiler for B-- was implemented by defining the grammar of the language and using Flex and Bison tools to generate a lexical analyzer (scanner) and a syntax analyzer (parser).

The lexical analyzer tokenizes the source code of the B-- programming language by recognizing keywords, identifiers, operators, and other tokens in the source code. The syntax analyzer parses the tokenized source code and generates an abstract syntax tree (AST) that represents the structure of the program. The AST is then used to generate the executable code for the program.

The compiler also generates meaningful error messages to identify various errors in the syntax of the provided sample source codes of B--.

## Features

The B-- compiler supports the following features:

-    Variables: supports scalar numeric variables (Integer, Single Precision, Double Precision) and scalar string variables.
-    Operators: supports arithmetic operators (+, -, *, /) and comparison operators (=, <>, <, >, <=, >=).
-    Control structures: supports IF-THEN statements and FOR-NEXT loops.
-    Input and output: supports INPUT and PRINT statements.
-    Arrays: supports arrays with non-default sizes using the DIM statement.
-    DATA statement: supports storing values in memory using the DATA statement for later use with the READ statement.
-    DEF statement: define a user-defined function of one numeric variable or a pseudo-constant.

-    GOSUB statement: To call a Subroutine

## Setup and Running the Code

To run the compiler, Flex and Bison tools need to be installed on your system. Once installed, clone this repository and run the following command to build the compiler:

```make```

This will generate an executable file called a.out. You can then use the compiler to compile B-- source code by running the following command:

```./a.out <input_file>```

Replace ```<input_file>``` with the path to the input file containing the B-- source code. The compiler will generate an output file called output.asm, which will contain the generated assembly code.
Conclusion

Writing a compiler for a programming language from scratch is a complex and challenging task, but it provides a deep understanding of programming languages and compilers. By following this guide and exploring the code, you can learn how to write a simple compiler for the B-- programming language using Flex and Bison tools.