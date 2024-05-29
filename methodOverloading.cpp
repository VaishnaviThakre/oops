#include<iostream>
using namespace std;

class demo{
	public:
	int test(){
		int i =1;
		return i;
	}
	 float test(float j){
		float i = 1.0;
		return i;
	}
};
int main(){
	
	demo d;
	int j,k;
	j = d.test();
	k = d.test(1.0);
	
}

