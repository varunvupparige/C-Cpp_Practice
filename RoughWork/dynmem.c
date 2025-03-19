#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[5];
    int *p;
    p = a;

    for (int i = 0; i < 5; ++i) {

        p[i] = i+1;
        printf("%d \n",*(p+i)+6);
    }

    int *ptr = (int *)malloc(sizeof(int));
    int *ptr1 = (int *)malloc(20);

    int *ptr_calloc = (int *)calloc(sizeof(int),20);
}