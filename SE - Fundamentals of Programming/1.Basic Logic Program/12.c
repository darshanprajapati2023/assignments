/*12. Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/


#include <stdio.h>
int main(){
	int n,a;
	
	printf("Enter the number of students:");
	scanf("%d",&n);
	
	a=5*n;
	printf("Number of Apples are required: %d", a);
	
	
}
