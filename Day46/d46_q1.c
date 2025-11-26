#include <stdio.h>

int isVowel(char c) {
    char v[] = "aeiouAEIOU";
    for (int i=0; v[i]!='\0'; i++)
        if (c == v[i]) return 1;
    return 0;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    for (int i=0; str[i]!='\0'; i++) {
        if (!isVowel(str[i]))
            printf("%c", str[i]);
    }

    return 0;
}
