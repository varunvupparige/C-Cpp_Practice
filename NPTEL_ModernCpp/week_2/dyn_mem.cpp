#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    // c-style dynamic memory allocation
    int *x = (int *)malloc(sizeof(int));
    free(x);

    // new for allocating memory
    int *p = new int(5);
    delete p;

    // operator new for allocating memory
    int *q = (int *)operator new(sizeof(int));
    operator delete(q);

    // dynamically managed arrays in C++
    int *a = new int[3];
    a[0] = 10; a[1] = 20; a[2] = 25;
    for (int i = 0; i < 3; ++i) { cout << "a " << a << endl; }
    delete [] a;

    // placement new
    unsigned char buf[sizeof(int) * 2];
    int *pInt = new (buf) int(3); // takes a buffer address to place objects
    int *qInt = new (buf + sizeof(int)) int(7);

}