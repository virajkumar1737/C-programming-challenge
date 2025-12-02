#include <stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1, rear = -1; // Front and rear indices

void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1) front = 0; // Initialize front on first insert
    queue[++rear] = data;      // Increment rear, then insert
    printf("Enqueued %d\n", data);
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! (Returned -1)\n");
        return -1;
    }
    int item = queue[front++]; // Return item, then increment front
    
    // Reset queue if it becomes logically empty
    if (front > rear) {
        front = rear = -1;
    }
    return item;
}

int main() {
    enqueue(10); enqueue(20);
    printf("Dequeued: %d\n", dequeue()); // 10
    enqueue(30);
    printf("Dequeued: %d\n", dequeue()); // 20
    return 0;
}