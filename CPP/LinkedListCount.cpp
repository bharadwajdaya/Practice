#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head_ref,int new_data){
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

int getCount(Node* head){
    if(head==NULL)
    {
        return 0;
    }
    else {
        cout<<"Get Count\n";
        return 1+getCount(head->next);
    }
}


int main(){
    Node* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);

    cout<<"Count of nodes is "<< getCount(head)<<"\n";
    return 0;
}