#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, sizeof(str), stdin);

    char dd[3], mm[3], yy[5];
    strncpy(dd, str, 2); dd[2] = '\0';
    strncpy(mm, str+3, 2); mm[2] = '\0';
    strncpy(yy, str+6, 4); yy[4] = '\0';

    char *month[] = {"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    int m = (mm[0]-'0')*10 + (mm[1]-'0');

    printf("%s-%s-%s", dd, month[m], yy);

    return 0;
}
