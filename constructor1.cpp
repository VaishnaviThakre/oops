//Write a C++ program to define a constructor and initialize the class data members with some constants.

#include <iostream>
using namespace std;

class ArithmeticOperations 
{

public:
	int num1;
    int num2;
    
    ArithmeticOperations() 
	{
        num1 = 10;
        num2 = 5;
    }

 
    void Operations() 
	{
        cout << "\nNumber 1: " << num1;
        cout << "\nNumber 2: " << num2;
        cout << "\n\nSum: " << num1+num2;
        cout << "\nDifference: " <<num1-num2;
        cout << "\nProduct: " << num1*num2;
        cout << "\nQuotient: " << num1/num2;
        cout << "\nRemainder: " <<num1%num2;
    }
};

int main() {
   
    ArithmeticOperations a;
    a.Operations();

    return 0;
}


