/*32. Accept 2 numbers and find out its sum check it size*/

#include<stdio.h>
int main(){
	
	int a,b,sum,intType;
	
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	
	sum = a + b;
	
	printf("sum of a and b is %d",sum);
	printf("\nsize of int: %zu bytes",sizeof(intType));
}
