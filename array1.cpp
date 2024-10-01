#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter array element";
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	return 0;
	
}