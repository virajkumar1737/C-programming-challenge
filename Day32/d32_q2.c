// Q64: Find the digit that occurs most in a number
#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};
    printf("Enter an integer: ");
    scanf("%ld", &num);

    while(num > 0) {
        int rem = num % 10;
        count[rem]++;
        num /= 10;
    }

    int max = count[0], digit = 0;
    for(int i = 1; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            digit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", digit, max);
    return 0;
}