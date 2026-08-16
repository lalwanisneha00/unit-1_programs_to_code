#include <stdio.h>

#define DOLLAR_RATE 48
#define POUND_RATE  70

int main()
{
    float dollars, rupees, pounds;

    printf("Enter amount in dollars: $");
    scanf("%f", &dollars);

    rupees = dollars * DOLLAR_RATE;
    pounds = rupees / POUND_RATE;

    printf("$%.2f = Rs. %.2f = %.2f pounds\n", dollars, rupees, pounds);

    return 0;
}