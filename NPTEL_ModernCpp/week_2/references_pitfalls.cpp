#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a = 10, &b = a;
    int c = 20;
    cout << &a << " "<< &b << endl;
    b = c; // everything is 20 now
    cout << &c << " "<< &b << endl;

    cout << a << endl;

    int cris = 7, leo = 10;
    swap(cris, leo);
    cout << cris << " " << leo << endl;
}