#include "bubble.h"

void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble (int arr[], int size) {

    for (int i = 0; i < size-1; ++i) {
        for (int j = size-1; j > i; --j) {
            if (arr[j-1] > arr[j]) {
                ++cnt;
                swap(&arr[j-1],&arr[j]);
            }
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size;i++) {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}