//Write a C++ program to show that each object calls the constructor separately.

#include <iostream>
using namespace std;

class constructor2 
{
public:
    
    constructor2() 
	{
       cout << "\nConstructor called.";
    }
};

int main() 
{
	cout<<"\nConstructor calling for first object";
    constructor2 c1;
    cout<<"\nConstructor calling for second object";
    constructor2 c2;

    return 0;
}


