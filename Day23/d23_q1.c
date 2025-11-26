// Q45: Sum of series 2/3 + 4/7 + 6/11 + ...
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 2, den = 3;
    for(int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum of series up to %d terms = %.2f\n", n, sum);
    return 0;
}