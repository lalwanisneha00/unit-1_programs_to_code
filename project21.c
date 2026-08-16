#include <stdio.h>

#define ALLOWANCE_RATE 10
#define DEDUCTION_RATE 3

int main()
{
    float grossSalary, allowance, deduction, netSalary;

    printf("Enter gross salary: ");
    scanf("%f", &grossSalary);

    allowance = grossSalary * ALLOWANCE_RATE / 100;
    deduction = grossSalary * DEDUCTION_RATE / 100;

    netSalary = grossSalary + allowance - deduction;

    printf("\nGross Salary = %.2f\n", grossSalary);
    printf("Allowance    = %.2f\n", allowance);
    printf("Deduction    = %.2f\n", deduction);
    printf("Net Salary   = %.2f\n", netSalary);

    return 0;
}