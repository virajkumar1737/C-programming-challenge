#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int sum = 0, max = -1000000000;

    for (int i = 0; i < k; i++) sum += a[i];
    max = sum;

    for (int i = k; i < n; i++) {
        sum += a[i] - a[i-k];
        if (sum > max) max = sum;
    }

    printf("%d", max);
}
