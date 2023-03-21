//
// Created by 李承彧 on 2023/3/14.
//

#ifndef LEETCODE_SUMROOTTOLEAF_H
#define LEETCODE_SUMROOTTOLEAF_H
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(nullptr),right(nullptr){}
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
    TreeNode(int x,TreeNode* left,TreeNode right):val(x),left(left),right(right){}
};

class Solution {
    int sumNumbers(TreeNode* root) ;
    int DFS(TreeNode *root);
    int sum(vector<int>& stack);
};


#endif //LEETCODE_SUMROOTTOLEAF_H
