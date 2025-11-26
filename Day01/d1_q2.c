#include <stdio.h>

int main() {
    int num1, num2;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);

    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}