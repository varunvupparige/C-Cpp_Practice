#include <stdio.h>

#define MAX_LEN 1000
#define EMPTY -1
#define FULL (MAX_LEN - 1)

typedef enum boolean {TRUE = 1, FALSE = 0} boolean;

typedef struct {
    int s[MAX_LEN];
    int top;
}stack;

void reset(stack *stk) {

    stk->top = EMPTY;
}

void push(int n, stack *stk) {
    stk -> top++;
    stk -> s[stk->top] = n;
}

int pop(stack *stk) {
    return (stk -> s[stk->top--]);
}

boolean empty(stack *stk) {
    return ((boolean)(stk -> top == EMPTY));
}

boolean full(stack *stk) {
    return ((boolean)(stk -> top == FULL));
}

int main() {

    stack a;
    int b[5] = {7,8,144,16,17};
    reset(&a);

    for (int i = 0; i < 5; i++) {
        push(b[i],&a);
        printf("%d\t",a.s[a.top]);
    }
    printf("\n");
    while (!empty(&a)) {
        printf("%d\t",pop(&a));
    }
}