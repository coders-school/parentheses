#include "Parentheses.hpp"
#include "stack"

char Parentheses::findPair(char s)
{
    char result;

    switch(s) {
        case ')':
            result = '(';
            break;
        case ']':
            result = '[';
            break;
        case '}':
            result = '{';
            break;
    }

    return result;
}

bool Parentheses::isBalanced(std::string s) {

    std::stack<char> stos{};
    
    for(auto el:s) {
        if(stos.size() >= 1) {            
            if (findPair(el) == stos.top()) {
                stos.pop();
            }
            else {
                stos.push(el); 
            }            
        }
        else {
            stos.push(el); 
        }            
    }

    return stos.empty();
}
