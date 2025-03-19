#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *next;
}list;

list* create_list(int d) {
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

list* array_to_list(int arr[], int n) {

    list* head = create_list(arr[0]);
    for(int i = 1; i < n; ++i) {
        head = add_to_front(arr[i],head);
    }
    return head;
}

void print_list(list *head) {
    while (head != NULL) {
        printf("%d -> ",head->data);
        head = head -> next;
    }
}

int main() {
    list* head = create_list(4);
    head = add_to_front(5,head);
    print_list(head);

    int arr[] = {5, 96, 2, 3, 5}; 
    list* head_arr = array_to_list(arr[],5);
    print_list(head_arr);
}
