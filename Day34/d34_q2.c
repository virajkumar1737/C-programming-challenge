#include <stdio.h>

int main() {
    int n, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("Array after deletion: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

/* Sample Test Case:
Input:
5
10 20 30 40 50
3
Output:
10 20 40 50
*/