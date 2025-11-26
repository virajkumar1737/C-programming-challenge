#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], L[n], R[n], ans[n];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    L[0] = 1;
    for (int i = 1; i < n; i++) L[i] = L[i-1] * a[i-1];

    R[n-1] = 1;
    for (int i = n-2; i >= 0; i--) R[i] = R[i+1] * a[i+1];

    for (int i = 0; i < n; i++)
        ans[i] = L[i] * R[i];

    for (int i = 0; i < n; i++) printf("%d ", ans[i]);
}
