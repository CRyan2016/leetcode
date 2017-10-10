//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_237_DELETE_NODE_IN_A_LINKED_LIST_H
#define LEETCODE_237_DELETE_NODE_IN_A_LINKED_LIST_H

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
	void deleteNode(ListNode *node) {
		ListNode *tmp = node->next;
		*node = *tmp;
		delete tmp;
		tmp = NULL;
	}
};

#endif //LEETCODE_237_DELETE_NODE_IN_A_LINKED_LIST_H
