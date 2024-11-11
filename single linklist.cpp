#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n)
{
    Node *NewNode=new Node;
    NewNode->data=n;
    NewNode->next=head;
    head=NewNode;
}
void print()
{
	cout<<"data element in single linklist:";
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
    insert(3);
    insert(5);
    insert(7);
    insert(8);
    insert(11);
    print();

    return 0;
}