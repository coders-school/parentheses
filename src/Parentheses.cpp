#include "Parentheses.hpp"

bool Parentheses::isBalanced(std::string s) {
    if((s.size() % 2) != 0)	    
        return false;
    else if(s.front() == ')' or s.front() == ']' or s.front() == '}')
	return false;
    else
        return true;
}
