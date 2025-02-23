#include <stdio.h>
#include <string.h>

void swap( int* k, int* y) {
    int temp = *k;
    *k = *y;
    *y = temp;
}

int main() {

    int i = 31, j = 4;
    int *p;

    int k = 50; int l = 30;

    p = &i;
    j = *p;

    printf("i = %d, j = %d\n", i, j);
    printf("p = %d\n", p);
    swap(&k,&l);
    printf("k = %d, l = %d\n", k,l);

}