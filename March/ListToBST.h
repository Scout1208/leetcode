//
// Created by 李承彧 on 2023/3/11.
//

#ifndef LEETCODE_LISTTOBST_H
#define LEETCODE_LISTTOBST_H
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode* next):val(x),next(next){}
};
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
        TreeNode* sortListToBST(ListNode* head);
        ListNode* findMidddle(ListNode* head);
};


#endif //LEETCODE_LISTTOBST_H
