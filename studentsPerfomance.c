/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to calculate student's total marks for three subjects
Date:08/10/2026
*/
#include <stdio.h>

float calculateTotal(float mark1, float mark2, float mark3)
{
    return mark1 + mark2 + mark3;
}

float calculateAverage(float total)
{
    return total / 3;
}

void displayResult(float average)
{
    if (average >= 50)
    {
        printf("Result: Passed\n");
    }
    else
    {
        printf("Result: Failed\n");
    }
}

int main()
{
    float mark1, mark2, mark3;
    float total, average;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &mark1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &mark2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &mark3);

    total = calculateTotal(mark1, mark2, mark3);
    average = calculateAverage(total);

    printf("\nTotal marks: %.2f\n", total);
    printf("Average mark: %.2f\n", average);

    displayResult(average);

    return 0;
}