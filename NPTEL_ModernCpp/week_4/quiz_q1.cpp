#include <iostream>
using namespace std;

class Myclass {
    static int A;
    static int B;
    public:
        static void print() {
            cout << A << " " << B;
        }

        void setA(int a) {
            A = a;
        }

        void setB(int b) {
            B = b;
        }
};

int Myclass::A = 10;
int Myclass::B = 10;

int main() {

    Myclass t1, t2;
    t1.setA(4);
    t2.setB(5);
    Myclass::print();
}