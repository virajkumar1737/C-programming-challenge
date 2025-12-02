#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("output.txt", "w"); // "w" for write mode (creates/overwrites file)

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "This is the first line written in C.\n");
    fprintf(fp, "File I/O is crucial for storage.\n");

    fclose(fp); // Close the file to save changes
    printf("Successfully wrote to output.txt\n");
    return 0;
}