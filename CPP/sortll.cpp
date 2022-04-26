#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int main()
{ 
    ListNode* c=new ListNode(3);
    ListNode* b=new ListNode(2,c);
    ListNode* d=new ListNode(4,b);
    ListNode* a=new ListNode(1,d);

    ListNode* temp=a;
    while(temp!=NULL)
    {
        cout<<temp->val;
        temp=temp->next;
        cout<<endl;
    }
    return 0;
}