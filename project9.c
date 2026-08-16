#include <stdio.h>

#define RATE 48

int main()
{
    float rupees, dollars;

    printf("Enter amount in rupees: Rs. ");
    scanf("%f", &rupees);

    dollars = rupees / RATE;

    printf("Rs. %.2f = $%.2f\n", rupees, dollars);

    return 0;
}