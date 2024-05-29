/*Create a function that takes a pointer to a structure as an argument and modifies the structure 
to calculate the total marks obtained by a student in different subjects.*/

#include<iostream>
using namespace std;

struct Marks
{
	int marks[5];
	int tot_mark;
	string name;
};

void CalculateMarks(Marks *m)
{
	int i;
	int tot = 0;
	cout<<"\nEnter marks for 5 subjects: ";
	for(i=0;i<5;i++)
	{
		
		cin>>m->marks[i];
		tot = tot +m->marks[i];
	}
	m->tot_mark = tot;
	
}

int main()
{
	Marks m;
	CalculateMarks(&m);
	
	cout<<"\nTotal marks: "<<m.tot_mark;
	return 0;
}

