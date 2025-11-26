#include <stdio.h>

int main() {
    long total_seconds; // Use long for potentially large number of seconds
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%ld", &total_seconds);

    long remaining_seconds = total_seconds;

    // 1. Calculate Hours
    hours = remaining_seconds / 3600; // 3600 seconds in an hour
    remaining_seconds = remaining_seconds % 3600; // Seconds left after calculating hours

    // 2. Calculate Minutes
    minutes = remaining_seconds / 60; // 60 seconds in a minute

    // 3. Calculate remaining Seconds
    seconds = remaining_seconds % 60; // Seconds left after calculating minutes

    printf("\nTime Conversion:\n");
    printf("%ld seconds is equal to: %d hours, %d minutes, and %d seconds.\n", 
           total_seconds, hours, minutes, seconds);
    
    // Formatted output
    printf("Formatted Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}