/*1. Write a C program to accept two integers and check whether they are equal 
or not*/


#include <stdio.h>

int main()
{
int numb1,numb2;
printf("\nPlease enter a number: ");
scanf("%d",&numb1);
printf("\nPlease enter a number: ");
scanf("%d",&numb2);

if (numb1==numb2)
{
printf("They are equal");
}
else
{
printf("They are not equal");
}
}
