/*Define a structure named "Student" with members for the student's name, roll number, 
and an array to store marks in five subjects. Write a program that takes input for five students' 
records and displays their details along with the average marks obtained.*/

#include<iostream>
using namespace std;

struct Student{
	string emp_name;
	int emp_id;
	int arr[5];
};

int main()
{
	int i,j;
	Student s[5];
	for(i=0;i<5;i++)
	{	cout<<"\nEnter the elements "
		cout<<"\nEnter the name of the student: ";
		cin>>s[i].name;
		cout<<"\nEnter the roll no. of the student: ";
		cin>>s[i].roll_no;
		cout<<"\nEnter the marks of the 5 subjects of the student:\n";
		for (j = 0; j < 5; j++) {
            cin >> s[i].arr[j];
            
        }

	}
	
	for(i=0;i<5;i++)
	{
		cout<<"\nDetails of student "<<i;
		cout<<"\nName: "<<s[i].name;
		cout<<"\nRoll no.: "<<s[i].roll_no;
		cout<<"\nMarks:\n";
		for(j=0;j<5;j++)
		{
			cout<<"\n"<<s[i].arr[j];
		}
	}
}
