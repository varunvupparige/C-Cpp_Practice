#include "stdafx.h"
using namespace std;
#include <iostream>

unsigned int fact(int x) { return(x*fact(x-1)); }

int main() {
    int x, y = 10;
    x = 4;
    y = fact(x);
    std::cout << y << std::endl;
}