// Q25: Basic calculator using switch-case
#include <stdio.h>

int main() {
    float a, b;
    char op;
    
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero not allowed.\n");
            break;
        case '%':
            if ((int)b != 0)
                printf("Result = %d\n", (int)a % (int)b);
            else
                printf("Error: Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}