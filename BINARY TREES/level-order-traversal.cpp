#include <bits/stdc++.h>
using namespace std;

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

vector<int> levelOrder(Node* node)
{
    vector<int> ans;
    if(!node) 
    return ans;
    
    queue<Node*> que;
    que.push(node);
    
    while(!que.empty()){
    Node* temp = que.front();
    ans.push_back(temp->data);
        
    if(temp->left) 
        que.push(temp->left);
        
    if(temp->right) 
        que.push(temp->right);
        
    que.pop();
    }
    
    return ans;
}