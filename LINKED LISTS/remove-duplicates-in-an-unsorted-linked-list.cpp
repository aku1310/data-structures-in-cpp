#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node * removeDuplicates( Node *head) 
{
    map<int,int> m;
    Node* current = head;
    m[current->data] = 1;
    Node* prev = current;
    current = current->next;
    while(current){
        if(m[current->data]){
            prev->next = current->next;
            delete (current);
        }
        else{
            m[current->data] = 1;
            prev = current;
        }
        
        current = prev->next;
    }
    return head;
}