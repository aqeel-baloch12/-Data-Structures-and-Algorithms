#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter a number by user=";
	cin>>num1;
	cout<<"enter second number=";
	cin>>num2;
	if(num1>num2)
	{
		cout<<"number is num1 is greater then number2"<<endl;
	}
	else if(num1<num2)
	{
		cout<<"number2 greater then number1"<<endl;
	}
	
	return 0;
}