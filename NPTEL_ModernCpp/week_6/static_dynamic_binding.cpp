#include <iostream>
using namespace std;

class B { public:

    void f() { cout << "B::f()" << endl; }
    virtual void g() { cout << "B::g()" << endl;}
};

class D : public B { public:
    void f() { cout << "D::f()" << endl; }
    virtual void g() {cout << "D::g()" << endl;}
};

int main() {
    B b; D d;

    B *pb = &b;
    B *pd = &d;
    D *rd = &d;

    pb->f(); // calls B::f()
    pb->g(); // calls B::g()

    pd->f(); // calls B::f()
    pd->g(); // calls D::g()

    rd->f(); // calls D::f()
    rd->g(); //calls D::g()
}