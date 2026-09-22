/*
Author:Joe Nyaga
Description:volume and s.area of a cylinder
Date:22/09/2026
version:5
*/

//pre-processor directive
#include <stdio.h>
int main() {
	float r,h,volume,surface_area;
	float pi=3.142;
	
	printf("Enter radius:");
	scanf ("%f",&r);
	
	printf("Enter height:");
	scanf ("%f",&h);
	
	volume=pi*r*r*h;
	surface_area=2*pi*r*r+2*pi*r*h;
	
	printf("volume=%.2f\n",volume);
	printf("surface area=%.2f\n",surface_area);
	
	return 0;
}