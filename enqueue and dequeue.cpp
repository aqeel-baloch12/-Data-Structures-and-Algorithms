#include <iostream>
using namespace std;
int queue[5],n=5,x,front=-1,rear=-1;
void insert()
{
	if(rear==n-1)
	{
		cout<<"queue is full"<<endl;
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
	}
		cout<<"insert the element in queue";
		cin>>x;
		rear++;
		queue[rear]=x;
	
}
void Delete()
{
	if(front==-1)
	{
		cout<<"queue is empty"<<endl;
	}
	else
	{
		cout<<"element is deleted from queue is:"<<queue[front]<<endl;
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}
int main()
{
	insert();
	insert();
	insert();
	insert();
	insert();
	Delete();
	Delete();
	Delete();
	Delete();
	Delete();
	
}