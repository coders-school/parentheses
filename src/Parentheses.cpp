#include "Parentheses.hpp"
#include <stack>

bool Parentheses::isBalanced(std::string s) {

int i = 0;
std::stack<char> ParenthesesStack{};

for(auto p = s.begin() ; i < s.size() ; p++, i++) {
    if(ParenthesesStack.size() > 0) {
        if (*p == '}') {
            if(ParenthesesStack.top() == '{')
                ParenthesesStack.pop();
        }
        else if (*p == ')') {
            if(ParenthesesStack.top() == '(')
                ParenthesesStack.pop();
        }
        else if (*p == ']') {
            if(ParenthesesStack.top() == '[')
                ParenthesesStack.pop();
        }
        else
            ParenthesesStack.push(*p);
    }
    else
        ParenthesesStack.push(*p);
}

return ParenthesesStack.empty();
}
