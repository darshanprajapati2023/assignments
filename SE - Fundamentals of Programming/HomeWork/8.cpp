/*without return type without argument*/

#include<stdio.h>
void calc();
int main(){
	
	calc();
}
void calc(){
	
	int choice,a,b;
	
	printf("Enter Choice:");
	printf("\n1.Add 2.Sub 3.Mul 4.Div\n");
	scanf("%d",&choice);
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	
	switch(choice)
	{
		case 1:
			printf("%d + %d = %d",a,b,a+b);
			break;
		case 2:
			printf("%d - %d = %d",a,b,a-b);
			break;
		case 3:
			printf("%d * %d = %d",a,b,a*b);
			break;
		case 4:
			printf("%d / %d = %d",a,b,a/b);
			break;
		default:
			printf("Invalid Choice");
	}
}


