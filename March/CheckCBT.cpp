//
// Created by 李承彧 on 2023/3/15.
//

#include "CheckCBT.h"
#include <vector>
using namespace std;
bool Solution::isCompleteTree(TreeNode *root) {
    vector<TreeNode*> q;
    q.push_back(root);
    return  BFS(q);
}
bool Solution::BFS(vector<TreeNode*> &q){
    while(!q.empty())
    {
        TreeNode* temp = q.back();
        q.pop_back();
        if(!isOK(temp)){
            return false;
        }
        if(temp->left){
            q.push_back(temp->left);
        }
        if(temp->right){
            q.push_back(temp->right);
        }
    }
    return true;
}