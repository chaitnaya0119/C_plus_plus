#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insertBegins(Node *head,int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
Node deleteHead(Node *head)
{
    if(head == NULL)
        return NULL;
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head= NULL;
    head = insertBegins(head,10);
    head = insertBegins(head,20);
    head = insertBegins(head,30);
    printlist(head);
    deleteHead(30);
    printlist(head);
    return 0;
}
