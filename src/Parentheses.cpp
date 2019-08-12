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
    
    std::stack<char> parenthesesContainer;
    for(auto strItr=stringInput.begin(); strItr!=stringInput.end(); ++strItr)
    {
        if(*strItr=='(' or *strItr=='[' or *strItr=='{') 
            parenthesesContainer.push(*strItr);

        if(*strItr==')' or *strItr==']' or *strItr=='}')
        {
            auto mapItr = bracketsMap.find(*strItr);
            if(parenthesesContainer.empty() or mapItr==bracketsMap.end())
                return false;
            
            if(mapItr->second != parenthesesContainer.top())
                return false;
            else
                parenthesesContainer.pop();    
        } 
    }
    return parenthesesContainer.empty();
}