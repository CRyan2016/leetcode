//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_653_TWO_SUM_IV_INPUT_IS_A_BST_H
#define LEETCODE_653_TWO_SUM_IV_INPUT_IS_A_BST_H

#include <cstdlib>
#include <vector>

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
	bool findTarget(TreeNode *root, int k) {
		vector<int> vec;
		inorder(root, vec);
		int l = 0, r = vec.size() - 1;
		while (l < r) {
			int sum = vec[l] + vec[r];
			if (sum == k) return true;
			if (sum < k) l++;
			else r--;
		}
		return false;
	}

	void inorder(TreeNode *root, vector<int> &vec) {
		if (!root) return;
		if (root->left) inorder(root->left, vec);
		vec.push_back(root->val);
		if (root->right) inorder(root->right, vec);
	}
};

#endif //LEETCODE_653_TWO_SUM_IV_INPUT_IS_A_BST_H
