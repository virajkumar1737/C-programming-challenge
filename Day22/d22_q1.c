// Q43: Strong number
#include <stdio.h>

int main() {
    int n, temp, rem, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(n > 0) {
        rem = n % 10;
        fact = 1;
        for(int i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }

    if(sum == temp)
        printf("%d is a Strong Number.\n", temp);
    else
        printf("%d is not a Strong Number.\n", temp);

    return 0;
}