/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to return total fare
Date:12/10/2026
*/
#include <stdio.h>

float calculateFare(float distance)
{
    return distance * 50;
}

int main()
{
    float distance;

    printf("Enter distance in kilometers: ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n",
           calculateFare(distance));

    return 0;
}