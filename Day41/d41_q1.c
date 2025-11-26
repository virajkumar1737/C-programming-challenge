#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    // Take input including spaces
    fgets(str, sizeof(str), stdin);

    // Count until we hit '\0' or newline
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count++;
    }

    printf("%d", count);

    return 0;
}
