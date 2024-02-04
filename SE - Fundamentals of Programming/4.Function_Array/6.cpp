/*6. WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array*/

#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,k,mat1[3][3],mat2[3][3],mat3[3][3],choice;
	char option;
	
	do{
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nEnter mat1[%d][%d]=",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nEnter mat2[%d][%d]=",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("\nenter choice:");
	printf("\n1.Addition\n2.Substraction\n3.Multiplication\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("\t%d",mat1[i][j]+mat2[i][j]);
				}
				printf("\n");
			}
			break;
		case 2:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("\t%d",mat1[i][j]-mat2[i][j]);
				}
				printf("\n");
			}
			break;
		case 3:
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					mat3[i][j]=0;
					for(k=0;k<3;k++){
						mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
					}
				}
			}
			printf("\nThe Result is...\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d   ",mat3[i][j]);
				}
				printf("\n");
			}
			break;
		default:
			printf("Invalid Choice");
	}
	printf("\nDo you want to continue y/n?\n");
		option = getch();
	}while (option == 'y');
	
}
