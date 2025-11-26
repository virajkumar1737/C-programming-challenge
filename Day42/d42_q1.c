#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = str[i];

        if (c >= 'A' && c <= 'Z') c += 32;  // convert uppercase to lowercase

        if (c >= 'a' && c <= 'z') {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}
