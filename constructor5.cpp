#include<iostream>
using namespace std;
class Example1{
		public:
			int value;

		Example1(){
			value=0;
			cout<<"\nDefault constructor called";
		}
		Example1(int i)	
		{
			value = i;
			cout<<"\nParamaterized constructor called";
		}
		Example1(Example1& obj){
			value= obj.value;
			cout<<"\nCopy Constructor called";
		}
		int getValue()  {
        return value;
    }
	};
int main(){
	
	Example1 obj1;
	Example1 obj2(5);
	Example1 obj3=obj2;
		
	cout << "\nobj1 value: " << obj1.getValue() << std::endl;
    cout << "obj2 value: " << obj2.getValue() << std::endl;
    cout << "obj3 value: " << obj3.getValue() << std::endl;
	
}

