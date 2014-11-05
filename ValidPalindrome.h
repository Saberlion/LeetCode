#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
	/************************************************************************************************
	Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

	For example,
	"A man, a plan, a canal: Panama" is a palindrome.
	"race a car" is not a palindrome.

	Note:
	Have you consider that the string might be empty? This is a good question to ask during an interview.

	For the purpose of this problem, we define empty string as valid palindrome.
	*****************************************************************************************************/
	bool isPalindrome(string s) {
		auto pt1 = s.cbegin();
		auto pt2 = s.cend() - 1;
		while (pt1 <= pt2)
		{
			if (!isalpha(*pt1) && !isdigit(*pt1))
			{
				pt1++;
				continue;
			}
			if (!isalpha(*pt2) && !isdigit(*pt2))
			{
				pt2--;
				continue;
			}
			if (tolower(*pt1) != tolower(*pt2))
			{
				return false;
			}
			pt1++;
			pt2--;
		}
		return true;

	}
};