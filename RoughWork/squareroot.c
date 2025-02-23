#include <stdio.h>

float absval(float n) {

    if (n<0) {
        n = -n;
    }
    return n;
}
        

float sqroot(float n) {

    float guess = 1;
    float eps = 0.00001;

    while (absval(guess*guess - n) >= eps) {
        guess = (n/guess + guess)/2;
    }

    return guess;
}

int main() {

    printf("Square root of 30 = %f",sqroot(30));
}
