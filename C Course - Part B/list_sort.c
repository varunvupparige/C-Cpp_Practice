#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct list {
    int data;
    struct list *next;
}list;

list* create_list(int d)
    list* head = (list *)malloc(sizeof(list));
    if (head == NULL) {
        printf("Memory allocation failed!\n");
        return NULL; // Avoid crashes
    }

    head -> data = d;
    head -> next = NULL;
    return head;
}

list* add_to_front(int d, list* h) {

    list* head = create_list(d);
    head -> next = h;
    return head;
}

void print_list(list *head) {
    int i = 0;
    while (head != NULL) {
        ++i;
        if((i % 5) == 0) printf("\n");
        printf("%d -> ",head->data);
        head = head -> next;
    }
}

void bubble_sort(list* head) {

    list* ptr1;
    list* ptr2 = NULL;
    int swapped;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != NULL) {
            if (ptr1->data > ptr1->next->data) {
                int temp = ptr1->next->data;
                ptr1->next->data = ptr1->data;
                ptr1->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
    }while(swapped);
}



int main() {

    srand(time(NULL));
    int N = 100;
    list* head = create_list(rand() % 101);

    for(int i = 1; i < N - 1; ++i) {
        head = add_to_front(rand() % 101, head);
    }

    printf("------------unordered list------- \n");
    print_list(head);
    printf("\n-------- ordered list-------- \n");
    bubble_sort(head);
    print_list(head);
}
