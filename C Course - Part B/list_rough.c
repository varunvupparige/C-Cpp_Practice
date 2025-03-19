#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *next;
}list;



int main() {

    struct list a,b,c;
    a.data = 1;
    b.data = 2;
    c.data = 3;

    a.next = NULL;
    b.next = c.next = NULL;

    printf("%d \n",sizeof(a));

    a.next = &b;
    printf("%d \n",sizeof(a));


}