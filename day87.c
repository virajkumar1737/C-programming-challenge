#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("output.txt", "r"); // "r" for read mode

    if (fp == NULL) {
        printf("Error opening file! Make sure output.txt exists.\n");
        return 1;
    }

    printf("Content of the file:\n");
    // Read character by character until End Of File (EOF)
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}