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
void insertAtposition(int pos,int n)
{
Node *newNode=new Node;
newNode->data=n;
if(pos==1)
{
	newNode->next=head;
	head=newNode;
	}	
	Node *temp=head;
	for(int i=1;i<pos-1  && temp!=NULL; i++)
	{
		temp=temp->next;
	}
	if(temp==NULL)
	{
		cout<<"invalid position"<<endl;
	}
	newNode->next=temp->next;
	temp->next=newNode;
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
    insertAtposition(3,12);
    print();
    return 0;
}