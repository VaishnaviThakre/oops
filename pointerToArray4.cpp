/*Given two 1D integer arrays of the same size, write a C++ function that takes
pointers to these arrays and their size as arguments and calculates the element-wise 
sum of the two arrays. The result should be stored in a new array, and the function should 
return a pointer to the new array.*/

#include<iostream>
using namespace std;

int* arraySum(int* arr1,int* arr2){
	int i;
	int* sum = new int[5];
	for ( i = 0; i < 5; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
	return sum;
}

int main()
{
	int arr1[5],arr2[5];
	int i,*sum;
	
	cout<<"Enter the values for first array\n";
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter at location["<<i<<"]: ";
		cin>>arr1[i];
	}
	cout<<"\nEnter the values for second array\n";
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter at location["<<i<<"]: ";
		cin>>arr2[i];
	}
	sum = arraySum(arr1,arr2);
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<sum[i];
	}
	delete[] sum;
}
