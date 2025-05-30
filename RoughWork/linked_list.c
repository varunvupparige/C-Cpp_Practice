#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct list {
    int data;
    struct list* link;
}list;


list* create_list(int d) {
    
    list* head = (list *)malloc(sizeof(list));
    if (head == NULL) {
        printf("Allocation Failed");
        return NULL;
    }
    head -> data = d;
    head -> link = NULL;

    return head;
}


list* addtofront(int d, list* h) {
    list* head = create_list(d);
    head -> link = h;
    return head;
}

list* addtoback(int d, list* h) {

    list* new_head = create_list(d);
    if (h == NULL) {
        return new_head;
    }

    list* temp = h;
    while (temp->link != NULL) {
        temp = temp->link;
    }

    temp->link = new_head;
    return h;

}

int main() {

    list* head = create_list(5);
    printf("data 1: %d \n",head->data);
    head = addtofront(10,head);
    head = addtofront(11,head);
    printf("data 2: %d \n",head->data);
}
