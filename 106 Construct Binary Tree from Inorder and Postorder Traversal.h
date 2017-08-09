//
// Created by cz on 17-7-24.
//

#ifndef ALGORITHRMS_106_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H
#define ALGORITHRMS_106_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H

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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        int n = inorder.size();
        if (n == 0) return nullptr;
        stack<TreeNode *> stn;
        TreeNode *p, *root;
        root = new TreeNode(postorder.back());
        stn.push(root);
        postorder.pop_back();
        while (true) {
            if (inorder.back() == stn.top()->val) {
                p = stn.top();
                stn.pop();
                inorder.pop_back();
                if (inorder.size() == 0)break;
                if (stn.size() && inorder.back() == stn.top()->val) continue;
                // 没有右子树时stn.size==0,这里是到达根节点，处理根的左子树
                p->left = new TreeNode(postorder.back());
                postorder.pop_back();
                stn.push(p->left);
            } else {
                p = new TreeNode(postorder.back());
                postorder.pop_back();
                stn.top()->right = p;
                stn.push(p);
            }
        }
        return root;
    }
};

#endif //ALGORITHRMS_106_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H
