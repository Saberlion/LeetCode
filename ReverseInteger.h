#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
	/**************************************************************************************************
	Reverse digits of an integer.

	Example1: x = 123, return 321
	Example2: x = -123, return -321
	*********************************************************************************************************/
public:
	int reverse(int x) {
		int res = 0;
		while (x)
		{
			res = res * 10 + x % 10;
			x /= 10;
		}
		return res;
	}
};