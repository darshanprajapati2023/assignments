/*13. WAP to find minimum number among 3 numbers using ternary operator*/

#include<stdio.h>
int main()
{
	int a, b, c, small;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	small = (a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("Smallest number is: %d", small);
}
