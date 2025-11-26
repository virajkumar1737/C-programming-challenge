#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                next = a[j];
                break;
            }
        }
        printf("%d", next);
        if (i != n - 1) printf(",");
    }
}
