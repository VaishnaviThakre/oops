/*Design a program that uses a class to represent a student's grade. 
The class should have member variables for the student's name and marks in different subjects. 
Implement functions to calculate the average marks and display the student's information. 
Use pointers to objects to manage multiple student records efficiently.*/

#include<iostream>
using namespace std;
class Student
{
	public:
		int ro_no;
		string name;
	
		int total_marks()
		{
			int i,sum = 0,arr[5];
			cout<<"\nEnter marks of the subjects: ";
			for(i=0;i<5;i++)
			{
				cin>>arr[i];
		
				sum = sum + arr[i];			
			}
			
			return sum;
		}
		int average(int s)
		{
        return s / 5;
			
		}
		
		void display_details()
		{
		int marks,avg;
		marks = total_marks();
		avg = average(marks);
        cout << "\nName of student: " << name;
        cout << "\nRoll no. of student: " << ro_no;
        
        cout << "\nSum of the marks is: " << marks;
        cout << "\nAverage of the marks is: " << avg;
		}
	};
int main()
{
	int sum,n,i;
	Student *s[n];
	cout<<"\nEnter the number of Students: ";
	cin>>n;
	for ( i = 0; i < n; i++) {
		s[i]=new Student;
    cout << "\nEnter details for Student ";
    cout<<"\nEnter name: ";
		cin>>s[i]->name;
		cout<<"\nEnter roll no.: ";
		cin>>s[i]->ro_no;
    cout << "\nDetails of Student " << (i+1) << ":\n";
    s[i]->display_details();
    cout << endl;	
     
}
}
