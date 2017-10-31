//
// Created by cz on 2017/10/11.
//

#ifndef LEETCODE_543_DIAMETER_OF_BINARY_TREE_H
#define LEETCODE_543_DIAMETER_OF_BINARY_TREE_H

#include <cstdlib>
#include <algorithm>

using namespace std;

//  Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int diameterOfBinaryTree(TreeNode *root) {
		if (!root) return 0;
		int res = depth(root->left) + depth(root->right);
		return max(res, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
	}

	int depth(TreeNode *root) {
		if (!root) return 0;
		return 1 + max(depth(root->left), depth(root->right));
	}
};

#endif //LEETCODE_543_DIAMETER_OF_BINARY_TREE_H
