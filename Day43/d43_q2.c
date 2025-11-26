#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, isPal = 1;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (int i = 0; i < len/2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }

    if (isPal) printf("Palindrome");
    else printf("Not a Palindrome");

    return 0;
}
