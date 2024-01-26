/*20. Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.*/

#include<stdio.h>
int main(){
	
	int rs,ms;
	printf("enter monthly salary:");
	scanf("%d",&ms);
	
	rs=ms-(ms*20/100);
	printf("remaining salary is %d",rs);
	
}
