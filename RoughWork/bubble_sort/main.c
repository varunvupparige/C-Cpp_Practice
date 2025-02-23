#include "bubble.h"

int cnt = 0;

int main() {

    int arr[] = {55,3,5,42,4,66};
    int size = 6;

    //int cnt = 0;

    printf("Unordered Array is \n");
    print(arr,size);

    bubble(arr,size);
    printf("Ordered Array is \n");
    print(arr,size);

    printf("%d",cnt);
}