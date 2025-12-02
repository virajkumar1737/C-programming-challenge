#include <stdio.h>

int main() {
    FILE *source = fopen("output.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char ch;

    if (source == NULL || dest == NULL) {
        printf("Error opening file(s)! Ensure output.txt exists.\n");
        return 1;
    }

    // Read char-by-char from source and write char-by-char to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest); 
    }

    printf("File copied successfully from output.txt to copy.txt\n");
    fclose(source);
    fclose(dest);
    return 0;
}