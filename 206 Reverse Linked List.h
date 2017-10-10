//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_206_REVERSE_LINKED_LIST_H
#define LEETCODE_206_REVERSE_LINKED_LIST_H

#include <cstdlib>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *reverseList(ListNode *head) {
		ListNode *pre = NULL;
		while (head) {
			ListNode *next = head->next;
			head->next = pre;
			pre = head;
			head = next;
		}
		return pre;
	}
};

#endif //LEETCODE_206_REVERSE_LINKED_LIST_H
