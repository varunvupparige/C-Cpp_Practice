#include <iostream>
using namespace std;

class B {
    public:
        virtual void print() { cout << "C" << " ";}
};

class D : public B {
    public:
        void print() { cout << "C++" " ";}
};

int main() {

    B *a1 = new B();
    B *a2 = new D();

    a1->print();
    a2->print();
}