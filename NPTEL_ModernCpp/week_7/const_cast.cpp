#include <iostream>
using namespace std;

int main() {

    const int i = 30;
    const int *p;
    
    p = &i;

    int l = 7;
    p = &l; // can change address but not data

    int x = 7;
    int * const y = &x;
    *y = 80; // can change the data but not address

    const int z = 10;
    const int *ptr = &z;

    cout << const_cast<int&>(z);
}