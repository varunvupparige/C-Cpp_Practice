#include <stdio.h>
#include <assert.h>
#include <math.h>

extern int cnt;
const extern double eps;
const extern double e;
const extern double m;

double kepler(double x);

double bisection(double (*f)(double),double a, double b);