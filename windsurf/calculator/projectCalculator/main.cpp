#include "Calculator.h"
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    Calculator calc(input);
    calc.printInput();
    calc.printTokens();
    return 0;
}
