//
// Created by 李承彧 on 2023/3/12.
//

#ifndef LEETCODE_MERGEKLIST_H
#define LEETCODE_MERGEKLIST_H
struct ListNode{
    int val;
    ListNode* next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode* next):val(x),next(next){}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists);
};


#endif //LEETCODE_MERGEKLIST_H
