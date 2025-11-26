#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int lastStart = 0;

    for (int i=0; str[i]!='\0'; i++) {
        if (str[i] == ' ')
            lastStart = i+1;
    }

    for (int i=0; str[i] != '\0'; i++) {
        if (i == lastStart) break;
        if (i == 0 || str[i-1] == ' ')
            printf("%c.", str[i]);
    }

    printf("%s", &str[lastStart]);

    return 0;
}
