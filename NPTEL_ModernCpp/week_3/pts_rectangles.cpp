// script to use classes and initialize points of rectangles

#include <iostream>
using namespace std;

class Point {
    public:
        int x; int y;
};

class Rectangle { public:
    Point TL;
    Point BR;

    void compute_area() {
        cout << abs(TL.x - BR.x) * abs(BR.y - TL.y);
    }
};

int main() {
    Rectangle sus = {{0,2},{3,5}};
    cout << "[(" << sus.TL.x << " " << sus.TL.y << ") ("
        << sus.BR.x << " " << sus.BR.y << ")]";
    sus.compute_area();
}
