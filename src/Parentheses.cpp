#include "Parentheses.hpp"

bool Parentheses::isBalanced(std::string s) {
    int nawias=0, kwadratowy=0, klamra=0;
    for(auto it=s.begin(); it!=s.end(); ++it)
    {
        if(*it == '(') ++nawias;
        if(*it == '[') ++kwadratowy;
        if(*it == '{') ++klamra;
        if(*it == ')') --nawias;
        if(*it == ']') --kwadratowy;
        if(*it == '}') --klamra;

        if(nawias<0 || klamra<0 || kwadratowy<0) return false;
    }

    if(nawias==0 && kwadratowy==0 && klamra==0) return true;
    else return false;   
    
    // auto pos1 = s.find('(');
    // auto pos2 = s.find(')');

    // if(s.size()%2==0 or s.empty())
    // {
    //     if(s[++pos1] !=')') {
    //         return false;
    //     } 

    //     return true;
    // } 
    // else {
    //     return false;
    // } ;

    
    // if (s.empty()) return true;
    // bool open = s.find('(') != std::string::npos;
    // bool close = s.find(')') != std::string::npos;
    // return open && close;
}