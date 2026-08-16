#include <stdio.h>

int main()
{
    float principal, rate, years, interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &years);

    interest = (principal * rate * years) / 100;

    printf("\nPrincipal      = %.2f\n", principal);
    printf("Rate           = %.2f%%\n", rate);
    printf("Time           = %.2f years\n", years);
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}