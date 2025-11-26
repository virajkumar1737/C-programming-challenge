#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area, circumference;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;
}