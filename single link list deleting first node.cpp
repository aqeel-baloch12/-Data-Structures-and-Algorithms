#include<iostream>
using namespace std;
struct  Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n)
{
    Node *newNode=new Node;
    newNode->data=n;
    newNode->next=head;
    head=newNode;
}
void print()
{
    cout<<"data element in single linklist are:";
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    return 0;
}
