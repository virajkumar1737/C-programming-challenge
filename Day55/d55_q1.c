#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int count = 0, candidate = -1;

    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = a[i];
        count += (a[i] == candidate) ? 1 : -1;
    }

    count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == candidate) count++;

    if (count > n / 2) printf("%d", candidate);
    else printf("-1");
}
