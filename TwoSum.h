﻿#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
	/************************************************************************************************
	Given an array of integers, find two numbers such that they add up to a specific target number.
	The function twoSum should return indices of the two numbers such that they add up to the target, 
	where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
	You may assume that each input would have exactly one solution.

	Input: numbers={2, 7, 11, 15}, target=9
	Output: index1=1, index2=2
	*****************************************************************************************************/
	vector<int> twoSum(vector<int> &numbers, int target) {
		unordered_map<int, int> mapping;
		vector<int> res;
		for (int i = 0; i < numbers.size(); i++) {
			mapping[numbers[i]] = i;
		}
		for (int i = 0; i < numbers.size(); i++) {
			const int gap = target - numbers[i];
			if (mapping.find(gap) != mapping.end() && mapping[gap] > i) {
				res.push_back(i + 1);
				res.push_back(mapping[gap] + 1);
				break;
			}
		}
		return res;
	}
};
