/*23. C Program to Reverse a Number Using FOR Loop*/

#include<stdio.h>
int main(){
	
	int num,temp,rem,rev=0;
	
	printf("enter a number:");
	scanf("%d",&num);
	
	for(temp = num; num != 0; num = num / 10){
		rem=num%10;
		rev=rev*10+rem;
	}
	printf("reverse number is : %d",rev);
}
