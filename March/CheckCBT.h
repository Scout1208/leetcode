//
// Created by 李承彧 on 2023/3/15.
//

#ifndef LEETCODE_CHECKCBT_H
#define LEETCODE_CHECKCBT_H
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode* left,TreeNode* right):val(x),left(left),right(right){}
};

class Solution {
    bool isCompleteTree(TreeNode* root);
};


#endif //LEETCODE_CHECKCBT_H
