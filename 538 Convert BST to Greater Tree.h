//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_538_CONVERT_BST_TO_GREATER_TREE_H
#define LEETCODE_538_CONVERT_BST_TO_GREATER_TREE_H

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
	TreeNode *convertBST(TreeNode *root) {
		int sum = 0;
		int *ptr = &sum;
		inorderBack(root, ptr);
		return root;
	}

	void inorderBack(TreeNode *root, int* sum) {
		if (!root) return;
		if (root->right) inorderBack(root->right, sum);
		root->val = *sum += root->val;
		if (root->left) inorderBack(root->left, sum);
	}
};

#endif //LEETCODE_538_CONVERT_BST_TO_GREATER_TREE_H
