#include "Parentheses.hpp"
#include <stack>
#include <map>
#include <iostream>

bool Parentheses::isBalanced(std::string stringInput) {
    std::map<char, char> bracketsMap =
    {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };
    
    std::stack<char> brackets;
    for(auto strItr=stringInput.begin(); strItr!=stringInput.end(); ++strItr)
    {
        if(*strItr=='(' or *strItr=='[' or *strItr=='{') 
            brackets.push(*strItr);

        if(*strItr==')' or *strItr==']' or *strItr=='}')
        {
            auto mapItr = bracketsMap.find(*strItr);
            if(brackets.empty() or mapItr==bracketsMap.end())
                return false;
            
            if(mapItr->second != brackets.top())
                return false;
            else
                brackets.pop();    
        } 
    }
    return brackets.empty();
}