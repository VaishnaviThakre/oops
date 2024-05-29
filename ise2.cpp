#include<iostream>
using namespace std;

int f(int x, int *py, int **ppz) {
    int y, z;

    **ppz -= 1;//4
    z = **ppz;
    cout<<"\nz="<<z;
    *py += 3;
    y = *py;//7
    cout<<"\ny="<<y;
    x -= 2;//3
    cout<<"\nx="<<x;

    return x + y + z;//14
}

int main() {
    int num, *ptr1, **ptr2;
    num = 5;
    ptr1 = &num;
    ptr2 = &ptr1;
    cout << "\nResult: " << f(num, ptr1, ptr2) << endl;
    cout << "num = " << num << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "**ptr2 = " << **ptr2 << endl;
    return 0;
}

