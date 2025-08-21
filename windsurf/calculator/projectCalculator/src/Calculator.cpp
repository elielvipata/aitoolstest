#include "Calculator.h"
#include <iostream>
#include <cctype>

Calculator::Calculator(const std::string& input) : input(input) {
    tokenize();
}

void Calculator::printInput() const {
    std::cout << input << "\n";
}

void Calculator::tokenize() {
    for(int i = 0; i < input.length(); i++) {
        std::string token_value;
        bool is_value = false;
        
        while(isdigit(input[i]) || input[i] == '.') {
            token_value += input[i];
            i++;
            is_value = true;
        }

        if(is_value) {
            input_tokens.push_back(Token(OP_NONE, DIGIT, token_value));           
            token_value = "";
        }

        switch(input[i]) {
            case '+':
                input_tokens.push_back(Token(ADD, SYM_NONE, "+"));
                break;
            case '-':
                input_tokens.push_back(Token(SUB, SYM_NONE, "-"));
                break;
            case '*':
                input_tokens.push_back(Token(MUL, SYM_NONE, "*"));
                break;
            case '/':
                input_tokens.push_back(Token(DIV, SYM_NONE, "/"));
                break;
            case '%':
                input_tokens.push_back(Token(MOD, SYM_NONE, "%"));
                break;
            case '^':
                input_tokens.push_back(Token(POW, SYM_NONE, "^"));
                break;
            case '(': 
                input_tokens.push_back(Token(OP_NONE, LPAREN, "("));
                break;
            case ')':
                input_tokens.push_back(Token(OP_NONE, RPAREN, ")"));
                break;
            case '[':
                input_tokens.push_back(Token(OP_NONE, LBRACKET, "["));
                break;
            case ']':
                input_tokens.push_back(Token(OP_NONE, RBRACKET, "]"));
                break;
            case '{':
                input_tokens.push_back(Token(OP_NONE, LBRACE, "{"));
                break;
            case '}':
                input_tokens.push_back(Token(OP_NONE, RBRACE, "}"));
                break;
            case ',':
                input_tokens.push_back(Token(OP_NONE, COMMA, ","));
                break;
            case ';':
                input_tokens.push_back(Token(OP_NONE, SEMICOLON, ";"));
                break;
            case ':':
                input_tokens.push_back(Token(OP_NONE, COLON, ":"));
                break;
            case '.':
                input_tokens.push_back(Token(OP_NONE, DOT, "."));
                break;
            default:
                break;
        }        
    }
}

void Calculator::printTokens() const {
    for(int i = 0; i < input_tokens.size(); i++) {
        if(input_tokens[i].op != OP_NONE) {
            std::cout << tokenToString(input_tokens[i]) << " ";
        }
        else if(input_tokens[i].sym != SYM_NONE) {
            std::cout << tokenToString(input_tokens[i]) << " ";
        }
        else if(input_tokens[i].value != "") {
            std::cout << input_tokens[i].value << " ";
        }
    }
    std::cout << "\n";
}

std::string Calculator::tokenToString(const Token& token) const {
    switch(token.op) {
        case ADD:
            return "ADD";
        case SUB:
            return "SUB";
        case MUL:
            return "MUL";
        case DIV:
            return "DIV";
        case MOD:
            return "MOD";
        case POW:
            return "POW";
        case OP_NONE:
            return "OP_NONE";
    }

    switch(token.sym) {
        case LPAREN:
            return "LPAREN";
        case RPAREN:
            return "RPAREN";
        case LBRACE:
            return "LBRACE";
        case RBRACE:
            return "RBRACE";
        case LBRACKET:
            return "LBRACKET";
        case RBRACKET:
            return "RBRACKET";
        case COMMA:
            return "COMMA";
        case SEMICOLON:
            return "SEMICOLON";
        case COLON:
            return "COLON";
        case DOT:
            return "DOT";
        case DIGIT:
            return "DIGIT";
        case SYM_NONE:
            return "SYM_NONE";
    }

    return "";
}

void Calculator::parse() {
    for(auto token : input_tokens) {
        // Parse implementation placeholder
    }
}
