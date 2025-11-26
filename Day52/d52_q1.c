#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;   // go left to find first occurrence
        } else {
            low = mid + 1;
        }
    }
    return ans;   // returns -1 if no ceil exists
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);

    printf("%d", ceilIndex(arr, n, x));
    return 0;
}
