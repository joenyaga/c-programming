 /*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Deascription:Exam eligibility
Date:29/09/2026
version:5
*/
 
 //pre-processor directive
 #include<stdio.h>
 int main() {
	 float attendance,marks;
	 
	 printf("Enter attendance percentage:");
	 scanf("%f",&attendance);
	 
	 printf("Enter average marks:");
	 scanf("%f",&marks);
	 
	 if(attendance >=75 && marks>=40){
		 printf("Eligible for final exams.\n");
	 } else{
		 printf("Not eligible.\n");
	 }
	 return 0;
 }
 