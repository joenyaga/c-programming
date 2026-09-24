/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:prompt program
Date:23/09/2026

*/

//pre-processor directive
#include <stdio.h>
int main() {
	int book_ID;
	int returndate;
	int duedate;
	int days_overdue;
	int fine_rate;
	int fine_amount;
 
    printf("Enter book_ID:");
    scanf("%d",&book_ID);
    
    printf ("Enter due_date:");
    scanf ("%d",&duedate);
    
    printf ("Enter return_date:");
    scanf ("%d",&returndate);
    
    days_overdue=returndate-duedate;
    
	
	
	 if(days_overdue<=7){
		fine_rate=20;
		fine_amount=fine_rate*days_overdue;
	}
	else if(days_overdue<=14){
		fine_rate=50;
		fine_amount=fine_rate*days_overdue;
	}
	else{
		fine_rate=100;
		fine_amount=fine_rate*days_overdue;
	}
	printf("book_ID:%d\n",book_ID);
	printf("returndate:%d\n",returndate);
	printf("duedate:%d\n",duedate);
	printf("days_overdue:%d\n",days_overdue);
	printf("fine_rate=ksh.%d per day\n",fine_rate);
	printf("fine_amount:ksh,%d\n",fine_amount);
	
	return 0;
}