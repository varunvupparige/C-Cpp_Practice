#include <stdio.h>

int main() {

    int a = 5, b = 6;
    int *p;

    p = &a;
    *p = 8;

    printf("dereferencing p gives %d \n",*p);
    printf("value of a is %d \n",a);

}