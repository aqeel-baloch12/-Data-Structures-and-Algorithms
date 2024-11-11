#include<iostream>
using namespace std;
int main()
{
	int array[10],n,x,i;
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter array element:";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
		
	}
	cout<<"enter a number to search in array:";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(array[i]==x)
		{
			cout<<"element found in index:"<<i;
			
			break;
		}
	}
	if(i==n)
	{
		cout<<"element not found:";
	}
	return 0;
}