#include "Parentheses.hpp"
#include <stack>
#include <vector>
#include <algorithm>

bool Parentheses::isBalanced(std::string s) {
    
	std::stack < char > myStack;
   
    for(auto it = s.begin();it!=s.end();it++)
    {
		if(myStack.empty())
		{
			myStack.push(*it);
			continue;
		}
		else if(myStack.top()=='(')
		{
			if((*it)!=')') 
			{
				myStack.push(*it);
			}else
			{
				myStack.pop();
			}
		}
		else if(myStack.top()=='[')
		{
			if((*it)!=']') 
			{
				myStack.push(*it);
			}else
			{
				myStack.pop();
			}
		}
		else if(myStack.top()=='{')
		{
			if((*it)!='}') 
			{
				myStack.push(*it);
			}
			else
			{
				myStack.pop();
			}
		}
	}
	if(myStack.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
