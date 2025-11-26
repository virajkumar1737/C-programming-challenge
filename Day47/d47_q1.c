#include <stdio.h>

int main() {
    char a[1000], b[1000];
    int freq[256] = {0};

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    for (int i = 0; a[i] != '\0' && a[i] != '\n'; i++)
        freq[(unsigned char)a[i]]++;

    for (int i = 0; b[i] != '\0' && b[i] != '\n'; i++)
        freq[(unsigned char)b[i]]--;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
