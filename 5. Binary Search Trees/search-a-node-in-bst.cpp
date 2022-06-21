#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

bool search(struct Node* root, int x) {
    
    if(root == NULL)
        return false;
    
    if(root->data == x)
        return true;
        
    if(x > root->data)
        return search(root->right, x);
        
    else
        return search(root->left, x);
}