/*9. Write a program make a summation of given number (E.g., 1523 Ans: -11)*/

#include<stdio.h>
int main(){
	
	int a,b,sum,i;
	
	printf("enter the numbe(under 10 digit):");
	scanf("%d",&a);
	
	for(i=0;i<=10;i++){
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("summation of number is %d",sum);
	return 0;
}
