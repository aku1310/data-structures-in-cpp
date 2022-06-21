#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

int minValue(Node* root) {
    if(root == NULL)
        return -1;
    if(root->left)
        return minValue(root->left);
    else
        return root->data;
}