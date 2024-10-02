#include<iostream>
using namespace std;
int main()
{
	int array[10],n,x;
	cout<<"enter size of array"<<endl;
	cin>>n;
	cout<<"enter array element"<<endl;
	for(int i=0;i<=4;i++)
	{
		cin>>array[i];
	}
	cout<<"the element at the beging"<<endl;
	cin>>x;
	for(int i=n;i>0;i--)
	{
		array[i]=array[i-1];
	}
	array[0]=x;
	n++;
	cout<<"array element are:";
	for(int i=0;i<n;i++)
    {
    	cout<<array[i]<<endl;
		}	
		return 0;
}