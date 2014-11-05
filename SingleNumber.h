#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
	/**************************************************************************************************
	Given an array of integers, every element appears twice except for one. Find that single one.

	Note:
	Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
	*********************************************************************************************************/
	int singleNumber(int A[], int n) {
		int i = 0;
		int Temp = 0;
		while (i < n)
		{
			Temp ^= A[i];
			i++;
		}
		return Temp;
	}
};