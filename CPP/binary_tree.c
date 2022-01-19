#include<stdio.h>
struct Node{
    int data;
    struct Node *left,*right;
};
Node* newNode(int data)
{
    Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main(){
    Node *root=newNode(1);
    root->left = newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
}