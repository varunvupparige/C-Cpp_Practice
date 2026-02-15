#include <iostream>

using namespace std;

class MyClass {
    static int x;
    public:
        void get() { x = 15; }
        void print() { x = x + 5;
            cout << "x =" << x << endl;
        }
};

int MyClass::x = 0;

int main() {
    MyClass c1, c2;
    c1.get(); c2.get();
    c1.print(); c2.print();
}