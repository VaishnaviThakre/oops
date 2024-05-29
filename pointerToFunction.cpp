/*Create a calculator program in Cpp that takes two numbers and an arithmetic operation as input
 from the user. Implement the calculator using function pointers to perform the chosen operation 
(addition, subtraction, multiplication, division).Display the result to the user.*/

#include<iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}
int mul(int a,int b)
{
	return a*b;
}
int sub(int a,int b)
{
	return a-b;
}
int div(int a,int b)
{
	return a/b;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	int (*func)(int, int);
	func = add;
	int add = func(a,b);
	cout<<"\nAddition is: "<<add;
	func = sub;
	int sub = func(a,b);
	cout<<"\nSubtraction is: "<<sub;
	func = mul;
	int mul = func(a,b);
	cout<<"\nMultiplication is: "<<mul;
	func = div;
	int div = func(a,b);
	cout<<"\nDivision is: "<<div;
	
	
	
}
