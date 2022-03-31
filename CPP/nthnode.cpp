#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0),next(nullptr){}
    ListNode(int x): val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};
// 1>2>2>3
int main(){
    ListNode* fourth=new ListNode(3,nullptr);
    ListNode* third=new ListNode(2,fourth);
    ListNode* second=new ListNode(2,third);
    ListNode* first=new ListNode(1,second);
    ListNode* head=first;
    
    ListNode *t=head;//navigator
    int t_val=t->val;
    ListNode *n=t->next;

    while(n)
    {
        if(t_val!=n->val)
        {
            t->next=n;
            t_val=n->val;
            t=t->next;
        }
        n=n->next;
    }
    t->next=NULL;
    while(head)
    {
        cout<<head->val;
        head=head->next;
    }
    
    return 0;
}