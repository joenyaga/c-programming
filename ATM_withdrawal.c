/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to allow customer to make withdrawals
Date:06/10/2026
*/
#include <stdio.h>
int main() {
    float balance = 50000;
    float withdrawal;

    while (balance > 0) {
        printf("Enter withdrawal amount (0 to stop): ");
        scanf("%f", &withdrawal);

        if (withdrawal == 0) {
            break;
        }

        if (withdrawal > balance) {
            printf("Insufficient balance.\n");
            break;
        }

        if (withdrawal < 0) {
            printf("Invalid withdrawal amount.\n");
            continue;
        }

        balance = balance - withdrawal;

        printf("Remaining balance: KSh %.2f\n", balance);
    }

    printf("Transaction ended.\n");
    printf("Final balance: KSh %.2f\n", balance);

    return 0;
}
    