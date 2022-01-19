#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d)
        {
            data=d;
        }
};
void insert(Node** head,int data)
{
    Node* new_node=new Node(data);
    new_node->next=*head;
    *head=new_node;
}
void printallNodes(Node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}

void swapNodes(Node** head,int x,int y)
{
    if(x==y)
    {
        return;
    }

    Node* prevX=NULL;
    Node* currX=*head;
    while(currX && currX->data!=x)
    {
        prevX=currX;
        currX=currX->next;
    }

    Node* prevY=NULL;
    Node* currY=*head;
    while(currY && currY->data!=y)
    {
        prevY=currY;
        currY=currY->next;
    }

    if(currX==NULL && currY==NULL)
    {
        return;
    }

    if(prevX!=NULL)
    {
        prevX->next=currY;
    }
    else
    {
        *head=currY;
    }
    if(prevY!=NULL)
    {
        prevY->next=currX;
    }
    else
    {
        *head=currX;
    }

    Node* temp=currY->next;
    currY->next=currX->next;
    currX->next=temp;
}

int main(){
    Node* head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    printallNodes(head);
    return 0;
}