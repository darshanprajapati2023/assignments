/*3. WAP to Find Area And Circumference of Circle*/

#include <stdio.h>  
int main() {
	float pie=3.14159;
    double radius, area, circumference;  
printf("Enter the radius of the circle: ");  
scanf("%lf", &radius);  
    area = pie * radius * radius;  
    circumference = 2 * pie * radius;  
printf("Area of the circle: %.2lf\n", area);  
printf("Circumference of the circle: %.2lf\n", circumference);  
}  
