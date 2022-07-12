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
//Used to insert at tail of a linked list
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

//Used to insert at head of a linked list
void InsertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

//Used to display the linked list
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

//Used to delete a particular node
void deletion(node* &head, int val)
{
    node* todelete;
    if(head==NULL)
    {
        return;
    }
    if(head->data == val) //To delete head part only
    {
        todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    node* temp = head;
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }
    todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void reverse(node* &head)
{
    node* previous = NULL;
    node* current = head;
    node* nextptr;
    while(current!=NULL)
    {
        nextptr = current->next;
        current->next = previous;
        previous = current;
        current = nextptr;
    } 
    head = previous;
}
node* reverseRecc(node* &head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* newhead = reverseRecc(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

//main method
int main()
{
    node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    display(head);
    cout<<"\n";
    reverseRecc(head);
    display(head);
    return 0;
}