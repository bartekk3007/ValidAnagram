#include <iostream>
#include <string>
#include "Solution.hpp"

int main()
{
	std::string s1 = "rat";
	std::string t1 = "car";

	Solution s;
	std::cout << std::boolalpha << s.isAnagram(s1, t1);

	return 0;
}