#include <stdio.h>

typedef struct{ float re; float im; }complex;

void multi(complex *a, complex *b, complex *c) {

    a->re = (b->re)*(c->re) - (b->im)*(c->im);
    a->im = (b->im)*(c->re) + (b->re)*(c->im);
}

int main() {

    complex p,q,r;
    q = {20, 15};
    r = {15, 20};
    multi(&p,&q,&r);

    printf("Real Part is %f \n",p.re);
    printf("Imag Part is %f \n",p.im);
}
