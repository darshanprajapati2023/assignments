/*with return type with argument*/

#include<stdio.h>
#include<conio.h>
int add (int a,int b);
int sub (int a,int b);
int mul (int a,int b);
int div (int a,int b);
int main(){
	
	int x,y,choice;
	char option;
	
	do{
	
	printf("enter 1st value:");
	scanf("%d",&x);
	printf("enter 2nd value:");
	scanf("%d",&y);
	printf("\nenter choice");
	printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nAddition is %d",x+y);
			break;
		case 2:
			printf("\nSubstraction is %d",x-y);
			break;
		case 3:
			printf("\nMultiplication is %d",x*y);
			break;
		case 4:
			printf("\nDivision is %d",x/y);
			break;
		default:
			printf("Invalid Choice");
		}
		printf("\nDo you want to continue y/n?\n");
		option = getch();
	}while(option =='y');
}
int add (int a,int b){
	return a+b;
}
int sub (int a,int b){
	return a-b;
}
int mul (int a,int b){
	return a*b;
}
int div (int a,int b){
	return a/b;
}

