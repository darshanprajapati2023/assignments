/*31. Convert kilometers into meters*/

#include<stdio.h>
int main(){
	
	float kilometers,meters;
	
	printf("enter kilometers:");
	scanf("%f",&kilometers);
	
	meters=kilometers*1000;
	printf("meters:%.2f",meters);
}
