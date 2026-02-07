// This script to learn about using iterators with string class

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> cars = {"cars", "trucks", "jeep", "bike"};
    std::vector<std::string>::iterator i;

    for(i = cars.begin(); i != cars.end(); ++i) {
        std::cout << *i << std::endl;
    }

}