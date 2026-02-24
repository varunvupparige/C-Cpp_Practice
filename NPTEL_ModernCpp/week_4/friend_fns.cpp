#include <iostream>
#include <algorithm>
using std::cout;

class MyClass {
    int data;
    public:
        MyClass(int i) : data(i) { }
    
        void friend print(const MyClass &a);
};

void print(const MyClass& a) {
    cout << "Data " << a.data;
}

int main() {
    MyClass trial(20);
    print(trial);
    cout << "LOL";   
}