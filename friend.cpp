/*Create a class called Rectangle with private attributes length and width. 
Declare a friend function calculateArea() that calculates and returns the area of the rectangle. 
Prompt the user to enter the length and width of the rectangle, create an object of the Rectangle class, 
and use the friend function to calculate and display the area.*/

#include<iostream>
using namespace std;
class Rectangle{
	private:
		int len,wid;
		
	public:
		Rectangle(int l,int w){
			
			 len=l;
			 wid = w;
			
		}
		friend void calculateArea(Rectangle r);
		
};
void calculateArea(Rectangle r)
{
	int area = r.len*r.wid;
	cout<<"\nArea of the rectangle is:"<<area;
}
int main()
{
	int l,b;
	cout<<"\nEnter lenghth and width of the rectangle:\n";
	cin>>l>>b;
	Rectangle r(l,b);
	calculateArea(r);
	return 0;
}
