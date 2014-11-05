#pragma once
#include "vector"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
	/**************************************************************************************************
	Given a linked list, determine if it has a cycle in it.

	Follow up:
	Can you solve it without using extra space?
	*********************************************************************************************************/
	/**
	* Definition for singly-linked list.
	* struct ListNode {
	*     int val;
	*     ListNode *next;
	*     ListNode(int x) : val(x), next(NULL) {}
	* };
	*/
public:
	bool hasCycle(ListNode *head) {
		if (head == nullptr)
		{
			return false;
		}
		ListNode* quick_pt = head->next;
		ListNode* slow_pt = head;
		while (quick_pt != slow_pt)
		{
			if (quick_pt != nullptr && quick_pt->next != nullptr)
			{
				if ((quick_pt->next)->next != nullptr)
				{
					quick_pt = (quick_pt->next)->next;
					slow_pt = quick_pt->next;
				}	
				else
				{
					return false;
				}
					
			}
			else
			{
				return false;
			}				
		}
		return true;
	}
};