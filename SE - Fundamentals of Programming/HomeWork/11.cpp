/*with return type with argument*/

#include<stdio.h>
int calc(int x,int y,int z);
int main(){
	
	int a,b,c,choice;
	
	printf("Enter Choice:");
	printf("\n1.Add 2.Sub 3.Mul 4.Div\n");
	scanf("%d",&choice);
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	
	c=calc(a,b,choice);
	printf("Answer is %d",c);
	
}
int calc(int x,int y,int z){
	
	int c;
	
	switch(z)
	{
		case 1:
			c = x + y;
			break;
		case 2:
			c = x - y;
			break;
		case 3:
			c = x * y;
			break;
		case 4:
			c = x / y;
			break;
		default:
			printf("Invalid Choice");
	}
	return c;
	
}
