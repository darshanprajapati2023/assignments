/*27. Convert days into months*/

#include<stdio.h>
int main(){
	
	int days,months;
	
	printf("enter days:");
	scanf("%d",&days);
	
	months=days/30;
	printf("given days months is %d",months);
}
