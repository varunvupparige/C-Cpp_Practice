#include <stdio.h>


int main() {

    int i = 0, j =0;
    int n = 10;
    for (i = 0; i < n; i ++)
        for (j = 0;j < n; j++) {

            printf("j = %d\n",j);
            printf("i = %d\n",i);
        }
}