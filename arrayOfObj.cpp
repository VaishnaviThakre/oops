

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
		int n, i;
    cout << "\nEnter the number of Students: ";
    cin >> n;

    Student *s[n];
    for (i = 0; i < n; i++) {
        s[i] = new Student;
        cout << "\nEnter details for Student " << (i + 1) << ":\n";
        cout << "\nEnter name: ";
        cin >> s[i]->name;
        cout << "\nEnter roll no.: ";
        cin >> s[i]->ro_no;
        s[i]->display_details();
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        delete s[i];
    }
}
		
		


