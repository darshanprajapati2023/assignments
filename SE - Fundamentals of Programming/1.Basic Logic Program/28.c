/*28. Convert years into days and months*/

#include<stdio.h>
int main(){
	
	int days,months,years;
	
	printf("enter Years:");
	scanf("%d",&years);
	
	days=years*365;
	months=years*12;
	
	printf("days:%d and months:%d",days,months);
	
}
