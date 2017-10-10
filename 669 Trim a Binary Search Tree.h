//
// Created by cz on 2017/9/19.
//

#ifndef LEETCODE_669_TRIM_A_BINARY_SEARCH_TREE_H
#define LEETCODE_669_TRIM_A_BINARY_SEARCH_TREE_H

#include <cstdlib>

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode *trimBST(TreeNode *root, int L, int R) {
		if (root == NULL) return NULL;
		if (root->val < L) return trimBST(root->right, L, R);
		if (root->val > R) return trimBST(root->left, L, R);
		root->left = trimBST(root->left, L, R);
		root->right = trimBST(root->right, L, R);
		return root;
	}

//	TreeNode *trim(TreeNode *root, TreeNode *parent, int L, int R) {
//		if (!root) return NULL;
//		if (root->val < L) {
//			if (parent->left == root) {
//				return parent->left = trim(root->right, parent, L, R);
//			} else {
//				return parent->right = trim(root->right, parent, L, R);
//			}
//		}
//		if (root->val > R) {
//			if (parent->left == root) {
//				return parent->left = trim(root->left, parent, L, R);;
//			} else {
//				return parent->right = trim(root->left, parent, L, R);;
//			}
//		}
//		if (root->val >= L && root->val <= R) {
//			trim(root->left, root, L, R);
//			trim(root->right, root, L, R);
//			return root;
//		}
//	}
};

#endif //LEETCODE_669_TRIM_A_BINARY_SEARCH_TREE_H
