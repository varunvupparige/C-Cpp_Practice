#include <iostream>
using namespace std;

class Trial {
    int x, y;
    public:
        void init(int a, int b) {
            this->x = b;
            y = a;
        }
        void get_x() {
            cout << "x = " << x << endl;
            cout << this << endl;
        }
};

int main() {

    Trial t;
    t.init(5,10);
    t.get_x();
    return 0;
}