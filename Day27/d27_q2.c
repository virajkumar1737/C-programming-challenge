// Q54: Symmetrical diamond pattern
#include <stdio.h>

int main() {
    int n = 4;

    // Upper half
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++)
            printf(" ");
        for(int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for(int i = n - 1; i >= 1; i--) {
        for(int j = n; j > i; j--)
            printf(" ");
        for(int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    return 0;
}