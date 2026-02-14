#include <iostream>

using namespace std;

class TestClass {
    int x;

    public:
    TestClass(int x_) : x(x_) { cout << "ctor ";}
    TestClass(TestClass &d) { x = d.x; cout << "copy_ctor ";}
    TestClass& operator = (TestClass d) {x = d.x; cout << "assign "; return *this; }
};

int main() {

    TestClass d1(5);
    TestClass d2 = d1;
    TestClass d3(10);
    d3 = d2;
    return 0;
}