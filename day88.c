#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int chars = 0, lines = 0, words = 0;
    char ch;
    int in_word = 0; // State machine: 1 if inside a word, 0 otherwise

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        
        if (ch == '\n') {
            lines++;
        }

        // Check for separators (space, tab, newline)
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            in_word = 0;
        } 
        // If we hit a non-separator character and we were previously NOT in a word, 
        // it marks the beginning of a new word.
        else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }
    
    // Adjust line count if file has content but doesn't end with a newline
    if (chars > 0 && ch != '\n') { lines++; }

    printf("File Statistics:\n");
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}