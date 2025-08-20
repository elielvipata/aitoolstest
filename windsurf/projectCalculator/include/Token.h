#pragma once
#include <string>

enum Operation {
    ADD,
    SUB,
    MUL,
    DIV,
    MOD,
    POW,
    OP_NONE
};

enum Symbol {
    LPAREN,
    RPAREN,
    LBRACE,
    RBRACE,
    LBRACKET,
    RBRACKET,
    COMMA,
    SEMICOLON,
    COLON,
    DOT,
    DIGIT,
    SYM_NONE
};

struct Token {
    Operation op;
    Symbol sym;
    std::string value;
    
    // Constructor for easy initialization
    Token(Operation o, Symbol s, const std::string& v) : op(o), sym(s), value(v) {}
};
