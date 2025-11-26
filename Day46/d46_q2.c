#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
            if (freq[c - 'a'] == 2) {
                printf("%c", c);
                return 0;
            }
        }
    }

    printf("-1");
    return 0;
}
