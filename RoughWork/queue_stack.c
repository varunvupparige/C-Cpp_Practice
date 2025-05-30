#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAXLEN 1000

typedef struct {
    int a[MAXLEN];
    int front;
    int rear;
}Queue;


void init(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

bool isFull(Queue *q) {

    if (q->rear == (MAXLEN-1)) return true;
    
    return false;
}

bool isEmpty(Queue *q) {

    if((q->front > q->rear) || (q->front == -1)) return true;
    return false;
}

int peek(Queue *q) {

    if (q->front == -1) {
        printf("Queue is Empty, Nothing to peek lol");
        return -1;
    }

    return (q->a[q->front]);
}

void enqueue(Queue *q, int ele) {
    if (isFull(q) == true ) {
        printf("cant add anything; queue is full");
        return;
    }

    if (q->front == -1) {
        q->front = 1;
    }

    q->rear++;
    q->a[q->rear] = ele;
}

void dequeue(Queue *q) {

    if (isFull(q) == true) {
        printf("Nothing left to remove");
    }

    q->front++;

}


typedef struct {
    int a[MAXLEN];
    int top;
}Stack;


void reset(Stack *s) {
    s->top == -1;
}

void push(Stack *s, int ele) {
    s->top++;
    s->a[s->top] = ele;
}

void pop(Stack *s) {
    s->top--;
}

int top(Stack *s) {

    return (s->a[s->top]);
}

bool isEmpty(Stack *s) {

    if (s->top == -1) return true;
    return false;
}

bool isFull(Stack *s) {
    if (s->top == (MAXLEN-1)) return true;
    return false;
}

int main() {
    printf("Queue_Stack");
    return 0;
}