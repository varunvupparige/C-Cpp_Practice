#include <iostream>
using namespace std;

class B {
    protected:
        int n1;
    public:
        B(int x) : n1(x) { }
        void f1() { cout << ++n1 << endl; }
};

class D : public B {
    public:
        D(int x) : B(x) { }
        void f1(int a) { cout << ++n1 << endl;}
};

int main() {

    D d(1);
    d.f1(1);
    return 0;
}