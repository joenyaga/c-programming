/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:prompt user for password
Date:06/10/2026
*/
#include <stdio.h>
int main() {
	int password;
	
	do{
		printf("Enter password: ");
		scanf("%d",&password);
		
	}while (password !=1234);
	
	printf("Access Granted\n");
	
	return 0;
}