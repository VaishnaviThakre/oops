#include <iostream>

class functype 
{
private:
    int x = 0; 

public:
    void func1() {
        std::cout << "This is a non-returning function." << std::endl;
    }

    int func2() {
        return x;
    }

    void func3(int value) {
        x = value;
    }
};

int main() {
    functype o1;
    o1.func3(100);
    o1.func1();
    std::cout << "x value: " << o1.func2() << std::endl;

    return 0;
}

