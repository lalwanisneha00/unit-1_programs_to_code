#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, total;
    float average;

    printf("Enter marks of subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &marks3);

    total   = marks1 + marks2 + marks3;
    average = (float)total / 3;

    printf("\nTotal   = %d\n", total);
    printf("Average = %.2f\n", average);

    if (marks1 < 35 || marks2 < 35 || marks3 < 35)
    {
        printf("Result  = Fail (below 35 in a subject)\n");
    }
    else if (average >= 70)
    {
        printf("Result  = Distinction\n");
    }
    else if (average >= 60)
    {
        printf("Result  = First class\n");
    }
    else if (average >= 50)
    {
        printf("Result  = Second class\n");
    }
    else if (average >= 35)
    {
        printf("Result  = Third class\n");
    }
    else
    {
        printf("Result  = Fail\n");
    }

    return 0;
}