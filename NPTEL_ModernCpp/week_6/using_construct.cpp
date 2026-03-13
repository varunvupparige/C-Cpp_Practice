#include <iostream>
using namespace std;

class A {
    public:
        void f() { }
};

class B : public A {
    public:
        using A::f;  // avoids method hiding from base class
        void f(int) { } //overloads f()
};

int main() {

    B b;
    b.f();
    b.f(5);
}