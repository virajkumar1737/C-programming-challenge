#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number (num1): ");
    scanf("%d", &num1);
    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

    printf("\n--- Before Swap ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // 🌟 Swapping Logic without a third variable
    // Example: num1=10, num2=20
    num1 = num1 + num2; // num1 = 10 + 20 = 30
    num2 = num1 - num2; // num2 = 30 - 20 = 10 (Original num1 value)
    num1 = num1 - num2; // num1 = 30 - 10 = 20 (Original num2 value)

    printf("\n--- After Swap ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}