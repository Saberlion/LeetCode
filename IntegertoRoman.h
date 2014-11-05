#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
	/************************************************************************************************
	Given an integer, convert it to a roman numeral.

	Input is guaranteed to be within the range from 1 to 3999.
	*****************************************************************************************************/
	string getStrByNum(int wei, int num)
	{
		string res;
		string c[3] = {};
		switch (wei)
		{
		case 0:
			c[0] = "I";
			c[1] = "V";
			c[2] = "X";
			break;
		case 1:
			c[0] = "X";
			c[1] = "L";
			c[2] = "C";
			break;
		case 2:
			c[0] = "C";
			c[1] = "D";
			c[2] = "M";
			break;
		case 3:
			c[0] = "M";
			c[1] = "V";
			c[2] = "X";
			break;
		default:
			break;
		}
		switch (num)
		{
		case 1:
			res += c[0];
			break;
		case 2:
			res += c[0] + c[0];
			break;
		case 3:
			res += c[0] + c[0] + c[0];
			break;
		case 4:
			res += c[0] + c[1];
			break;
		case 5:
			res += c[1];
			break;
		case 6:
			res += c[1] + c[0];
			break;
		case 7:
			res += c[1] + c[0] + c[0];
			break;
		case 8:
			res += c[1] + c[0] + c[0] + c[0];
			break;
		case 9:
			res += c[0] + c[2];
			break;
		}
		return res;
	}
	string intToRoman(int num) {
		string res;
		int digis[4] = { 0 };
		for (int i = 0; i < 4;++i)
		{
			int temp = num % 10;
			digis[i] = temp;
			num /= 10;
		}

		for (int i = 3; i >= 0; --i)
		{
			res += getStrByNum(i, digis[i]);
		}
		return res;
	}
};