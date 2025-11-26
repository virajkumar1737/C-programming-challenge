// Q44: Sum of series 1 + 3/4 + 5/6 + ...
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1, den = 2;
    for(int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Sum of series up to %d terms = %.2f\n", n, sum);
    return 0;
}