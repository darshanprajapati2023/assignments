/*30. WAP to convert years into days and days into years*/

#include<stdio.h>
int main(){
	
	int years,days;
	
	printf("enter years:");
	scanf("%d",&years);
	
	days=years*365;
	printf("\ndays:%d",days);
	
	years=days/365;
	printf("\nyears:%d",years);
}
