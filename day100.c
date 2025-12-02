#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FILENAME "todo.txt"

void addTask() {
    FILE *fp = fopen(FILENAME, "a"); // Append mode
    char task[100];
    if (fp == NULL) { printf("Error opening file.\n"); return; }

    printf("Enter task description (no spaces): ");
    scanf("%s", task); // Simplification: read one word
    
    fprintf(fp, "%s\n", task);
    fclose(fp);
    printf("Task added.\n");
}

void viewTasks() {
    FILE *fp = fopen(FILENAME, "r"); // Read mode
    char task[100];
    int i = 1;
    if (fp == NULL) { printf("No tasks found!\n"); return; }

    printf("\n--- To-Do List ---\n");
    // Read line by line
    while (fgets(task, sizeof(task), fp) != NULL) {
        printf("%d. %s", i++, task);
    }
    printf("------------------\n");
    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\nTo-Do List Manager\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        
        // Basic input validation
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear buffer
            continue;
        }

        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: printf("Exiting manager. Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 3);
    return 0;
}