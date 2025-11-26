#include <stdio.h>

int main() {
    char str[1000];

    // Input with spaces
    fgets(str, sizeof(str), stdin);

    // Print each char in new line
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
