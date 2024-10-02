#include<iostream>
using namespace std;
int main()
{
	int array[10],n,x,i;
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter element of array";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}

		cout<<"enter inert element of array:"<<endl;
	cin>>x;
	array[i]=x;
	n++;
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}