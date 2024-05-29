#include<iostream>
using namespace std;

int main() {
	int x=10;
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	
	cout << "x = " << x << endl;
	
	cout << "\np1 = &x = " << p1 << endl;
	cout << "*p1 = x = " << *p1 << endl;
	
	cout << "\np2 = &p1 = " << p2 << endl;
	cout << "*p2 = p1 = &x = " << *p2 << endl;
	cout << "**p2 = *p1 = x = " << **p2 << endl;
	
	cout << "\np3 = &p2 = " << p3 << endl;
	cout << "*p3 = p2 = &p1 = " << *p3 << endl;
	cout << "**p3 = *p2 = p1 = &x = " << **p3 << endl;
	cout << "***p3 = **p2 = *p1 = x = " << ***p3 << endl;
	
	***p3 = **p2 + 5; //x=x+5
	cout << "\nx = " << x << endl; //15
	
	*p1 = ***p3 - 2; //x=x-2
	cout << "x = " << x << endl; //13
	
	*p2 = p1 - 2;
	cout << "\np1 = " << p1 << endl; //address : &x - 8
	cout << "x = " << x << endl; //13, remains unchanged, since we are changing contents of p1
	cout << "*p1 = " << *p1 << endl; //garbage value or 0
	cout << "***p3 = " <<***p3 << endl; //garbage value or 0
}


