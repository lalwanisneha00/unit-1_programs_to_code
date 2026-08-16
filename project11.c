#include <stdio.h>

#define GRAMS_PER_KG 1000

int main()
{
    float grams, kilograms;

    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    kilograms = grams / GRAMS_PER_KG;

    printf("%.2f grams = %.3f kg\n", grams, kilograms);

    return 0;
}