#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    NOde (int d)
    {
        data = d;
        next = NULL;
    }
};
Node printList(Node *head)
{
    Node *temp = head;
    if(head == NULL)
        return temp;
    else
        while(temp != head)
            cout<< temp->data;
            temp = temp->next;
}
int main()
{
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = head;

    return 0;
}
