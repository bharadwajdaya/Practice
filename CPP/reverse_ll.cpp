#include<iostream>
using namespace std;

struct ListNode{
    int val;
    struct ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};
void printAllNodes(ListNode **head)
{
    while((*head)!=NULL)
    {
        cout<<"asda";
        cout<<(*head)->val<<" ";
        (*head)=(*head)->next;
        
    }
}
void reverse(ListNode **head)
{
    ListNode* prev=NULL,*next=NULL;
    ListNode* curr=*head;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}

int main(){
    ListNode *four=new ListNode(50,nullptr);
    ListNode *three=new ListNode(40,four);
    ListNode *two=new ListNode(30,three);
    ListNode *one=new ListNode(20,two);
    ListNode* head=new ListNode(10,one);


    reverse(&head);
    printAllNodes(&head);
    return 0;
}