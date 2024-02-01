#include<stdio.h>
int main(){
	
	int A[3][3],i,j,sum=0;
	
	printf("\n enter all 9 elements of 3*3 A matrix :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
			}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf(" %d ", A[i][j]);
				sum=sum+A[i][j];
			}
			printf("\n");
		}
		printf("\nSum of all elements = %d",sum);
		return 0;
}
