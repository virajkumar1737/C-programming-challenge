#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], sum[r];
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        sum[i] = 0;
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    printf("Row sums:\n");
    for(i = 0; i < r; i++)
        printf("Row %d = %d\n", i+1, sum[i]);
    return 0;
}