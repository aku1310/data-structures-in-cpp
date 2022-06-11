#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node* reverseList(struct Node *head){
    Node* current = head;
    Node* prev = NULL;
    while(current != NULL){
        Node* nextt = current->next;
        current->next = prev;
        prev = current;
        current = nextt;
    }
    return prev;
}