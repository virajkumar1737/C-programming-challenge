#include <stdio.h>
#include <stdarg.h> // For va_list, va_start, va_arg, va_end

// The first argument (count) tells the function how many variables to expect
int add_numbers(int count, ...) {
    int sum = 0;
    va_list args; // Pointer to the variable arguments list

    va_start(args, count); // Initialize the pointer, starting after 'count'

    for (int i = 0; i < count; i++) {
        // Retrieve the next argument (assumed to be int)
        sum += va_arg(args, int);
    }

    va_end(args); // Clean up the pointer
    return sum;
}

int main() {
    // The first parameter (3) is the number of arguments that follow
    printf("Sum of 10, 20, 30: %d\n", add_numbers(3, 10, 20, 30));
    // The first parameter (5) is the number of arguments that follow
    printf("Sum of 5, 5, 5, 5, 5: %d\n", add_numbers(5, 5, 5, 5, 5, 5));
    return 0;
}