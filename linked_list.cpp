#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void InsertAtTail(node* &head, int val)
{
    node* n1 = new node(val);
    if(head==NULL)
    {
        head = n1;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n1;
}
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main()
{
    node* head = NULL;
    InsertAtTail(head,5);
    InsertAtTail(head,10);
    InsertAtTail(head,15);
    InsertAtTail(head,20);
    InsertAtTail(head,25);
    display(head);
    return 0;
}