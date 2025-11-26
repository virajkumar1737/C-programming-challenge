#include <stdio.h>

int main() {
    int n, i, largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    if(arr[0] > arr[1]) { largest = arr[0]; second = arr[1]; }
    else { largest = arr[1]; second = arr[0]; }

    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest element: %d\n", second);
    return 0;
}

/* Sample Test Case:
Input:
5
10 40 20 30 50
Output:
Second largest element: 40
*/