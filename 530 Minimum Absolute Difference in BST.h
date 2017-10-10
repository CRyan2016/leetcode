//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_530_MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_H
#define LEETCODE_530_MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_H

#include <cstdlib>
#include <limits>
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
private:
	int minMD = numeric_limits<int>().max(), val = -1;
public:
	int getMinimumDifference(TreeNode *root) {
		if (root->left) getMinimumDifference(root->left);
		if (val >= 0) minMD = min<int>(minMD, root->val - val);
		val = root->val;
		if (root->right) getMinimumDifference(root->right);
		return minMD;
	}
};

#endif //LEETCODE_530_MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_H
