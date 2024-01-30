#include<stdio.h>
int main(){
	
	int i,myArray[3]={12,45,67};
	float a[4];
	char b[5];
	
	a[0]=4.5;
	a[1]=6.7;
	a[2]=6.9;
	a[3]=8.9;
	
	printf("\n enter 5 character elements\n");
	for (i=0;i<5;i++){
		scanf(" %c",&b[i]);
	}
//	scanf(" %c",&b[0]);
//	scanf(" %c",&b[1]);
//	scanf(" %c",&b[2]);
//	scanf(" %c",&b[3]);
//	scanf(" %c",&b[4]);
	
	printf("\n%d %d %d",myArray[0],myArray[1],myArray[2]);
	printf("\n%f %f %f %f",a[0],a[1],a[2],a[3]);
	printf("\n %c %c %c %c %c",b[0],b[1],b[2],b[3],b[4],b[5]);	
	
	for (i=0;i<3;i++){
		printf("\n %d",myArray[i]);
	}
	for (i=0;i<4;i++){
		printf("\n %f",a[i]);
	}
	for (i=0;i<5;i++){
		printf("\n %c",b[i]);
	}
}
