/*Implement a class hierarchy for a university management system. 
Create a base class "Person" with attributes like name, age, and address. 
Derive two classes "Student" and "Faculty" from the base class, adding specific attributes and methods for each. 
Write a program to create objects of the derived classes and display their details.*/

#include<iostream>
using namespace std;
class Person{
	public:
	int age;
	string name,addr;
};
class Student: public Person{
	public:
	
	void display_Student(){
	cout<<"\nName of student is: "<<name;
	cout<<"\nAge of student is: "<<age;
	cout<<"\nAddress of student is: "<<addr;
	}
	
};
class Faculty: public Person{
	public:
	void display_Faculty(){
	cout<<"\nName of faculty is: "<<name;
	cout<<"\nAge of faculty is: "<<age;
	cout<<"\nAddress of faculty is: "<<addr;
	}
	
};
int main()
{
	int age,ch;
	string name,addr;
	Person p;
	cout<<"\nEnter the option for which you want to enter the data";
	cout<<"\n1-Student";
	cout<<"\n2-Faculty\n";
	cin>>ch;
	cout<<"\nEnter name: ";
	cin>>p.name;
	cout<<"\nEnter age: ";
	cin>>p.age;
	cout<<"\nEnter address: ";
	cin>>p.addr;
	switch(ch)
	{
		case 1: 
		{
		Student s;
		s.name = p.name;
        s.age = p.age;
        s.addr = p.addr;
		s.display_Student();
		break;
	}
		case 2: 
		{
		Faculty f;
		f.name = p.name;
        f.age = p.age;
        f.addr = p.addr;
		f.display_Faculty();
		break;
	}
		default:{	cout<<"\nInvalid Input...";
			break;
		}
	
	}
	return 0;
	
	
	
}
