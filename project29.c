#include <stdio.h>

int main()
{
    float grossSales, discount, netSales;

    printf("Enter gross sales: ");
    scanf("%f", &grossSales);

    if (grossSales > 20000)
    {
        discount = grossSales * 15 / 100;
    }
    else if (grossSales > 10000)
    {
        discount = grossSales * 10 / 100;
    }
    else
    {
        discount = grossSales * 5 / 100;
    }

    netSales = grossSales - discount;

    printf("\nGross Sales = %.2f\n", grossSales);
    printf("Discount    = %.2f\n", discount);
    printf("Net Sales   = %.2f\n", netSales);

    return 0;
}