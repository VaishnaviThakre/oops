/*Write a function that takes an integer array and its size as inputs and 
returns the sum of all elements in the array using pointer arithmetic.*/

#include<iostream>
using namespace std ;

int arraySum(int s, int *a)
{
	int size = s;
	int *ptr=a;

	int j,sum=0;
	for (int j = 0; j < size; j++) {
        sum =sum+*ptr;
		ptr++; 
    }
	return sum;
}

int main()
{
	int size,sum,i;
	cout<<"Enter the size of the array: ";
	cin>>size;
	cout<<"Enter the elements of array";
	int arr[size];
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	sum = arraySum(size,arr);
	cout<<"\nThe sum of the array is: "<<sum;
	return 0;
	
	
}
