//
// Created by 李承彧 on 2023/3/16.
//

#ifndef LEETCODE_BTORDER_H
#define LEETCODE_BTORDER_H
#include<unordered_map>
using namespace std;
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
    TreeNode* constructSub(vector<int>& inorder,int inorderStart,int inorderEnd,vector<int>& postorder,int postorderStart,int postorderEnd,unordered_map<int,int>& index);
};


#endif //LEETCODE_BTORDER_H
