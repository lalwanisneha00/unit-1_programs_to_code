#include <stdio.h>

#define PI (22.0 / 7.0)

int main()
{
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area          = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea          = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}