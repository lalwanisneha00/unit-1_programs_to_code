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

    return 0;
}