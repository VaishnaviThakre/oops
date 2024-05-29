/*Single Inheritance:
Create a base class "Animal" with attributes like "name" and "age".
Derive a class "Dog" from the base class and add a method "bark" to it.
Create an object of the "Dog" class and display its name, age, and make it bark.*/

#include<iostream>
using namespace std;
class Animal{
	public:
	string name;
	int age;
	Animal(int a,string n)
	{
		
	}
};
class Dog: public Animal;

