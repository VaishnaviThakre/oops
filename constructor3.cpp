//write a cpp program to implement diffrent types of constructor
#include <iostream>
using namespace std;

class constructor3 {
private:
    int number;

public:
    
    constructor3() {
        number = 4;
    }

    
    constructor3(int num) {
        number = num;
    }

    
    constructor3(const constructor3& other) {
        number = other.number;
    }

   void displayNumber() {
        cout << "\nNumber: " << number;
    }
  
};

int main() {
    
    constructor3 obj1;            
    constructor3 obj2(10);           
    constructor3 obj3 = obj2;  
	
	obj1.displayNumber();
    obj2.displayNumber();
    obj3.displayNumber();      


    return 0;
}


