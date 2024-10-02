#include<iostream>
using namespace std;
int main()
{
	int array[10],n;
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter array element:";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<n-1;i++)
	{
		array[i]=array[i+1];
	}
	n--;
	cout<<"array after deletion:";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
		
	}
	return 0;
}