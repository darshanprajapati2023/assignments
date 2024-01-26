/*24. Accept 5 employees name and salary and count average and total salary*/

#include<stdio.h>
int main(){
	
	int a,b,c,d,e,avgSalary,totalSalary;
	char i[20],j[20],k[20],l[20],m[20];
	
	printf("\nenter Five Employees Name:");
	scanf(" \n%s \n%s \n%s \n%s \n%s",&i,&j,&k,&l,&m);
	printf("\nenter Five Employees Salary:");
	scanf("\n%d \n%d \n%d \n%d \n%d",&a,&b,&c,&d,&e);
		
	totalSalary=a+b+c+d+e;
	avgSalary=(a+b+c+d+e)/5;
	
	printf("\nTotal Salary is %d", totalSalary);
	printf("\nAverage Salary is %d", avgSalary);
}

