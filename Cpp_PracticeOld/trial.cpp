#include <iostream>



void incre_1(int* value)
{
    (*value)++;
}
int lol = 10;
class City {
public:
    int year;
    int population;

    void add_pop(int increment) {
        population += increment;
    }
};

int main() {

    std::cout << "hello";

    City davangere;
    davangere.year = 1947;
    davangere.population = 150000;
    davangere.add_pop(10000);

}