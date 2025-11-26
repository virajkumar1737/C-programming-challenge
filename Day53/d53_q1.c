#include <stdio.h>

int pivotIndex(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += arr[i];

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) return i;
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("%d", pivotIndex(arr, n));
    return 0;
}
