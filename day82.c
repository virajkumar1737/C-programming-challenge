#include <stdio.h>
#include <stdlib.h>

// Function that safely frees memory and sets the pointer to NULL
void safeFree(int **ptr) {
    if (ptr != NULL && *ptr != NULL) {
        free(*ptr);  // Release the memory block
        *ptr = NULL; // Set the original pointer to NULL
        printf("Memory successfully freed and pointer set to NULL.\n");
    } else {
        printf("Pointer was already NULL or invalid.\n");
    }
}

int main() {
    int *data = (int*)malloc(sizeof(int));

    if (data != NULL) {
        *data = 99;
        printf("Value before free: %d\n", *data);
    }

    // Pass the address of the pointer (int**)
    safeFree(&data); 

    if (data == NULL) {
        printf("Pointer check: data is NULL (Safe).\n");
    }
    return 0;
}