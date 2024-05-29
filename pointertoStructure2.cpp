/*Develop a program that utilizes a pointer to a structure to store and manipulate a 
list of employees' records, including their name, salary, and department.*/

#include<iostream>
using namespace std;

struct employee
{
	string name;
	int salary;
	string department;
};

void addEmployee(employee *e)
{
	cout<<"\nEnter name of the employee: ";
	cin>>e->name;
	cout<<"\nEnter the salary of the employee: ";
	cin>>e->salary;
	cout<<"\nEnter the department of the employee: ";
	cin>>e->department;
}
int main()
{
	employee e;
	addEmployee(&e);
	cout<<"\nName: "<<e.name;
	cout<<"\nSalary: "<<e.salary;
	cout<<"\nDepartment: "<<e.department;
	
}

