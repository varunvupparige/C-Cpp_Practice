#include <iostream>

using namespace std;

class Point {
    int x, y;

    public:
        Point(int _x, int _y) : x(_x), y(_y) { }
        //void change(Point *new_P) { this = new_P; }
        void show() { cout << x << ","<< endl; }
};

int main() {

    Point p1(10,20);
    Point p2(20,50);

    //p1.change(&p2);
    p1.show();
}

