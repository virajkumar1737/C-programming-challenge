#include <stdio.h>
#include <stdlib.h>

// Node structure definition
typedef struct Node {
    int data;
    struct Node *next; // Pointer to the next node
} Node;

Node *head = NULL; // Global head pointer, initially NULL

void insertAtHead(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) return; // Check for memory allocation failure
    
    newNode->data = data;
    newNode->next = head; // New node points to the old head
    head = newNode;        // Head now points to the new node
}

void display() {
    Node *current = head;
    printf("List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    insertAtHead(30);
    insertAtHead(20);
    insertAtHead(10);
    display(); // Output: List: 10 -> 20 -> 30 -> NULL
    return 0;
}