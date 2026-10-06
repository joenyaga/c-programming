/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to calculate and display the electricity consumption
Date:06/10/2026
*/

#include <stdio.h>

int main() {
    int units;

    for (int household = 1; household <= 10; household++) {
        printf("Enter electricity units for household %d: ", household);
        scanf("%d", &units);

        printf("Household %d consumed %d units.\n", household, units);
    }

    return 0;
}