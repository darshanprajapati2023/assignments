/*with return type without argument*/

#include<stdio.h>
int calc();
int main(){
	
	int ans;
	
	ans=calc();
	printf("\n answer is %d",ans);
	
}
int calc(){
	
	int choice,a,b,c;
	
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
			c = a + b;
			break;
		case 2:
			c = a - b;
			break;
		case 3:
			c = a * b;
			break;
		case 4:
			c = a / b;
			break;
		default:
			printf("Invalid Choice");
	}
	return c;
}


