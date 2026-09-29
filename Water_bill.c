/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Date:29/09/2026
Version:5
*/

//pre-processor directive
#include<stdio.h>
int main() {
	float units,bill;
	
	printf("Enter water units consumed:");
	scanf("%f",&units);
	
	if(units <=30) {
		bill=units*20;
	}else if(units <=60) {
		bill=(30*20)+((units-30)*25);
	}else {
		bill=(30*20)+(30*25)+((units-60)*30);
	}
	
	printf("Total water bill: %.2f KES\n",bill);
	
	return 0;
}