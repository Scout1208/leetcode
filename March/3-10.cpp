//
// Created by 李承彧 on 2023/3/10.
//
#include <iostream>
#include <vector>
#include "RandomNode.h"
using namespace std;

int main(){
    vector<int> value{1,2,3};
    ListNode *head = new ListNode(1, nullptr);
    ListNode *current = head;
    for (int i = 1; i < 3; i++) {
        current->next = new ListNode(value[i], nullptr);
        current = current->next;
    }
    Solution* obj = new Solution(head);
    int param_1 = obj->getRandom();
}