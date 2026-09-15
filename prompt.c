/*
Author:Joe
Reg Number:BCS-05-0071/2026
Dscription:Prompt Program
Date:15/09/2026
Version:5
*/

//pre-processor directive
#include <stdio.h>

int main() {
	float height;
	double bank_balance;
	char phone_number[20];
	
	printf("Enter your height(in metres):");
	scanf("%f",&height);
	
	printf("Enter your bank balance(in kenyan shillings):");
	scanf("%lf",&bank_balance);
	
	printf("Enter your phone number:");
	scanf("%s[20]",phone_number);
	
	printf("\nYour Details\n");
	printf("Height:%.2f metres \n",height);
	printf("Bank balance:ksh %.2f\n",bank_balance);
	printf("Phone number:%s\n",phone_number);
	
	return 0;
}