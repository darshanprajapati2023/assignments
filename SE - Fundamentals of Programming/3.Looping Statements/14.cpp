/*14. Accept 5 numbers from user and find those numbers factorials*/

#include<stdio.h>
int main(){
	
	int arr[5],i,fact=1,n=1;
	
	printf("enter 5 numbers (between 0-9):\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Factorials are\n");
	printf("\n");
	printf("\n");
	for(i=0;i<5;i++){
		if(arr[i]<10){
			for(n=1;n<=arr[i];n++){
				fact=fact*n;
			}
			printf("the factorial is %d\n",fact);
		}
		fact=1;
	}
}     
