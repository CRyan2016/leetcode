//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_404_SUM_OF_LEFT_LEAVES_H
#define LEETCODE_404_SUM_OF_LEFT_LEAVES_H

#include <cstdlib>
#include <queue>
#include <utility>

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
	int sumOfLeftLeaves(TreeNode *root) {
		if (!root || (!root->right && !root->left)) return 0;
		queue<pair<TreeNode *, bool >> qu;
		qu.push(pair<TreeNode *, bool>(root, false));
		int sum = 0;
		pair<TreeNode *, bool> node;
		while (!qu.empty()) {
			node.first = qu.front().first;
			node.second = qu.front().second;
			qu.pop();
			if (node.second && !node.first->left && !node.first->right) {
				sum += node.first->val;
				continue;
			}
			if (node.first->left) qu.push(pair<TreeNode *, bool>(node.first->left, true));
			if (node.first->right) qu.push(pair<TreeNode *, bool>(node.first->right, false));
		}
		return sum;
	}
};

#endif //LEETCODE_404_SUM_OF_LEFT_LEAVES_H
