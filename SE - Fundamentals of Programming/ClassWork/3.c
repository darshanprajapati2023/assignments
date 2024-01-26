#include<stdio.h>
int main(){
	
	//declaration -datatype
	int a;
	float b;
	char c;
	
	printf("enter any integer value:");
	scanf("%d", &a);
	
	printf("enter any float value:");
	scanf("%f", &b);
	
	printf("enter any charcter value:");
	scanf(" %c", &c);
	
	printf("\n integer %d float %f character %c", a,b,c);
	
}
