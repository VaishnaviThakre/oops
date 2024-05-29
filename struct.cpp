#include<iostream>
using namespace std;

struct Person
{
	string name;
	int age;
};
int main()
{
	int age;
	string name;
	
	cout<<"\nEnter name of the person: ";
	cin>>name;
	cout<<"\nEnter the age of the person: ";
	cin>>age;
	
	Person p;
	p.age = age;
	p.name = name;
	
	cout<<"\nName: "<<name;
	cout<<"\nAge: "<<age;
	
	return 0;
}

