/*6. Find area of Triangle Formula : A = 1/2 × b × h*/

#include <stdio.h>
int main (){
	double b,h,area;
	
	printf("Enter the value of b and h:");
	scanf("%lf %lf",&b,&h);
	
	area=0.5*b*h;
	
	printf("Area of Triangle is: %f", area);
}
