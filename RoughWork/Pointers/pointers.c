#include <stdio.h>

int main() {

    int a = 5, b = 6;
    int *p, *r;

    p = &a;
    *p = 8;
    r = p;

    printf("dereferencing p gives %d \n",*p);
    printf("value of a is %d \n",a);
    printf("value of pointer is %p \n",p);
    printf("value of pointer is %p \n",r);  

}