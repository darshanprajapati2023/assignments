/*with return type without arguments*/
/*with return type with arguments*/

#include<stdio.h>
int sumOftwo();
int sumOftwo(int a,int b);
int main(){
	int ans;
	int x,y;
	
	//ans=sumOftwo();   //for with return type without arguments
	
	//printf("\n answer is %d",ans); //for with return type without arguments
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	printf("%d",sumOftwo(x,y));
}
int sumOftwo(){
	
	int a,b,c;
	
	printf("\n enter value of a:");
	scanf("%d",&a);
	
	printf("\n enter value of b:");
	scanf("%d",&b);
	
	c=a+b;
	
	return c;
}
int sumOftwo(int a,int b){
	
	return a+b;
}
