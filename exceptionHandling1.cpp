/*Create a program to prompt the user to enter two integers and perform division. 
Implement exception handling to catch division by zero and handle it gracefully by displaying an 
appropriate error message.*/

#include<iostream>
using namespace std;
class ArithematicException {};
class ExceptionHandling{
	public:
		int num1,num2;
		ExceptionHandling(int n1,int n2)
		{
			num1 = n1;
			num2 = n2;
			
		}
		
		void division(int n1,int n2)
		{
			int ans;
			try{
				if(num2==0)
				{
					 throw ArithematicException();
				}
				ans = n1/n2;
				cout<<"\nDivision is: "<<ans;
			}
			catch (ArithematicException&){
				cout<<"\nDenominator cannot be 0";
			}
			
		}
		
};
int main()
{
	int num1,num2;
	cout<<"Enter two numbers:\n";
	cin>>num1>>num2;
	ExceptionHandling e(num1,num2);
	e.division(num1,num2);
	return 0;
	
}
