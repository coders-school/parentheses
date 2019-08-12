#include "Parentheses.hpp"

bool Parentheses::isBalanced(std::string s) {
    if((s.size() % 2) != 0)
        return false;
    else
        return true;
}