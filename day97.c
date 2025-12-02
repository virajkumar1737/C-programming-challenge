#include <stdio.h>
#include <stdbool.h> // For boolean type

void sieveOfEratosthenes(int n) {
    // Create a boolean array "isPrime[0..n]" and initialize all entries as true.
    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++) isPrime[i] = true;
    
    // Start with p = 2 (the first prime)
    for (int p = 2; p * p <= n; p++) {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p] == true) {
            // Mark all multiples of p (starting from p*p) as not prime
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    // Print all prime numbers
    printf("Prime numbers up to %d: ", n);
    for (int p = 2; p <= n; p++)
        if (isPrime[p])
            printf("%d ", p);
    printf("\n");
}

int main() {
    sieveOfEratosthenes(30);
    return 0;
}