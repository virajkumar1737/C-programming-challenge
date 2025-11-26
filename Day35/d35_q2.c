#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n;

    printf("Array after rotation: ");
    for(i = n - k; i < n; i++) printf("%d ", arr[i]);
    for(i = 0; i < n - k; i++) printf("%d ", arr[i]);
    return 0;
}

/* Sample Test Case:
Input:
5
1 2 3 4 5
2
Output:
4 5 1 2 3
*/