#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("output.txt", "a"); // "a" for append mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "\n--- Appended Data ---\n");
    fprintf(fp, "This line was appended later at the end of the file.\n");

    fclose(fp);
    printf("Successfully appended new data to output.txt\n");
    return 0;
}