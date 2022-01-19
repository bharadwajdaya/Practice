#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};
void insert(Node** head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}
void printAllNodes(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
void append(Node** head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=NULL;

    Node* last_node=*head;
    //If 1st node is null
    if(*head==NULL)
    {
        *head=new_node;
    }
    while(last_node->next!=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=new_node;
    return;
}

void insertAfterNode(Node* insertAfterNode,int data)
{
    if(insertAfterNode==NULL)
    {
        cout<<"Previous node cannot be null";
        return;
    }
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=insertAfterNode->next;
    insertAfterNode->next=new_node;
    return ;
}

void nthfromlast(Node** head,int n)
{
    Node* ref_ptr=*head;
    Node* main_ptr=*head;

    if(*head==NULL)
    {
        cout<<"List is empty"<<endl;
    }

    for(int i=1;i<n;i++)
    {
        ref_ptr=ref_ptr->next;
        if(ref_ptr==NULL)
        {
            cout<<"List is small to process the given input";
        }
    }
    while(ref_ptr!=NULL && ref_ptr->next!=NULL)
    {
        ref_ptr=ref_ptr->next;
        main_ptr=main_ptr->next;
    }
    cout<< main_ptr->data <<endl;
}
void getTheMiddleElement(Node** head)
{
    Node* fast_ptr=*head;
    Node* slow_ptr=*head;

    if(*head!=NULL)
    {
        while(fast_ptr!=NULL && fast_ptr->next!=NULL)
        {
            fast_ptr=fast_ptr->next->next;
            slow_ptr=slow_ptr->next;
        }
        cout<<slow_ptr->data<<endl;
    }
}
int getCount(Node* head)
{
    int count=0;
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        return 1+getCount(head->next);
    }
}
int main(){
    Node* head=NULL;
    insert(&head,2);
    insert(&head,3);
    insert(&head,5);

    
    printAllNodes(head);
    cout<<"=================================Append"<<endl;
    append(&head,1);
    insertAfterNode(head,4);
    printAllNodes(head);
    cout<<"=================================NthElement from Last"<<endl;

    nthfromlast(&head,2);
    cout<<"=================================Middle Element"<<endl;
    getTheMiddleElement(&head);
    cout<<"================================= Get Count"<<endl;
    cout<<getCount(head)<<endl;
    cout<<"================================= Get variable Count"<<endl;
    return 0;
}