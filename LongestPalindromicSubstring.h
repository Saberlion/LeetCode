#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
	/************************************************************************************************
	Given a string S, find the longest palindromic substring in S.
	You may assume that the maximum length of S is 1000,
	and there exists one unique longest palindromic substring.
	*************************************************************************************************/
	string longestPalindrome(string s) {
		int s_length = s.size();
		string str;
		str.reserve(2 * s_length - 1);
		for (size_t i = 0; i < s.size(); i++)
		{
			str.push_back(s.at(i));
			str.push_back('#');
		}
		for (auto iter = s.begin()+1; iter != s.end()-1; iter++)
		{

		}

	}
};