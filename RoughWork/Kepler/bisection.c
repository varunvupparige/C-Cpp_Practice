#include "kepler.h"

double bisection(double f(double x),double a,double b) {

    double m = (a+b)/2.0;
    double n;
    ++cnt;

    printf(" m value is %lf \t",m);
    printf("f(m) is %lf \n",f(m));
    if (f(m) == 0.0 || b-a < eps) {
        return m;
    }

    else if (f(m)*f(a) < 0.0) {
        return bisection(f,a,m);
    }

    else {
        return bisection(f,m,b);
    }
}
