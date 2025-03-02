#include <stdio.h>

int main() {

    int a[5] = {0,1,2,3,4}, *p,*b[1];

    p = a; /*equivalent to p = &a[0] */
    
    for (int i = 0; i < 5; ++i) {

        printf("p is %d\n",*(p++));
    }
}