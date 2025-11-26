#include <stdio.h>

int main() {
    int n;
    // We use 'long' for sum to prevent potential overflow for large 'n'
    long sum; 

    printf("Enter the number (n) up to which you want to find the sum: ");
    scanf("%d", &n);

    // Input validation: Natural numbers are positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    // 🌟 Direct Formula: Sum = n * (n + 1) / 2
    sum = (long)n * (n + 1) / 2;

    printf("\nThe sum of the first %d natural numbers is: %ld\n", n, sum);

    return 0;
}