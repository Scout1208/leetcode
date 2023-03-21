//
// Created by 李承彧 on 2023/3/9.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x),next(nullptr){}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*temp = head;
        unordered_map<ListNode*,int> visited;
        while (temp!= nullptr)
        {
            if(visited.find(temp)!= visited.end()){
                return temp;
            }
            visited[temp] = 1;
            temp = temp->next;
        }
        return nullptr;
    }
};
int main(){
    vector<int> val = {3,0,4,-2};
    ListNode *head;
    head = new ListNode(3);
    ListNode* current;
    current = head;
    for (int i = 1; i < val.size(); i++) {
        current->next = new ListNode(val[i]);
        current = current->next;
    }
    current = head;
    while (current!= nullptr) {
        cout<<current->val<<endl;
        current = current->next;
    }
}