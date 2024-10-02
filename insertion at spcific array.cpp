#include<iostream>
using namespace std;
int main()
{
	int array[10],n,pos,x;
	cout<<"enter size of array:"<<endl;
	cin>>n;
	cout<<"enter array element:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"enter insertion position location:"<<endl;
	cin>>pos;
	cout<<"value to insert:"<<endl;
	cin>>x;
	for(int i=n-1;i>=pos-1;i--)
	{
		array[i+1]=array[i];
	}
	array[pos-1]=x;
	n++;
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
	
	
}