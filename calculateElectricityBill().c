/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to calculate electricity bill
Date:12/10/2026
*/
#include <stdio.h>

float calculateElectricBill(int units)
{
    float bill = 0;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main()
{
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total electricity bill = KSh. %.2f\n",
           calculateElectricBill(units));

    return 0;
}