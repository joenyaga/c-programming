/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to convert to celsius
Date:12/10/2026
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f\n",
           convertToCelsius(fahrenheit));

    return 0;
}