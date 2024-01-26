/*21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable*/

#include<stdio.h>
int main(){
	
	int a,b,c,x,y;
	
	printf("enter value of a:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("after swapping a:%d,b:%d",a,b);
	
	printf("\nInput value for x & y: \n");
    scanf("%d%d",&x,&y);
    
    printf("Before swapping the value of x & y: %d %d",x,y);

    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("\nAfter swapping the value of x & y: %d %d",x,y);
	return 0;
}
