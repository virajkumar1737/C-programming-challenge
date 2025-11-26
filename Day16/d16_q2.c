// Q32: Check if a number is palindrome
#include <stdio.h>

int main() {
    int num, temp, rev = 0, rem;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    
    if (temp == rev)
        printf("%d is a Palindrome.\n", temp);
    else
        printf("%d is Not a Palindrome.\n", temp);
    
    return 0;
}