#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head)
{
    Node* current = head;
    unordered_map <Node*, int> mp;
    ++mp[current];
    while(current->next != NULL){
        ++mp[current->next];
        if(mp[current->next] > 1){
            current->next = NULL;
            break;
        }
        current = current->next;
    }
}