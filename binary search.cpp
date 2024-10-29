#include<iostream>
using namespace std;

int array[10],n,x;
	int BinarySearch(int low,int high)
	{
		while(low<=high)
		{
			int mid=(low+high)/2;
			if(array[mid]==x)
			{
				return mid;
			}
			else if(array[mid]>x)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		return -1;
	}
	




int main()
{
	
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter element of array in ascending order";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"enter a number to search in array";
	cin>>x;
	
	//function it call
	

	
	
		int result=BinarySearch(0,n-1);
	if(result==-1)
	{
	cout<<"element not found in array";
	}
	else
	{
		cout<<"elemt of array index:"<<result;
	}
	return 0;
	
	
	
	
	
}