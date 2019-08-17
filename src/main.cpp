#include <iostream>
#include "../inc/Parentheses.hpp"

int main()
{
    std::cout << "Parentheses" << std::endl;
    std::cout << "Insert paratheses string: " << std::endl;
    std::string inp;
    std::cin >> inp;
    Parentheses p;
    if (p.isBalanced(inp) == true){std::cout << "Parantheses string is balanced \n";}
    else std::cout << "Parantheses string is NOT balanced" << std::endl;
    return 0;
}
