/*Create a program that manages an employee database using structures. 
Implement functions to add employee details, display employee information, and search 
for employees based on specific criteria. Utilize structure pointers to handle the employee 
records efficiently.*/

#include<iostream>
using namespace std;
struct Employee{
	int emp_id;
	string name;
	
};
int main()
{
	Employee e;
	cout<<"Enter the name of the employee: ";
	cin>>e.name;
	cout<<"\nEnter the id of the employee: ";
	cin>>e.emp_id;
	
	Employee *ptr;
	ptr = &e;
	
	cout<<"\nName: "<<ptr->name;
	cout<<"\nEmployee id: "<<ptr->emp_id;
	
	
}
