#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
class Solution{
    public:
    int getMiddle(Node *head)
    {
        if(head == NULL)
            return -1;
            
        Node* temp = head;
        Node* second = temp->next;
        while(second->next && second->next->next){
            temp = temp->next;
            second = second->next->next;
        }
        
        return temp->next->data;
    }
};