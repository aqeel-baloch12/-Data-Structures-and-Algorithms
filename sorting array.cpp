#include<iostream>
using namespace std;
int main()
{
	int array[10],size,temp;
	cout<<"enter size of arraY:";
	cin>>size;
	cout<<"enter element of array:";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<size;i++)
	{
	
		for(int j=i+1;j<size;j++)
		{
		if(array[i]>array[j])
		{		
		temp=array[i];
		array[i]=array[j];
		array[j]=temp;	
	   }
		}
	}
	cout<<"sorted array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}