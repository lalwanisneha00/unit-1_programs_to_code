#include <stdio.h>

#define RATE 48

int main()
{
    float dollars, rupees;

    printf("Enter amount in dollars: $");
    scanf("%f", &dollars);

    rupees = dollars * RATE;

    printf("$%.2f = Rs. %.2f\n", dollars, rupees);

    return 0;
}
