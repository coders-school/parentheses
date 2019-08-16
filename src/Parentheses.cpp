#include <map>
#include <stack>
#include "Parentheses.hpp"


bool Parentheses::isBalanced(std::string s) {
   std::stack <char> checkingStack ;

    for (auto letter : s) {
        if(checkingStack.empty()){
            if (letter == '(' or letter =='{' or letter == '[' or letter == '<')
                checkingStack.push(letter);
            else if (letter == ' ');
            else return false;
        }
        else{
            if (letter == '(' or letter =='{' or letter == '[' or letter == '<')
                checkingStack.push(letter);
            else if (letter == ')' and checkingStack.top() == '(')
                checkingStack.pop();
            else if (letter == '}' and checkingStack.top() == '{')
                checkingStack.pop();
            else if (letter == '>' and checkingStack.top() == '<')
                checkingStack.pop(); 
            else if (letter == ']' and checkingStack.top() == '[')
                checkingStack.pop();           
            else if (letter == ' ')
                continue;
            else return false;
        }
}
    return checkingStack.empty();
}