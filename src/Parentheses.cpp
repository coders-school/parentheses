#include "Parentheses.hpp"
#include <stack>
#include <vector>
#include <algorithm>

bool Parentheses::isBalanced(std::string s) {
   //all codes as comments except one

	//NG
	//code
	
	//Marcin Bury
	//code

	//piotr.kowandy - not finished but all 6 tests passed
	if (!s.empty())
	{
		std::vector<char> bracketsOpen;
		bracketsOpen.push_back('(');
		bracketsOpen.push_back('[');
		bracketsOpen.push_back('{');

		std::vector<char> bracketsClose;
    	bracketsClose.push_back(')');
    	bracketsClose.push_back(']');
    	bracketsClose.push_back('}');


		for(auto& el : s)
		{
			if (el != *(std::find(bracketsClose.begin(), bracketsClose.end(), el)))
			{
				return true;
			}
			else
			{
				return false;
			}		

		}
	}
	else
	{
		return true;
	}

	//RyszardH
	/*
   std::stack < char > myStack;
   
   for(auto it = s.begin();it!=s.end();it++)
   {
      if(myStack.empty()==true)
      {
         myStack.push(*it);
         continue;
      } else if(myStack.top()=='(')
      {
         if((*it)!=')') 
         {
            myStack.push(*it);
         }else
         {
            myStack.pop();
         }
      }else if(myStack.top()=='[')
      {
          if((*it)!=']') 
         {
            myStack.push(*it);
         }else
         {
            myStack.pop();
         }
      }else if(myStack.top()=='{')
      {
         if((*it)!='}') 
         {
            myStack.push(*it);
         }else
         {
            myStack.pop();
         }
      };
   };
   if(myStack.empty()) return true;
   else return false;
	*/
   
}
