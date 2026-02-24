#include <iostream>
using namespace std;

class Base {
    public:
    int a;
    Base(int x) : a(x) { }
};

class derived : protected Base {
    int b;
    public:
        derived(int x, int y) : b(y), Base(x) { }
};

int main() {
    derived t1(10,20);
    Base t2(5);

    //cout << t1.a;
    cout << t2.a;
}