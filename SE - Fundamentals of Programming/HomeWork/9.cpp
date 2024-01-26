/*without return type with argument*/

#include<stdio.h>
void calc(int x, int y, int z);
int main(){
	
	int a,b,choice;
	
	printf("Enter Choice:");
	printf("\n1.Add 2.Sub 3.Mul 4.Div\n");
	scanf("%d",&choice);
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	
	calc(a,b,choice);
	
}
void calc(int x, int y, int z){
	
	switch(z)
	{
		case 1:
			printf("%d + %d = %d",x,y,x+y);
			break;
		case 2:
			printf("%d - %d = %d",x,y,x-y);
			break;
		case 3:
			printf("%d * %d = %d",x,y,x*y);
			break;
		case 4:
			printf("%d / %d = %d",x,y,x/y);
			break;
		default:
			printf("Invalid Choice");
	}
	
}
