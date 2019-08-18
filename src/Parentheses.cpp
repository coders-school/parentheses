#include "Parentheses.hpp"
#include <stack>
#include <map>
#include <algorithm>
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

        auto prediction = [&strItrd](const auto element){ return element.second == strItrd;};

        if(std::find_if(bracketsMap.begin(), bracketsMap.end(), prediction) != bracketsMap.end())
        {
            if(brackets.empty() or strItrd != bracketsMap[brackets.top()]) {
                return false;
            }

            brackets.pop();
        }

        
        
    }
    return brackets.empty();
}