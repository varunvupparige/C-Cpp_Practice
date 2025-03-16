#include "kepler.h"

int cnt = 0;
const double e =0.5;
const double m = 2.2;
const double eps = 1e-15;


int main() {

    const double a = -100.0;
    const double b = 100.0;
    double roots = 0.0;

    assert(kepler(a)*kepler(b) <= 0);
    roots = bisection(kepler,a,b);
    printf("root of the equation is %lf \n",roots);
    printf("no of fn calls is %d \n",cnt);

}