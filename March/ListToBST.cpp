//
// Created by 李承彧 on 2023/3/11.
//
//approach
/*1.find the middle od the input linked-list,
 * use two pointers of different speed to complete
 *In 3 condition:
 * -No node
 * -only one node
 * -many nodes
 *2.construct Tree root node with the middle node of
 * input linked-list, and recursively construct left
 * and right subtrees from head to middle and from
 * middle->next to end
 *Stop condition:
 * -when fast pointer reach the end, so fast and fast->next
 * should be nullptr
 */
#include "ListToBST.h"
#include <iostream>
TreeNode* Solution::sortedListToBST(ListNode *head) {
    if(!head){
        return nullptr;
    }
    ListNode* middle = findMidddle(head);
    TreeNode* root = new TreeNode(middle->val);
    if(middle == head){
        return root;
    }
    root->left = sortedListToBST(head);
    root->right = sortedListToBST(middle->next);
    return root;
}
ListNode* Solution::findMidddle(ListNode *head) {
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* root;
    while(fast && fast->next){
        root = slow;
        fast = fast->next->next;
        slow = slow->next;
    }
    if(root)
    {
        root->next = nullptr;
    }
    return slow;
}