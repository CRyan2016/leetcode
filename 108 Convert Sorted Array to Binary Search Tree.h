//
// Created by cz on 2017/11/6.
//

#ifndef LEETCODE_108_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H
#define LEETCODE_108_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H

#include <cstdlib>
#include <vector>

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
	TreeNode *sortedArrayToBST(vector<int> &nums) {
		return sortedArrayToBST(nums, 0, nums.size());
	}

	TreeNode *sortedArrayToBST(vector<int> &nums, int start, int end) {
		if (end <= start) return NULL;
		int mid = (start + end) / 2;
		TreeNode *root = new TreeNode(nums[mid]);
		root->left = sortedArrayToBST(nums, start, mid);
		root->right = sortedArrayToBST(nums, mid + 1, end);
		return root;
	}
};

#endif //LEETCODE_108_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H
