#include<iostream>
using namespace std;
int f(int x,int *py,int **ppz)
{
	int y,z;
//value of **ppz and *py=4
	**ppz+=1; //value increased by 1
	z = **ppz;//value of z is 5
	*py +=2 ; //as **ppz is pointing to *py the value of py is now 5 and now 5+2=7
	y=*py;//value is 7
	x+=3;//value of x is 4 and 4+3 is now 7
	return x+y+z;
}
int main()
{
	int c,*b,**a;
	c=4;
	b=&c;// stores address of variable c
	a=&b;//stores address of variable b
	cout<<"\n"<<f(c,b,a);
	return 0;
}
