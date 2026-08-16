#include <stdio.h>

#define GRAMS_PER_KG 1000

int main()
{
    float kilograms, grams;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);

    grams = kilograms * GRAMS_PER_KG;

    printf("%.2f kg = %.2f grams\n", kilograms, grams);

    return 0;
}