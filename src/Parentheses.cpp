#include "Parentheses.hpp"
#include "stack"

bool Parentheses::isBalanced(std::string s) {

    std::stack<char> stos{};
    
    for(auto el:s) {
        if(stos.size() >= 1) {
            if (el == ')') {
                if(stos.top() == '(')
                    stos.pop();
            }
            else if (el == '}') {
                if(stos.top() == '{')
                    stos.pop();
            }
            else if (el == ']') {
                if(stos.top() == '[')
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
