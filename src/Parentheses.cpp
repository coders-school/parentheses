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
            auto mapstrItrr = bracketsMap.find(*strItr);
            if(parenthesesContainer.empty() or mapstrItrr==bracketsMap.end())
                return false;
            
            if(mapstrItrr->second != parenthesesContainer.top())
                return false;
            else
                parenthesesContainer.pop();    
        } 
    }
    return parenthesesContainer.empty();
}