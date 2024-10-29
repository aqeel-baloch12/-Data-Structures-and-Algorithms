#include<iostream>
using namespace std;
int array[5]={12,45,67,3,89},n=5;


void bubblesort()
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				int temp;
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void print()
{
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
}

int main()
{
	cout<<"array before sorting is given:"<<endl;
	print();
	cout<<"array after sortin is given:"<<endl;
	bubblesort();
    print();
	return 0;
}