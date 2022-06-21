#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> reverseLevelOrder(Node *node)
{
    vector<int> ans;
    if(!node) 
    return ans;
    
    queue<Node*> que;
    que.push(node);
    
    while(!que.empty()){
        Node* temp = que.front();
        ans.push_back(temp->data);
         
        if(temp->right) 
            que.push(temp->right);
            
        if(temp->left) 
            que.push(temp->left);
            
        que.pop();
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
}