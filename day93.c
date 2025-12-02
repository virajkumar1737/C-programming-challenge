#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;
Node *head = NULL; 

// (Include the insertAtHead and display functions for context)

void deleteAtHead() {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    Node *temp = head; // Store the current head
    head = head->next; // Move head to the next node
    free(temp);        // Free the old head node memory
}

int main() {
    // Requires insertAtHead and display functions from previous days
    // insertAtHead(30); insertAtHead(20); insertAtHead(10);
    // display(); // 10 -> 20 -> 30 -> NULL
    // deleteAtHead();
    // display(); // 20 -> 30 -> NULL
    return 0;
}