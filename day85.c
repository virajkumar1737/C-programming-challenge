#include <stdio.h>

int main() {
    int a = 10; // Binary: 00001010
    int b = 20; // Binary: 00010100

    printf("Before swap: a = %d, b = %d\n", a, b);

    // XOR Swap Logic (requires 3 steps)
    // 1. a = a ^ b  (a now holds the difference marker)
    a = a ^ b; 
    // 2. b = a ^ b  (b becomes original a)
    b = a ^ b; 
    // 3. a = a ^ b  (a becomes original b)
    a = a ^ b; 

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}