#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void deleteNode(Node **head_ref,int data)
{
    Node* temp=*head_ref;
    Node* prev=NULL;

    if(temp!=NULL && temp->data==data)
    {
        *head_ref=temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp!=NULL && temp->data!=data)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            return;
        }
        prev->next=temp->next;
        delete temp;
    }
}

void printAllNodes(Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<endl;
        node=node->next;
    }
}

void insert(Node** node,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=*node;
    *node=new_node;
}

void deleteNodePosition(Node** root,int position)
{
    Node* temp=*root;

    //If the head is null
    if(root==NULL)
    {
        return ;
    }

    //If the position 
    if(position==0)
    {
        *root=temp->next;
        free(temp);
        return;
    }

    for(int i=0;temp!=NULL && i<position-1;i++)
    {
        temp=temp->next;
    }

    Node* next=temp->next->next;
    free(temp->next);
    temp->next=next;

}
void deleteAllLinkedList(Node** root)
{
    Node *new_node=*root;
    Node* next_node=NULL;
    while(new_node!=NULL)
    {
        next_node=new_node->next;
        free(new_node);
        new_node=next_node;
    }
    *root=NULL;
}
int main(){
    Node* root=NULL;
    insert(&root,1);
    insert(&root,2);
    insert(&root,3);
    insert(&root,4);
    printAllNodes(root);
    //deleteNode(&root,2);
    //deleteNodePosition(&root,2);
    deleteAllLinkedList(&root);
    cout<<"++++++++++++++++++++"<<endl;
    printAllNodes(root);
    return 0;
}