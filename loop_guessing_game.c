/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:prompt the user to guess numbers
Date:6/10/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int secret,guess,attempts=0;
	
	srand(time(NULL));
	secret=rand()%20+1;
	
	while(guess !=secret) {
		printf("Enter your guess (1-20): ");
		scanf("%d",&guess);
		
		attempts++;
		
		if(guess>secret){
			printf("Too high!\n");
		}
		else if(guess<secret){
			printf("Too low!\n");
		}
		else{
			printf("Congratulations!\n");
		}	
		
	}
	printf("Total attempts: %d\n",attempts);
	
	return 0;
}
