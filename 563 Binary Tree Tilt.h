//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_563_BINARY_TREE_TILT_H
#define LEETCODE_563_BINARY_TREE_TILT_H

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
	int findTilt(TreeNode *root) {
		if (!root) return 0;
		int sum = 0;
		int *ptr = &sum;
		travel(root, ptr);
		return sum;
	}

	int travel(TreeNode *root, int *sum) {
		if (!root) return 0;
		int left = travel(root->left, sum);
		int right = travel(root->right, sum);
		*sum += abs(left - right);
		return left + right + root->val;
	}
};

#endif //LEETCODE_563_BINARY_TREE_TILT_H
