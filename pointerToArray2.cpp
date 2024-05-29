/*Write a C++ function that takes a pointer to an integer array and its size 
as arguments and finds the largest element in the array. The function should return the 
index of the largest element.*/

#include<iostream>
using namespace std;

int largestinArray(int s, int *arr)
{
	int i,j;
	j=0;
	for(i=0;i<s;i++)
	{
		if(arr[i]>arr[j]){
			j=i;
		}
	}
	cout<<"\nLargest number in the array is: "<<arr[j];
	return j;
}

int main()
{
	int i,s,ind;
	
	cout<<"Enter the size of the array: ";
	cin>>s;
	int arr[s];
	for(i=0;i<s;i++)
	{
		cout<<"\nEnter at location:["<<i<<"]: ";
		cin>>arr[i];
	}
	
	ind = largestinArray(s,arr);
	cout<<"\nLargest element in the array is at: "<<ind;
	
	return 0;
}
