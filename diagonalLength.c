/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to calculate diagonal length of a rectangular window
Date:08/10/2026
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double length, width, diagonal;

    printf("Enter the length of the window: ");
    scanf("%lf", &length);

    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;

}