//Simple interest = (P*R*N)/100

#include<stdio.h>
void cal_si(float X, float Y, float Z);
//void print_table();
int main(){
	float P,R,N;
	
	printf("\n enter principle amount :");
	scanf("%f",&P);
	
	printf("\n enter Rate of interest :");
	scanf("%f",&R);
	
	printf("\n enter number of year :");
	scanf("%f",&N);
	
	cal_si(P,R,N);
	
	//print_table();
	//cal_si();
}
void cal_si(float X, float Y, float Z){
	
	float SI;
	
	SI=(X*Y*Z)/100;
	
	printf("\n Simple interest is :%f", SI);
}
void print_table(){
	
	int i,n;
	
	printf("enter the integer:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		
		printf("\n%d * %d = %d", n, i, n*i);
	}
}
