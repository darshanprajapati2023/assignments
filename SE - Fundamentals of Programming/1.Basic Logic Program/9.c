/*9. Find circumference of Triangle formula : triangle = a + b + c*/

#include <stdio.h>
int main () {
	int a,b,c,x;
	
	printf("Enter the value of a,b and c:");
	scanf("%d %d %d", &a,&b,&c);
	
	x=a+b+c;
	
	printf("Circumference of Triangle is: %d",x);
}
