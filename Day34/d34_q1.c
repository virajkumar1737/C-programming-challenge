#include <stdio.h>

int main() {
    int n, pos, num, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position and element: ");
    scanf("%d %d", &pos, &num);

    for(i = n; i >= pos; i--)
        arr[i] = arr[i-1];
    arr[pos-1] = num;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

/* Sample Test Case:
Input:
5
10 20 30 40 50
3 25
Output:
10 20 25 30 40 50
*/