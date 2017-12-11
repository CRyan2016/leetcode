//
// Created by cz on 2017/11/6.
//

#ifndef LEETCODE_671_SECOND_MINIMUM_NODE_IN_A_BINARY_TREE_H
#define LEETCODE_671_SECOND_MINIMUM_NODE_IN_A_BINARY_TREE_H

#include <cstdlib>
#include <stack>
#include <limits>

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
	int findSecondMinimumValue(TreeNode *root) {
		return minValue(root,root->val);
	}

private:
	int minValue(TreeNode *root, int first) {
		if (!root) return -1;
		if (root->val != first) return root->val;
		int left = minValue(root->left,first);
		int right = minValue(root->right,first);
		if(left == -1) return right;
		if(right == -1) return left;
		return min(left,right);
	}
};

#endif //LEETCODE_671_SECOND_MINIMUM_NODE_IN_A_BINARY_TREE_H
