//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_100_SAME_TREE_H
#define LEETCODE_100_SAME_TREE_H

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
	bool isSameTree(TreeNode *p, TreeNode *q) {
		if (!p && !q) return true;
		if ((p && !q) || (!p && q)) return false;
		return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
};

#endif //LEETCODE_100_SAME_TREE_H
