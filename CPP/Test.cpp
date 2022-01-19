#include<iostream>
#include<stack>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    Node(int d)
    {
      data=d;
    }
};
void insert(Node** head,int data)
{
  Node* new_node=new Node(data);
  new_node->next=*head;
  *head=new_node;
}
bool palindromeCheck(Node* head)
{
  Node* slow=head;
  Node* fast=head;
  Node* slow_prev=head;
  Node* mid_node=head;

  Node* second_half=head;
  bool res=true;

  while(fast!=NULL && fast->next!=NULL)
  {
    fast=fast->next->next;
    slow_prev=slow;
    slow=slow->next;
  }
  if(fast!=NULL)
  {
    mid_node=slow;
    slow=slow->next;
  }
  second_half=slow;
  slow_prev->next=NULL;

  reverse(&second_half);

  res=compareLists(head,second_half);

  if(mid_node!=NULL)
  {

  }

  return false;
}

bool compareLists(Node* head1,Node* head2)
{ 

}

void reverse(Node** second_half)
{
  Node* prev=NULL;
  Node* current=*second_half;
  Node* next;

  while(current!=NULL)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  *second_half=prev;
}
void printAllNodes(Node *head)
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<"\n";
}

int main(){
  Node *head=NULL;
  insert(&head,1);
  insert(&head,2);
  insert(&head,3);
  insert(&head,4);
  insert(&head,5);
  //printAllNodes(head);
  palindromeCheck(head);
  return 0;
}