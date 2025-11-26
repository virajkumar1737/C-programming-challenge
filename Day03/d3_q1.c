#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // 1. Get user input in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // 2. Apply the conversion formula: F = (C * 9/5) + 32
    // Note: Using 9.0/5.0 ensures floating-point division
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // 3. Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}