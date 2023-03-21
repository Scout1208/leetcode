//
// Created by 李承彧 on 2023/3/10.
//
#include <iostream>
#ifndef LEETCODE_RANDOMNODE_H
#define LEETCODE_RANDOMNODE_H

struct ListNode{
    int val;
    ListNode *next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x,ListNode*next):val(x),next(next){}
};
class Solution {
    public:
        Solution(ListNode* head){}
        int getRandom();
};


#endif //LEETCODE_RANDOMNODE_H
