/*29. Convert minutes into seconds and hours*/

#include<stdio.h>
int main(){
	
	int hours,minutes,seconds;
	
	printf("enter minutes:");
	scanf("%d",&minutes);
	
	seconds=minutes*60;
	hours=minutes/60;
	
	printf("seconds:%d and hours is %d",seconds,hours);
}
