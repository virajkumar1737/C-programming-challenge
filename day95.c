#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1; // Top index of the stack (initially empty)

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow! Cannot push %d.\n", data);
        return;
    }
    stack[++top] = data; // Increment top, then insert
    printf("Pushed %d\n", data);
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow! (Returned -1)\n");
        return -1;
    }
    return stack[top--]; // Return value, then decrement top
}

int peek() {
    if (top == -1) {
        printf("Stack is Empty! (Returned -1)\n");
        return -1;
    }
    return stack[top]; // Return value without changing top
}

int main() {
    push(10); push(20);
    printf("Peek: %d\n", peek()); // 20
    printf("Popped: %d\n", pop()); // 20
    printf("Popped: %d\n", pop()); // 10
    pop(); // Underflow
    return 0;
}