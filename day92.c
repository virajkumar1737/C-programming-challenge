#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;
Node *head = NULL; 

// (Include the display function from Day 91 for testing)

void insertAtTail(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) return;
    newNode->data = data;
    newNode->next = NULL; // New tail node must point to NULL

    if (head == NULL) {
        head = newNode; // If list is empty, new node is the head
        return;
    }

    // Traverse to the last node
    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode; // Last node points to the new node
}

int main() {
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    // display(); // Output: List: 10 -> 20 -> 30 -> NULL
    return 0;
}