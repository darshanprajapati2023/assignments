//Simple interest = (P*R*N)/100

#include<stdio.h>
float cal_si(float X, float Y, float Z);
int main(){
	float P,R,N,SI;
	
	printf("\n enter principle amount :");
	scanf("%f",&P);
	
	printf("\n enter Rate of interest :");
	scanf("%f",&R);
	
	printf("\n enter number of year :");
	scanf("%f",&N);
	
	SI=cal_si(P,R,N);
	
	printf("%f",SI);
	
	
}
float cal_si(float X, float Y, float Z){
		
	float SI;
	SI=(X*Y*Z)/100;
	
	return SI;
}
