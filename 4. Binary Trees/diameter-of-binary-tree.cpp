#include <bits/stdc++.h>
using namespace std;

int m = 0;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int fun(Node* node){
    if(!node) 
        return 0;
    int x = fun(node->left);
    int y = fun(node->right);
    
    m = max(m, x + y + 1);
    return (max(x, y) + 1);
}

int diameter(Node* root) {
    fun(root);
    return m;
}