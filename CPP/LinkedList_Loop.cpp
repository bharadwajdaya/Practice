#include <iostream>
#include <string>
#include <unordered_set>
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
bool detectLoop(Node* head)
{
    unordered_set<Node*> s;
    while(head!=NULL)
    {
        if(s.find(head)!=s.end()){
            return true;
        }
        s.insert(head);
        head=head->next;
    }
    return false;
}
int main(){
    Node* head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    head->next->next->next->next=head;
    cout<<detectLoop(head);
    return 0;
}