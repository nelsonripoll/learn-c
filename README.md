# Learn C

## Preprocessor Directive

The **C Preprocessor** is not a part of the compiler, but is a separate step in 
 the compilation process. In simple terms, a C Preprocessor is just a text 
 substitution tool and it instructs the compiler to do required pre-processing 
 before the actual compilation. We'll refer to the C Preprocessor as CPP.

All preprocessor commands begin with a hash symbol. It must be the first 
 nonblank character, and for readability, a preprocessor directive should begin 
 in the first column.

## Comments

```
// This is a comment

/*
 * This is also a comment.
 */
```

## Tokens
Tokens are the smallest elements of a program which are meaningful to the compiler.

1. Keywords
2. Identifiers
3. Constants
4. Strings
5. Special Symbols
6. Operators

### Keywords

[Keywords](https://en.cppreference.com/w/c/keyword) are the reserved words used 
 in programming and cannot be changed by the programmer.

### Identifiers

Identifiers are created to give a unique name to C entities to identify it during
 the execution of the program. They are used for naming of variables, functions,
 arrays, etc. These are user-defined names which consist of alphabets, number, 
 underscore. Identifier’s name should not be same or same as keywords.  Keywords 
 are not used as identifiers.

### Constants

Constants are identifiers that cannot be changed during the program's execution.
 They are defined by the ```const``` keyword or the ```#define``` preprocessor
 directive.

### Strings

A string is an array of characters ended with a null character\(\\0\). This null 
 character indicates that string has ended. Strings are always enclosed with 
 double quotes\(" "\).

### Special Symbols

1. () Function
2. {} Body
3. [] Array
4. \ Sequence escape
5. ; Termination of statement

### Operators

1. Arithmetic operators: +, -, *, / ...
2. Relational operators: =, <, >, ...
3. Logical operators: &&, ||

## Data Types

### Fundamental Data Types

1. Integer
2. Floating
3. Double
4. Character

#### Modifiers

1. Short
2. Long
3. Signed
4. Unsigned

### Derived Data Types

1. Arrays
2. Pointers
3. Structures
4. Enumeration

## Functions

### Library Functions

Predefined functions available to programmers.

1. main()
2. printf()
3. scanf()
4. strlen()
5. sqrt()

### User-Defined Functions

C allows programmers to define their own function according to their requirement.

```
return_type function_name (parameter list) {
  // statements
}
```

Parameters can be called by value or by reference. Calling by value means you 
 pass in the value of the variable and a copy is made to be used within the
 function. Calling by reference means you are passing in the address in memory
 of the variable.
