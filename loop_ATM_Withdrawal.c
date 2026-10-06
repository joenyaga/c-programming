/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Date:5/10/2026
Version:5
*/

#include <stdio.h>
int main() {
	float balance,withdrawal;
	printf("Enter account balance: ");
	scanf("%f",&balance);
	
	while (balance>0){
		printf("Enter amount to withdraw: ");
		scanf("%f",&withdrawal);
		
		balance=balance-withdrawal;
		
		printf("Balance after withdrawal:%.2f\n",balance);
		
	}
	printf("Account balance is zero or negative.\n");
	
	return 0;
}