// Q31: Print binary representation of a number
#include <stdio.h>

int main() {
    int num, binary = 0, rem, place = 1, temp;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    
    while (num != 0) {
        rem = num % 2;
        binary = binary + rem * place;
        place *= 10;
        num /= 2;
    }
    
    printf("Binary representation of %d = %d\n", temp, binary);
    return 0;
}