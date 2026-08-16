#include <stdio.h>

int main()
{
    float side, area, perimeter;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area      = side * side;
    perimeter = 4 * side;

    printf("\nArea      = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}