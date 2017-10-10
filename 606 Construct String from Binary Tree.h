//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_606_CONSTRUCT_STRING_FROM_BINARY_TREE_H
#define LEETCODE_606_CONSTRUCT_STRING_FROM_BINARY_TREE_H

#include <string>
#include <vector>
#include <limits>
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
	string tree2str(TreeNode *t) {
		return preorder(t);
	}

	string preorder(TreeNode *root) {
		if (!root) return "";
		if (!root->left && !root->right)
			return to_string(root->val);
		if (!root->right)
			return to_string(root->val) + "(" + preorder(root->left) + ")";
		return to_string(root->val) + "(" + preorder(root->left) + ")" + "(" + preorder(root->right) + ")";
	}
};

#endif //LEETCODE_606_CONSTRUCT_STRING_FROM_BINARY_TREE_H
