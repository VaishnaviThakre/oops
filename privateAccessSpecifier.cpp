#include <iostream>

namespace privateAP {
    class MyClass {
    private:
        int x;

    public:
        void setX(int value) {
            x = value;
        }

        int getX() {
            return x;
        }
    };
}

int main() {
    privateAP::MyClass o1;
    o1.setX(42);
    std::cout << "x value: " << o1.getX() << std::endl;

    return 0;
}

