//
// Created by 李承彧 on 2023/3/14.
//

#include "SumRootToLeaf.h"
#include <vector>
using namespace std;
vector<int> stack;
int Solution::sumNumbers(TreeNode *root) {
    vector<int> stack;
    int result = 0;
    result += DFS(root,stack);
}
int Solution::DFS(TreeNode *root,vector<int> &stack) {
    if(root){
        stack.push_back(root.val);
    }
    if(root->left){
        DFS(root->left,stack);
    }
    if(root->right){
        DFS(root->right,stack);
    }
    return sum(stack);
}
int Solution::sum(vector<int>& stack){
    int sum = 0;
    int n = stack.size();
    for (int i = 0; i < ; i++) {
        sum += stack[i]*(10**(n-i));
    }
    return sum;
}