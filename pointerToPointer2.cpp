#include<iostream>
using namespace std;

class PointerDemo {
	private:
		int arr[5]={1,2,3,4,5};
		int *p = arr;
		int (*ptr)[5] = &arr;
	
	public:
		/*void setPtr() {
			p = arr;
			ptr = &arr; 
		}*/
		void display() {
			cout << "arr = " << arr << endl;
			cout << "p = " << p << ", ptr = " << ptr << endl;
			cout << "*p = " << *p << ", *ptr = " << *ptr << endl;
			cout << "**ptr = " << **ptr << endl <<endl;
			
			cout << "sizeof(p) = " << sizeof(p) << ", sizeof(*p) = " << sizeof(*p) << endl;
			cout << "sizeof(ptr) = " << sizeof(ptr) << ", sizeof(*ptr) = " << sizeof(*ptr) << endl;
		}
};

int main(){
	PointerDemo p1;
	//p1.setPtr();
	p1.display();
	return 0;
}

