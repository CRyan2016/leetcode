//
// Created by cz on 2017/9/18.
//

#ifndef LEETCODE_617_MERGE_TWO_BINARY_TREES_H
#define LEETCODE_617_MERGE_TWO_BINARY_TREES_H

#include <stack>
#include <cstdlib>

using namespace std;


// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2) {
		if (!t1) return t2;
		if (!t2) return t1;

		TreeNode *node = new TreeNode(t1->val + t2->val);
		node->left = mergeTrees(t1->left, t2->left);
		node->right = mergeTrees(t1->right, t2->right);
		return node;
	}

	TreeNode *mergeTrees_02(TreeNode *t1, TreeNode *t2) {
		if (!t1) return t2;
		if (!t2) return t1;
		std::stack<TreeNode *> stk1;
		std::stack<TreeNode *> stk2;
		stk1.push(t1);
		stk2.push(t2);
		TreeNode *root = new TreeNode(t1->val + t2->val);
		std::stack<TreeNode*> stk3;
		stk3.push(root);
		TreeNode *node = NULL;
		while (!stk1.empty()) {
			auto node1 = stk1.top();
			stk1.pop();
			auto node2 = stk2.top();
			stk2.pop();
			node = stk3.top();
			stk3.pop();
			if (!node1->left) {
				node->left = node2->left;
			} else if (!node2->left) {
				node->left = node1->left;
			} else {
				node->left = new TreeNode(node1->left->val + node2->left->val);
				stk1.push(node1->left);
				stk2.push(node2->left);
				stk3.push(node->left);
			}
			if (!node1->right) {
				node->right = node2->right;
			} else if (!node2->right) {
				node->right = node1->right;
			} else {
				node->right = new TreeNode(node1->right->val + node2->right->val);
				stk1.push(node1->right);
				stk2.push(node2->right);
				stk3.push(node->right);
			}
		}
		return root;
	}
};

#endif //LEETCODE_617_MERGE_TWO_BINARY_TREES_H
