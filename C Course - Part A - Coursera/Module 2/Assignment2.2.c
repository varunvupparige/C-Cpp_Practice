#include <stdio.h>
#include <math.h>

int main(void) {

    double number;
    double lol;
    printf("enter a value in radians: ");
    scanf("%lf", &number);
    lol = sin(number);
    printf("sine of the entered number is %.2lf", lol);
    return 0;

}