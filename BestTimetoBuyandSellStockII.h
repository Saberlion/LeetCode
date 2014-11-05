#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
	/**************************************************************************************************
	Say you have an array for which the ith element is the price of a given stock on day i.

	Design an algorithm to find the maximum profit.
	You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times).
	However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
	*********************************************************************************************************/
public:
	int maxProfit(vector<int> &prices) {
		int res = 0;
		if (prices.size() < 2)
		{
			return res;
		}
		for (auto pt = prices.cbegin(); (pt != prices.cend() - 1); pt++)
		{
			int incre = *(pt + 1) - *pt;
			incre = (incre > 0) ? incre : 0;
			res += incre;
		}
		return res;
	}
};