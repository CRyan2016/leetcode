//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_226_INVERT_BINARY_TREE_H
#define LEETCODE_226_INVERT_BINARY_TREE_H

#include <cstdlib>
#include <stack>
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
	TreeNode *invertTree(TreeNode *root) {
		if(!root) return NULL;
		TreeNode *tmp = root->right;
		root->right = invertTree(root->left);
		root->left = invertTree(tmp);
		return root;

	}
};

#endif //LEETCODE_226_INVERT_BINARY_TREE_H
