#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void insertAfter(Node* head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=head->next;
    head->next=new_node;
}

void insert(Node** head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}

void append(Node** head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=NULL;

    Node* last=*head;

    if(*head==NULL)
    {
        *head=new_node;
        return;
    }

    while(last->next!=NULL)
    {
        last=last->next;
    }

    last->next=new_node;
    return;
}

void printList(Node* head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        cout<<head->data <<"\n";

        head=head->next;
    }
    //cout<<count;
}

int main(){
    Node* head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,4);

    append(&head,3);
    insertAfter(head->next,9);
    printList(head);
    return 0;
}