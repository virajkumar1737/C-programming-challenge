#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i <= n-k; i++) {
        int f = 0;
        for (int j = i; j < i+k; j++) {
            if (a[j] < 0) {
                printf("%d ", a[j]);
                f = 1;
                break;
            }
        }
        if (!f) printf("0 ");
    }
}
