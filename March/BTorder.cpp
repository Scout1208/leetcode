//
// Created by 李承彧 on 2023/3/16.
//

#include "BTorder.h"
#include <vector>
#include <unordered_map>
using namespace std;
TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &postorder) {
    unordered_map<int,int> index;
    for (int i = 0; i < inorder.size(); i++) {
        index[inorder[i]] = i;
    }
    returnn constructSub(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,index);
}
TreeNode* Solution::constructSub(vector<int>& inorder,int inorderStart,int inorderEnd,vector<int>& postorder,int postorderStart,int postorderEnd,unordered_map<int,int>& index){
    if(inorderStart > inorderEnd || postorderStart > postorderEnd)
    {
        return nullptr;
    }
    int rootVal = postorde[postorderEnd];
    TreeNode* root = new TreeNode(rootVal);
    int rootIndex = index[rootVal];
    int leftSubTreeSize = rootIndex - inorderStart;
    root->left = constructSub(inorder,inorderStart,rootIndex-1,postorder,postorderStart,postorderStart+leftSubTreeSize-1,index);
    root->right = constructSub(inorder,rootIndex+1,inorderEnd, postorder,postorderStart+leftSubTreeSize,postorderEnd-1,index);
}