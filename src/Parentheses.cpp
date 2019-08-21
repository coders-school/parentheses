#include "Parentheses.hpp"
#include <string>
#include <algorithm>

bool Parentheses::isBalanced(std::string s) {
    std::string brecketsClose =")]}";
    if (!s.empty() && s.size()>1)
    {
		while (s.size()>1 )
		{
            auto it = std::find_first_of(s.begin(), s.end(), brecketsClose.begin(), brecketsClose.end());
			if ( (s.size()>1 && static_cast<int>(*it) == static_cast<int>(*(it-1))+1) || (s.size()>1 &&(static_cast<int>(*it) == static_cast<int>(*(it-1))+2)) )
			{
				s.erase(it);
				s.erase(it-1);
			}
			else return false;	
		}
	}
	return s.empty();
}
