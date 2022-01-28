#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *mergeTwoLists(ListNode *list_one, ListNode *list_two) {
    ListNode dummy(0);
    auto curr=&dummy;

    while(list_one && list_two)
    {
        if(list_one->val <= list_two->val)
        {
            curr->next=list_one;
            list_one=list_one->next;
        }
        else
        {
            curr->next=list_two;
            list_two=list_two->next;
        }
        curr=curr->next;
    }
    curr->next =list_one != NULL ? list_one: list_two;
    return dummy.next;
}
int main(){
    ListNode l3(4,NULL);
    ListNode l2(2,&l3);
    ListNode l1(1,&l2);
    
    ListNode _l3(4,NULL);
    ListNode _l2(3,&l3);
    ListNode _l1(1,&l2);

    ListNode* _ans=mergeTwoLists(&l1,&_l1);
    return 0;
}