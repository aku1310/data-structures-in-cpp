#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

static TreeNode* inp(TreeNode *root){
    TreeNode *p = root->right;
    while(p->left){
        p = p->left;
    }
    return p;
} 

TreeNode* deleteNode(TreeNode* root, int key) {
    if(root == NULL)
        return NULL;
    if(key > root->val)
        root->right = deleteNode(root->right, key);
    
    else if(key < root->val)
        root->left = deleteNode(root->left, key);
    
    else{
        if(root->right == NULL){
            TreeNode* t = root->left;
            delete(root);
            return t;
        }
        
        else if(root->left == NULL){
            TreeNode* t = root->right;
            delete(root);
            return t;
        }
        
        else{
            TreeNode* t = inp(root);
            swap(root->val, t->val);
            root->right = deleteNode(root->right, key);
        }
    }
    
    return root;
}