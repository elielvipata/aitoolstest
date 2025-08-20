#include <iostream>
#include <vector>

enum Operation{
    ADD,
    SUB,
    MUL,
    DIV,
    MOD,
    POW,
    OP_NONE
};

enum Symbol{
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

struct Token{
    Operation op;
    Symbol sym;
    std::string value;
    
    // Constructor for easy initialization
    Token(Operation o, Symbol s, const std::string& v) : op(o), sym(s), value(v) {}
};

class Calculator{
public:
    Calculator(std::string input){
        this->input = input;
        this->tokenize();
    }
    ~Calculator(){}

    void printInput();
    void tokenize(); 
    void printTokens();   
    std::string tokenToString(Token token);
    void parse();
    void calculate();
    void printResult();

private:
    std::string input;
    std::vector<Token> input_tokens;
    std::vector<Token> operation_stack;
    double result;  
};

void Calculator::printInput(){
    std::cout << this->input << "\n";
}

void Calculator::tokenize(){
    for(int i = 0; i < this->input.length(); i++){
        std::string token_value;
        bool is_value = false;
        
        while(isdigit(this->input[i]) || this->input[i] == '.'){
            token_value += this->input[i];
            i++;
            is_value = true;
        }

        if(is_value){
            this->input_tokens.push_back(Token(OP_NONE, DIGIT, token_value));           
            token_value = "";
        }

        switch(this->input[i]){
            case '+':
                this->input_tokens.push_back(Token(ADD, SYM_NONE, "+"));
                break;
            case '-':
                this->input_tokens.push_back(Token(SUB, SYM_NONE, "-"));
                break;
            case '*':
                this->input_tokens.push_back(Token(MUL, SYM_NONE, "*"));
                break;
            case '/':
                this->input_tokens.push_back(Token(DIV, SYM_NONE, "/"));
                break;
            case '%':
                this->input_tokens.push_back(Token(MOD, SYM_NONE, "%"));
                break;
            case '^':
                this->input_tokens.push_back(Token(POW, SYM_NONE, "^"));
                break;
            case '(': 
                this->input_tokens.push_back(Token(OP_NONE, LPAREN, "("));
                break;
            case ')':
                this->input_tokens.push_back(Token(OP_NONE, RPAREN, ")"));
                break;
            case '[':
                this->input_tokens.push_back(Token(OP_NONE, LBRACKET, "["));
                break;
            case ']':
                this->input_tokens.push_back(Token(OP_NONE, RBRACKET, "]"));
                break;
            case '{':
                this->input_tokens.push_back(Token(OP_NONE, LBRACE, "{"));
                break;
            case '}':
                this->input_tokens.push_back(Token(OP_NONE, RBRACE, "}"));
                break;
            case ',':
                this->input_tokens.push_back(Token(OP_NONE, COMMA, ","));
                break;
            case ';':
                this->input_tokens.push_back(Token(OP_NONE, SEMICOLON, ";"));
                break;
            case ':':
                this->input_tokens.push_back(Token(OP_NONE, COLON, ":"));
                break;
            case '.':
                this->input_tokens.push_back(Token(OP_NONE, DOT, "."));
                break;
            default:
                break;
        }        
    }
}


void Calculator::printTokens(){
    for(int i = 0; i < this->input_tokens.size(); i++){
        if(this->input_tokens[i].op != OP_NONE){
            std::cout << this->tokenToString(this->input_tokens[i]) << " ";
        }
        else if(this->input_tokens[i].sym != SYM_NONE){
            std::cout << this->tokenToString(this->input_tokens[i]) << " ";
        }
        else if(this->input_tokens[i].value != ""){
            std::cout << this->input_tokens[i].value << " ";
        }
    }
    std::cout << "\n";
}

std::string Calculator::tokenToString(Token token){
    switch(token.op){
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

    switch(token.sym){
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

void Calculator::parse(){
    for(auto token : this->input_tokens){
    }
}


int main(){
    std::string input;
    std::getline(std::cin, input);
    Calculator calc(input);
    calc.printInput();
    calc.printTokens();
    return 0;
}
