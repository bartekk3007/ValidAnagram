#include <iostream>
#include <string>
#include <map>

class Solution
{
    public:
    bool isAnagram(std::string s, std::string t)
    {
        if (s.size() != t.size())
            return false;
        std::map<char, int> myMap;
        for (int i = 0; i < s.size(); i++)
            myMap[s[i]]++;
        for (int i = 0; i < t.size(); i++)
            myMap[t[i]]--;
        for (auto& it : myMap)
        {
            if (it.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};