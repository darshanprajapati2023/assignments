/*Create menu driven calculator using function
Make sure each business logic is denoted with appropriate comments and
make your code interactive and represent clean and clear output on your
console screen.
Adhere to the coding principles
First you need to display the menu as below :
Then you have to ask user for the choice and as per user’s choice you have to
perform selected operation as given in below example :
Make sure that if your user will not select any of the options given in the MENU, then
it should not perform any operation and have to display a user friendly message.
Eg :
? Use Looping concept for multiple time input
? Make sure code will be clean and clear
? Use function concept and make your code more understandable
? After completion of code put it in github in main branch*/ 

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
