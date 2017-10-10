//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_637_AVERAGE_OF_LEVELS_IN_BINARY_TREE_H
#define LEETCODE_637_AVERAGE_OF_LEVELS_IN_BINARY_TREE_H

#include <vector>
#include <cstdlib>
#include <queue>

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
	vector<double> averageOfLevels(TreeNode *root) {
		vector<double> vec;
		if (!root) return vec;
		queue<TreeNode *> que;
		que.push(root);
		while (!que.empty()) {
			double sum = 0.;
			int len = que.size();
			TreeNode *node;
			for (int i = 0; i < len; ++i) {
				node = que.front();
				que.pop();
				sum += node->val;
				if (node->left) que.push(node->left);
				if (node->right) que.push(node->right);
			}
			vec.push_back(sum / len);
		}
		return vec;
	}
};

#endif //LEETCODE_637_AVERAGE_OF_LEVELS_IN_BINARY_TREE_H
