#include <iostream>
using namespace std;

class PublicAS {
public:
    int x;

    void publicfunc() {
        cout << "This is a public function.";
    }
};

int main() {
    PublicAS p;
    p.x = 42;
    p.publicfunc();

    return 0;
}

