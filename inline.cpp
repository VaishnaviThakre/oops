//Write an inline function to calculate the area of a circle given its radius as input. 
//Call the function from the main function and display the result.

#include<iostream>
using namespace std;
class eg1{
	public:
	inline area(int r){
		return 3.14*r*r;
	}
};
int main()
{
	int r, a;
	cout<<"Enter the radius ";
	cin>>r;
	eg1 e;
	a=e.area(r);
	cout<<"\nArea of the circle is: "<<a;
	return 0;
}
