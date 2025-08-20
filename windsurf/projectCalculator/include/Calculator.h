#pragma once
#include "Token.h"
#include <string>
#include <vector>

class Calculator {
public:
    Calculator(const std::string& input);
    ~Calculator() = default;

    void printInput() const;
    void tokenize();
    void printTokens() const;
    void parse();

private:
    std::string tokenToString(const Token& token) const;
    
    std::string input;
    std::vector<Token> input_tokens;
};
