#include <iostream>
using namespace std;

class ClassA {
    public:
        static void func() { cout << "C++" << endl; }
};

class ClassB : private ClassA {
    public:
    ClassB() { (new ClassA)->func(); }
};

int main() {
    ClassB t1;
    return 0;
}