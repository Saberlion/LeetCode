#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
	/************************************************************************************************
	There are two sorted arrays A and B of size m and n respectively.
	Find the median of the two sorted arrays. 
	The overall run time complexity should be O(log (m+n)).
	*************************************************************************************************/
	double findMedianSortedArrays(int A[], int m, int B[], int n) {
		vector<int>Arr;
		int* pB = B;
		int* pA = A;
		while (pA != A + m || pB != B + n)
		{
			if (pA == A + m)
			{
				Arr.push_back(*pB);
				pB++;
				continue;
			}
			if (pB == B + n)
			{
				Arr.push_back(*pA);
				pA++;
				continue;
			}
			if (*pA < *pB)
			{
				Arr.push_back(*pA);
				pA++;
			}
			else
			{
				Arr.push_back(*pB);
				pB++;
			}
		}
		//原题中没说明m+n为偶数时的处理情况，经测试为中间两个数字的均值
		if ((m + n) % 2 == 0)
		{
			return (Arr.at((m + n) / 2) + Arr.at((m + n) / 2 -1)) / (double)2;
		}
		else
		{
			return Arr.at((m + n) / 2);
		}
	}
};