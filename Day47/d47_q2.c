#include <stdio.h>

int main() {
    char str[1000], longest[100], temp[100];
    int li=0, ti=0;

    fgets(str, sizeof(str), stdin);

    for (int i=0; str[i]!='\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            temp[ti++] = str[i];
        } else {
            temp[ti] = '\0';
            if (ti > li) {
                li = ti;
                for (int j=0; j<=ti; j++) longest[j] = temp[j];
            }
            ti = 0;
        }
    }

    printf("%s", longest);
    return 0;
}
