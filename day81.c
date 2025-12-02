#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *arr;
    int old_N = 3;
    int new_N = 5;

    // Initial allocation
    arr = (int*)malloc(old_N * sizeof(int));
    if (arr == NULL) return 1;
    arr[0] = 1; arr[1] = 2; arr[2] = 3;
    printf("Original array (size %d): 1 2 3\n", old_N);

    // Reallocate memory to the new size (5 elements)
    int *new_arr = (int*)realloc(arr, new_N * sizeof(int));

    if (new_arr == NULL) {
        printf("Reallocation failed!\n");
        free(arr);
        return 1;
    }
    
    // Update the pointer (realloc might return a different address)
    arr = new_arr; 
    
    // Assign values to the new elements
    arr[3] = 4; arr[4] = 5; 

    printf("Resized array (size %d): ", new_N);
    for (int i = 0; i < new_N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free the memory
    return 0;
}