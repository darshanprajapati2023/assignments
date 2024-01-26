#include<stdio.h>
int main(){
	int n, firstNum, secondNum, result;
	char option;
	
	do{
		printf("What operation would you like to do?\n\n");
		printf("Press 1 for Addition\n");
		printf("Press 2 for Subtraction\n");
		printf("Press 3 for Multiplication\n");
		printf("Press 4 for Division\n");
		scanf("%d",&n);
		printf("Enter value for the first Number\n");
		scanf("%d",&firstNum);
		printf("Enter value for the second Number\n");
		scanf("%d",&secondNum);
		switch(n){
			case 1:
				result = firstNum + secondNum;
				printf("Addition of the numbers is %d",result);
				break;
			case 2:
				result = firstNum - secondNum;
				printf("Subtractio of the numbers is %d",result);
				break;
			case 3:
				result = firstNum * secondNum;
				printf("Multiplication of the numbers is %d",result);
				break;
			case 4:
				result = firstNum / secondNum;
				printf("Division of the numbers is %d",result);
				break;
			default:
				printf("Wrong input");
		}
		printf("\nDo you want to continue y/n?\n");
		option = getch();
	}while(option =='y');
}
