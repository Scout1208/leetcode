//
// Created by 李承彧 on 2023/3/13.
//

#ifndef LEETCODE_SYMMERTICTREE_H
#define LEETCODE_SYMMERTICTREE_H

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode* left,TreeNode* right):val(x),left(left),right(right){}
};
class Solution {
public:
    bool isSymmertic(TreeNode* root);
    bool isMirror(TreeNode* root);
};


#endif //LEETCODE_SYMMERTICTREE_H
