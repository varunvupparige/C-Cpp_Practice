#include <stdio.h>

#define MAX_LEN 100

typedef enum {true, false}boolean;

typedef struct {
    int a[MAX_LEN];
    int front;
    int rear;
}Queue;

void init(Queue* q) {
    q->front = -1;
    q->rear = 0;
}

void enqueue(Queue* q, int ele) {
    q->rear++;
    q->a[q->rear] = ele;;
}

void dequeue(Queue* q) {
    q->front++;       
}

boolean isFull(Queue* q) {
    return ((boolean)(q->rear == MAX_LEN));
}

boolean isEmpty(Queue* q) {
    return ((boolean)(q->front == -1));
}

int Peek(Queue* q) {
    return (q->a[q->front]);
}



