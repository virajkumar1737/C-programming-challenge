#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int data; struct Node *next; } Node;
Node *head = NULL; 

void display() {
    Node *current = head;
    printf("List: ");
    // Traverse the list until the current pointer reaches NULL
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next; // Move to the next node
    }
    printf("NULL\n");
}

int main() {
    // Populate list (requires insert functions from previous days)
    // display(); 
    return 0;
}