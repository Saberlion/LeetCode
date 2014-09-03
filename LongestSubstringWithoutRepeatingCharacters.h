#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
	/************************************************************************************************
	Given a string, find the length of the longest substring without repeating characters.
	For example, the longest substring without repeating letters for "abcabcbb" is "abc", 
	which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.

	*************************************************************************************************/
	int lengthOfLongestSubstring(string s) {
		string str;
		size_t maxLength = 0;
		auto iter = s.begin();
		while (iter != s.end())
		{
			size_t length = 0;			
			auto finder = find(str.begin(), str.end(), *iter);			
			if (finder != str.end() )
			{
				length = 0;
				str.erase(str.begin(), finder + 1);
				str.push_back(*iter);
			}
			else
			{
				str.push_back(*iter);
				length = str.size();
				if (maxLength < length)
				{
					maxLength = length;
				}
			}						
			iter++;
		}
		return maxLength;
	}
};