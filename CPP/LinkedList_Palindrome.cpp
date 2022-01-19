#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
        int data;
        Node* ptr;
        Node(int d)
        {
            data=d;
        }
};

bool isPalin(Node* head)
{
    Node* slow=head;
    stack <int> s;

    while(slow!=NULL)
    {
        s.push(slow->data);
        slow=slow->ptr;
    }
    while(head!=NULL)
    {
        int i=s.top();
        s.pop();

        if(head->data!=i)
        {
            return false;
        }
        head=head->ptr;
    }
    return true;
}

int main(){
    Node one=Node(1);
    Node two=Node(2);
    Node three=Node(3);
    Node four=Node(2);
    Node five=Node(1);

    five.ptr=NULL;
    one.ptr=&two;
    two.ptr=&three;
    three.ptr=&four;
    four.ptr=&five;

    Node *temp=&one;

    int result=isPalin(&one);
    cout<<result;
    return 0;
}