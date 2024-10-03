#include<iostream>
using namespace std;
int array[10],n,x;
int BinarySearch(int low,int high)
{
	if(low>high)
	{
		return -1;
	}
	else
	{
		int mid=(low+high)/2;
		if(array[mid]==x)
		{
			return mid;
		}
		else if(array[mid]>x)
		{
			return BinarySearch(low,mid-1);
		}
		else
		{
			return BinarySearch(mid+1,high);
		}
	}
}
int main()
{
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter array element of array in asscending order";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"enter element search in array";
	cin>>x;
	int result=BinarySearch(0,n-1);
	if(result==-1)
	{
		cout<<"element is not found in index:";
	}
	else
	{
		cout<<"element found in index :"<<result;
	}
	return 0;
}