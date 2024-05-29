#include<iostream>
using namespace std;

int multiply(int a, int b) {
	return a*b;
}

int main(){
	int (*func) (int, int);
	
	func = multiply;
	
	int product = func(15,2);
	//int product = (*func)(15,2); //this also works
	
	cout << "Product = " << product << endl;
	return 0;
	
}


