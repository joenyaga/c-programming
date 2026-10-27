/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:Program demonstrating 1D, 2D and 3D arrays.
Date:26/10/2026
version:5
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float revenue[7];
    float totalRevenue = 0, averageRevenue;

    printf("WEEKLY REVENUE TRACKER\n");

    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    printf("\nTotal weekly revenue: %.2f\n", totalRevenue);
    printf("Average daily revenue: %.2f\n", averageRevenue);

    int occupancy[5][10];
    int occupied, vacant;

    printf("\nROOM OCCUPANCY - ONE BRANCH\n");

    srand(time(NULL));

    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               floor + 1, occupied, vacant);
    }

    int chain[3][5][10];
    int totalOccupied = 0;

    printf("\nMULTIPLE BRANCHES\n");

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n",
           totalOccupied);

    return 0;
}