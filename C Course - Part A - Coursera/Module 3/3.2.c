#include <stdio.h>
#include <math.h>

void printTrigTable(double start, double end, double step) {
    printf("  x       sin(x)      cos(x)\n");
    printf("-----------------------------\n");

    for (double x = start; x <= end; x += step) {
        printf("%.2f    %.4f    %.4f\n", x, sin(x), cos(x));
    }
}

int main() {
    double start = 0.0;
    double end = 1.0;
    double step = 0.1;

    printTrigTable(start, end, step);

    return 0;
}
