// Q40: 1's Complement of a binary number
#include <stdio.h>

int main() {
    long binary, onesComplement = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while(binary > 0) {
        rem = binary % 10;
        if(rem == 0)
            onesComplement += 1 * base;
        else
            onesComplement += 0 * base;

        binary /= 10;
        base *= 10;
    }

    printf("1's Complement = %ld\n", onesComplement);
    return 0;
}