// C++ Program to display address of each element of an array 
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter at location["<<i<<"]: ";
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<arr[i]<<" Stored at: "<<&arr[i];
	}
	
}
