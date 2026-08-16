#include <stdio.h>

#define DISCOUNT_RATE 10

int main()
{
    float grossSales, discount, netSales;

    printf("Enter gross sales: ");
    scanf("%f", &grossSales);

    discount = grossSales * DISCOUNT_RATE / 100;
    netSales = grossSales - discount;

    printf("\nGross Sales = %.2f\n", grossSales);
    printf("Discount    = %.2f\n", discount);
    printf("Net Sales   = %.2f\n", netSales);

    return 0;
}