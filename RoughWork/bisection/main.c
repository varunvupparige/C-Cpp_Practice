#include "bisection.h"

int cnt = 0;

int main() {

    double a = -10.0, b = 10.0;
    double roots;
    roots = fct2(f,a,b);
    printf("root is %lf\n function calls = %lf\n",roots,cnt);

}