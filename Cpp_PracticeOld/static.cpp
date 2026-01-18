#include <iostream>

struct Entity {

    static int x, y;

    static void print() {
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x;
int Entity::y;

int main() {

    Entity e;
    Entity e1;

    e.x = 5; //wrong way to reference static class variable//
    e.y = 6;

    e1.x = 10;
    e1.y = 15;

    Entity::x;
    Entity::y;

    e.print();
    e1.print();

    Entity::print();
    Entity::print();
}