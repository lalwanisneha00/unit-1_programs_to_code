#include <stdio.h>

int main()
{
    float grossSalary, allowance, deduction, netSalary;

    printf("Enter gross salary: ");
    scanf("%f", &grossSalary);

    if (grossSalary > 10000)
    {
        allowance = grossSalary * 10 / 100;
        deduction = grossSalary * 3 / 100;
    }
    else if (grossSalary > 5000)
    {
        allowance = grossSalary * 7 / 100;
        deduction = grossSalary * 2 / 100;
    }
    else
    {
        allowance = 0;
        deduction = 0;
    }

    netSalary = grossSalary + allowance - deduction;

    printf("\nGross Salary = %.2f\n", grossSalary);
    printf("Allowance    = %.2f\n", allowance);
    printf("Deduction    = %.2f\n", deduction);
    printf("Net Salary   = %.2f\n", netSalary);

    return 0;
}