#include <stdio.h>

int main() {
    int num1 = 13; // Binary: ...01101
    int num2 = 10; // Binary: ...01010

    // The expression (num & 1) checks the Least Significant Bit (LSB).
    // If LSB is 1, it's odd. If LSB is 0, it's even.

    if (num1 & 1) { // 13 & 1 = 1 (True)
        printf("%d is Odd.\n", num1);
    } else {
        printf("%d is Even.\n", num1);
    }
    
    if (num2 & 1) { // 10 & 1 = 0 (False)
        printf("%d is Odd.\n", num2);
    } else {
        printf("%d is Even.\n", num2);
    }
    return 0;
}