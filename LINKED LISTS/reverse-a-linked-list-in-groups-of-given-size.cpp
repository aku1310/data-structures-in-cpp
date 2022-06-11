#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;

struct node *reverse (struct node *head, int k)
{ 
    int count = 0;
    node* current = head;
    node* prev = NULL;
    node* nextt;
    
    while(current != NULL && count < k){
        nextt = current->next;
        current->next = prev;
        prev = current;
        current = nextt;
        count++;
    }
    if(nextt != NULL)
        head->next = reverse(nextt, k);
    
    return prev;
}