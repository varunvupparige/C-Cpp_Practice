#include <iostream>
using namespace std;

class classA {
    public:
        classA() { cout << "A ";}
        ~classA() { cout << "-A"; }
};


class classB : public classA {
    public:
        classB() { cout << "B ";}
        ~classB() { cout << "-B"; }
};


class classC : public classB {
    //classB b;
    public:
        classC() { cout << "C ";}
        ~classC() { cout << "-C"; }
};


int main() {
    classC obj;
    return 0;
}