#include <iostream>

namespace class1 {
    class MyBaseClass {
    protected:
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

namespace class2 {
    class MyDerivedClass : public class1::MyBaseClass {
    public:
        void accessX(int value) {
            setX(value);
        }
    };
}

int main() {
    class2::MyDerivedClass o1;
    o1.accessX(17);
    std::cout << "x value: " << o1.getX() << std::endl;

    return 0;
}

