#include<stdio.h>
int main(){
	
	float pi=3.14, r, l, b, h, s, w, area;
	int choice;
	
	printf("enter your choice:");
	printf("\n1.Circle 2.Triangle 3.Square 4.Rectangle");
	scanf("%d", &choice);
	
	switch (choice)
	{
		case 1:
			printf("enter the value of r");
			scanf("%f",&r);
			printf("area of circle is %f",pi*r*r);
			break;
		
		case 2:
			printf("enter the value of b");
			scanf("%f",&b);
			printf("enter the value of h");
			scanf("%f",&h);
			printf("area of Triangle is %f:", 0.5*b*h);
			break;
		
		case 3:
			printf("enter the value of s");
			scanf("%f",&s);
			printf("area of square is %f:", s*s);
			break;
			
		case 4:
			printf("enter the value of l:");
			scanf("%f", &l);
			printf("enter the value of w:");
			scanf("%f", &w);
			printf("area of Rectangle is %f", l*w);
			break;	
			
		default:
			printf("Invalid choice");
		}
}
