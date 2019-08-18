#include "Parentheses.hpp"
#include <stack>
#include <map>
#include <iostream>

bool Parentheses::isBalanced(std::string stringInput) {
    std::map<char, char> bracketsMap =
    {
        {'(', ')'},
        {'[', ']'},
        {'{', '}'},
    };
    
    std::stack<char> brackets;
    for(auto strItr=stringInput.begin(); strItr!=stringInput.end(); ++strItr)
    {
        auto strItrd = *strItr;
        auto mapItr = bracketsMap.find(strItrd);

        if(mapItr != bracketsMap.end()) {
            brackets.push(strItrd);
            continue;
        }

        if(brackets.empty() or strItrd != bracketsMap[brackets.top()]) {
            return false;
        }

        brackets.pop();
        
    }
    return brackets.empty();
}