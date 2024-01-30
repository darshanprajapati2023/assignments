#include<stdio.h>
int main(){
	
	int i,j,a[5],b[5],c[10];
	printf("enter 1st five number:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	printf("enetr 2nd five number:\n");
	for(i=5;i<10;i++){
		
		scanf("%d",&b[i]);
		c[i]=b[i];
	}
	for(i=0;i<10;i++){
		printf(" %d ", c[i]);
	}
	return 0;
}
	
	
