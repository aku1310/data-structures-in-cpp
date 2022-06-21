#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool detectLoop(Node* head)
{
    if(head == NULL) 
        return false;
    
    unordered_map <Node*, int> mp;
    while(head != NULL){
        if(mp[head] == NULL){
            mp[head] = 1;
            head = head->next;
        }
        else
            return true;
    }
    return false;
}