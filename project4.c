#include <stdio.h>

int main()
{
    int a, b;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    quotient = (float)a / b;

    printf("Quotient = %.2f\n", quotient);

    return 0;
}