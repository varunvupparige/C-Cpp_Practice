#include "bisection.h"

double fct2(double f(double x), double a, double b) {
    static int cnt = 0;

    double m = (a+b)/2.0;
    double n;

    ++cnt;

    printf(" m value is %lf \t",m);
    printf("f(m) is %lf \n",f(m));
    if (f(m) == 0.0 || b-a < 1e-10) {
        return m;
    }

    else if (f(m)*f(a) < 0.0) {
        return fct2(f,a,m),cnt;
    }

    else {
        return fct2(f,m,b),cnt;
    }
}