//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_104_MAXIMUM_DEPTH_OF_BINARY_TREE_H
#define LEETCODE_104_MAXIMUM_DEPTH_OF_BINARY_TREE_H

#include <cstdlib>
#include <stack>
#include <algorithm>

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
	int maxDepth(TreeNode *root) {
		if (!root) return 0;
		return 1 + max(maxDepth(root->left), maxDepth(root->right));
	}

//	int maxDepth02(TreeNode *root) {
//		if (!root) return 0;
//		stack<TreeNode *> stk;
//		stk.push(root);
//		int max = 1;
//		TreeNode *node;
//		while (!stk.empty()) {
//			while (true) {
//				node = stk.top();
//				if (!node->left) {
//					if (stk.size() > max) max = stk.size();
//					break;
//				}
//				stk.push(node->left);
//			}
//			node = stk.top();
//			if (node->right) {
//				stk.push(node->right);
//			} else {
//				while (!stk.empty()) {
//					node = stk.top();
//					if (!node->right) stk.pop();
//					else {
//						stk.push(node->right);
//						break;
//					}
//				}
//			}
//		}
//		return max;
//	}
};

#endif //LEETCODE_104_MAXIMUM_DEPTH_OF_BINARY_TREE_H
