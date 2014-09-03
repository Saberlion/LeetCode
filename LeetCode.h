#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
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