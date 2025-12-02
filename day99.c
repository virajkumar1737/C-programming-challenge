#include <stdio.h>

// Function to merge two halves
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2]; // Create temporary arrays

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    int i = 0; int j = 0; int k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements
    while (i < n1) { arr[k++] = L[i++]; }
    while (j < n2) { arr[k++] = R[j++]; }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Find the midpoint
        mergeSort(arr, l, m);    // Recursively sort the first half
        mergeSort(arr, m + 1, r);// Recursively sort the second half
        merge(arr, l, m, r);     // Merge the two sorted halves
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = 6;
    mergeSort(arr, 0, n - 1);
    printf("Sorted array (Merge Sort): ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}