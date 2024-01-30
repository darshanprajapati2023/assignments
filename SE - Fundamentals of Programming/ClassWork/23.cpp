#include<stdio.h>
void odd_even(int a);
int main(){
	
	int i,n[10];
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
		odd_even(n[i]);
	}
}
void odd_even(int a){
	if(a%2==0)
	{
		printf("\n %d even",a);
	}
	else
	{
		printf("\n %d odd",a);
	}
}
