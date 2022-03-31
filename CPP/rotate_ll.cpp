#include<iostream>
using namespace std;
struct ListNode{
    int data;
    ListNode* next;
    ListNode(): data(0), next(nullptr){}
    ListNode(int x): data(x),next(nullptr){}
    ListNode(int x,ListNode* next):data(x),next(next){}
};
int getLength(ListNode** head)
{
    int len=0;
    while((*head)->next!=nullptr)
    {
        (*head)=(*head)->next;
        len++;
    }
    len++;
    return len;
}
void traverseLL(ListNode** head)
{
    cout<<"data ";
    while((*head)!=NULL)
    {
        cout<<(*head)->data<<" ";
        *head=(*head)->next;
    }
    cout<<endl;
}
ListNode* rotateRight(ListNode* head, int k) 
{
    if(!head || !head->next || k==0)
    {
        return head;
    }
    ListNode* nav=head;
    ListNode* last=head;

    int len=getLength(&last);
    last->next=head;
    if(len<k)
    {
        k=k%len;
    }
    cout<<"k "<<k<<endl;
    while(k--)
    {
        nav=nav->next;
    }
    cout<<"Data "<<(nav->data)<<endl;
    head=nav->next;
    nav->next=NULL;


    traverseLL(&head);
    return head;
}
int main(){
    // ListNode* five=new ListNode(5);
    // ListNode* four=new ListNode(4,five);
    // ListNode* three=new ListNode(3,four);
    ListNode* two=new ListNode(2,NULL);
    ListNode* head=new ListNode(1,two);
    
    ListNode* nav=head;
    ListNode* last=head;
    
    int k=1;

    rotateRight(head,k);
    return 0;
}

