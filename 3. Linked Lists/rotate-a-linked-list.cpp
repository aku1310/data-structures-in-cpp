#include <iostream>
using namespace std;

class node
{
public:
    int num;
    node *next;
    node(int val)
    {
        num = val;
        next = NULL;
    }
};

node *rotateRight(node *head, int k)
{
    if (head == NULL || head->next == NULL || k == 0)
        return head;

    node *temp = head;
    int length = 1;
    while (temp->next != NULL)
    {
        ++length;
        temp = temp->next;
    }

    temp->next = head;
    k = k % length;
    int end = length - k;
    while (end--)
        temp = temp->next;
    head = temp->next;
    temp->next = NULL;

    return head;
}
