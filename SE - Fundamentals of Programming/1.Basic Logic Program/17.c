/*17. Calculate person’s insurance premium based on salary*/

#include<stdio.h>
int main(){
	
	float a,salary;
	
	printf("enter the salary:");
	scanf("%f",&salary);
	
	a=salary*10/100;
	printf("premium based on salary is %f",a);
}
