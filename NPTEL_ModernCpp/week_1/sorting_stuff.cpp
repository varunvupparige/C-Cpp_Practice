// The script to practice few sorting algos stuff

#include <iostream>
#include <algorithm>

bool compare(int a, int b) {
    return (a > b);
}

int main() {

    int data[] = {2, 56, 12, 98, 0, -5};

    std::sort(data, data + 6, compare);

    for(auto i: data) { // i is element of itself and not its index
        std::cout << i << std::endl;
    }
}