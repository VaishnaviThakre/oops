

#include<iostream>
using namespace std;

class Student{
	public:
		int ro_no;
		string name;
		
		void stud_details(){
	
		cout<<"\nEnter name: ";
		cin>>name;
		cout<<"\nEnter roll no.: ";
		cin>>ro_no;
		}
	
		
		int total_marks(){
			int i,sum = 0,arr[5];
			cout<<"\nEnter marks of the subjects: ";
			for(i=0;i<5;i++){
				cin>>arr[i];
		
				sum = sum + arr[i];			
			}
			
			return sum;
		}
		int average(int s){
        return s / 5;
			
		}
		
		void display_details(){
		int marks,avg;
		marks = total_marks();
		avg = average(marks);
        cout << "\nName of student: " << name;
        cout << "\nRoll no. of student: " << ro_no;
        
        cout << "\nSum of the marks is: " << marks;
        cout << "\nAverage of the marks is: " << avg;
		}
};
int main(){
		
		int sum,n,i;
		Student s[n];
		cout<<"\nEnter the number of Students: ";
		cin>>n;
		for (int i = 0; i < n; i++) {
    cout << "\nEnter details for Student " << (i+1) << ":\n";
    s[i].stud_details();
    cout << "\nDetails of Student " << (i+1) << ":\n";
    s[i].display_details();
    cout << endl;
}
		
		
}

