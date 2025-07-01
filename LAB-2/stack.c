#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 100

int top = -1;
int stack[SIZE];

bool isEmpty() {
    return top == -1;
}

void push(int value) {
    if (top < SIZE - 1) {
        stack[++top] = value;
    } else {
        printf("Stack Overflow\n");
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int peep(int index) {
    if ((top - index + 1) >= 0) {
        return stack[top - index + 1];
    } else {
        printf("Invalid index\n");
        return -1;
    }
}

void change(int value, int index) {
    if ((top - index + 1) >= 0) {
        stack[top - index + 1] = value;
    } else {
        printf("Invalid index\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Peep 2nd element from top: %d\n", peep(2));
    change(1140, 2);
    printf("After change, peep 2nd element from top: %d\n", peep(2));
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());  
    return 0;
}
