#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val,TreeNode* left=NULL, TreeNode* right=NULL){
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

//Time Complexity : O(n)
int getSum(TreeNode* root,int& ans){
    if(root==NULL) return 0;
    int maxL = getSum(root->left,ans);
    int maxR = getSum(root->right,ans);
    maxL = max(maxL,0);
    maxR = max(maxR,0);
    ans = max(ans,root->val + maxL+maxR);
    return root->val + max(maxL,maxR);
}

int getMaximumPathSum(TreeNode* root) {
    int ans = INT_MIN;
    int temp = getSum(root,ans);
    return max(ans,temp);
}

int main(){
  
    return 0;
}