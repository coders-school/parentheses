#include "Parentheses.hpp"

bool Parentheses::isBalanced(std::string s) {
    if(s.size()%2==0 or s.empty()) return true;
    else false;
    
    // if (s.empty()) return true;
    // bool open = s.find('(') != std::string::npos;
    // bool close = s.find(')') != std::string::npos;
    // return open && close;
}