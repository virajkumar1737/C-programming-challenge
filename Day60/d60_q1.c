#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i <= n-k; i++) {
        int m = a[i];
        for (int j = i; j < i+k; j++)
            if (a[j] > m) m = a[j];
        printf("%d ", m);
    }
}
