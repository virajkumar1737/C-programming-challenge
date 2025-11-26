#include <stdio.h>

void sort(int a[], int n) {
    for (int i=0;i<n;i++)
        for (int j=i+1;j<n;j++)
            if (a[j] < a[i]) {
                int t=a[i]; a[i]=a[j]; a[j]=t;
            }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    sort(a,n);
    printf("%d", a[k-1]);
}
