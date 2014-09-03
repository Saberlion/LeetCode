#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

/************************************************************************************************
You are given two linked lists representing two non - negative numbers.
The digits are stored in reverse order and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output : 7 -> 0 -> 8
*************************************************************************************************/

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode* pL1 = l1;
		ListNode* pL2 = l2;
		ListNode dummy(-1);
		ListNode* pRes = &dummy;
		int carry = 0;

		while (pL1 != nullptr || pL2 != nullptr || carry != 0)
		{
			int val_l1 = 0;
			int val_l2 = 0;
			if (pL1 != nullptr)
			{
				val_l1 = pL1->val;
			}
			if (pL2 != nullptr)
			{
				val_l2 = pL2->val;
			}
			int val_t = (val_l1 + val_l2 + carry);
			int res_val = val_t % 10;
			carry = val_t / 10;
			pRes->next = new ListNode(res_val);
			pRes = pRes->next;
			pL1 = pL1 == nullptr ? nullptr : pL1->next;
			pL2 = pL2 == nullptr ? nullptr : pL2->next;
			
		}
		return dummy.next;
	}
};