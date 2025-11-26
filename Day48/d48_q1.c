#include <stdio.h>
#include <string.h>

int main() {
    char a[1000], b[1000], temp[2000];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove newlines
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;

    // Create a+a
    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
