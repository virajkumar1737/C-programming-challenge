// Q33: Check if a number is an Armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, sum = 0, digits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    
    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is Not an Armstrong number.\n", num);
    
    return 0;
}