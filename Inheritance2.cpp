/*Create a base class "Shape" with member functions to calculate the area and perimeter. 
Derive two classes "Rectangle" and "Circle" from the base class and implement the respective area and perimeter calculations. 
Write a program to create objects of both derived classes and display their area and perimeter.*/

#include<iostream>
using namespace std;
class Shape
{
	
	
	int area();	
	int perimeter();
};

class Rectangle :public Shape
{
	int len,bre;
	
	Rectangle(int l,int b)
	{
		len=l;
		bre=b; 	
	}
	int area()
	{
		int area;
		area = l*b;
		return area;
	}
	int perimeter()
	{
		int per;
		per = 2*(l+b);
		return pe;
	}
};
class Circle: public Shape{
	
};
