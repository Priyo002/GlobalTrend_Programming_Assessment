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


string serialize(TreeNode* root) {
    if(root == nullptr) return "#";
    string s = "";
    queue<TreeNode*> qu;
    qu.push(root); 
    while(!qu.empty()){
        TreeNode* node = qu.front();
        qu.pop();
        if(node){
            s += to_string(node->val) + ",";
            qu.push(node->left);
            qu.push(node->right);
        } 
        else{
            s += "#,";
        }
    }
    return s;
}

TreeNode* deserialize(string data) {
    if(data == "#") return NULL;

    stringstream ss(data);
    string item;
    getline(ss, item, ',');

    TreeNode* root = new TreeNode(stoi(item));
    queue<TreeNode*> qu;

    qu.push(root);

    while(!qu.empty()) {
        TreeNode* node = qu.front();
        qu.pop();

        if (getline(ss, item, ',')) {
            if (item != "#") {
                TreeNode* leftNode = new TreeNode(stoi(item));
                node->left = leftNode;
                qu.push(leftNode);
            }
        }

        if (getline(ss, item, ',')) {
            if (item != "#" && item.size()) {
                TreeNode* rightNode = new TreeNode(stoi(item));
                node->right = rightNode;
                qu.push(rightNode);
            }
        }
    }
    return root;
}

int main(){
  
    return 0;
}