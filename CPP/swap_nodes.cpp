#include<iostream>
#include<string>
#include<vector>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode * next;
        ListNode(){
            val=0;
            next= nullptr;
        }
        ListNode(int x)
        {
            val=x;
            next= nullptr;
        }
        ListNode(int x, ListNode* n)
        {
            val=x;
            next=n;
        }

};
void printAllInList(ListNode head)
{

    //a>b>c>d
    //1>2>3>4
    ListNode* prevNode=nullptr;
    ListNode* currNode=&head;
    ListNode* nextNode=head.next;
    while(currNode!=NULL && nextNode!=NULL)
    {
        currNode->next=nextNode->next;
        nextNode->next=currNode;
        if(prevNode==NULL)
        {
            head=*nextNode;
        }
        prevNode=currNode;
        currNode=currNode->next;
        nextNode=currNode->next;


        cout<<currNode->val;
        cout<<nextNode->val;
    } 

    ListNode* it=&head;
    while(it!=NULL)
    {
        cout<<it->val<<endl;
        it=it->next;
    }
}
int main(){
    ListNode head;
    ListNode three=ListNode(4,nullptr);
    ListNode two=ListNode(3,&three);
    ListNode one=ListNode(2,&two);
    head=ListNode(1,&one);
    
    printAllInList(head);
    return 0;
}