//
// Created by cz on 17-7-25.
//

#ifndef ALGORITHRMS_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H
#define ALGORITHRMS_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H

#include <vector>
#include <stack>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        if (preorder.size() < 1 || inorder.size() < 1) return nullptr;
        vector<int> _preorder(preorder.rbegin(), preorder.rend());
        vector<int> _inorder(inorder.rbegin(), inorder.rend());
        stack<TreeNode *> stn;
        TreeNode *p, *root;
        root = new TreeNode(_preorder.back());
        _preorder.pop_back();
        stn.push(root);
        while (true) {
            if (_inorder.back() == stn.top()->val) {
                p = stn.top();
                stn.pop();
                _inorder.pop_back();
                if (_inorder.size() == 0) break;
                if(stn.size() && _inorder.back()==stn.top()->val) continue;
                // 没有左子树时stn.size==0,这里是到达根节点，处理根的右子树
                p->right = new TreeNode(_preorder.back());
                _preorder.pop_back();
                stn.push(p->right);

            } else {
                p = new TreeNode(_preorder.back());
                _preorder.pop_back();
                stn.top()->left = p;
                stn.push(p);
            }
        }
        return root;
    }
};

#endif //ALGORITHRMS_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H
