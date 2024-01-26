/*25. Accept 5 expense from user and find average of expense*/

#include<stdio.h>
int main(){
	
	int a,b,c,d,e,avgExpense;
	
	printf("enter 5 expense from user:");
	scanf("\n%d \n%d \n%d \n%d \n%d",&a,&b,&c,&d,&e);
	
	avgExpense=(a+b+c+d+e)/5;
	printf("avg Expense is %d",avgExpense);
}
