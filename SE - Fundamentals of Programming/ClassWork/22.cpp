#include<stdio.h>
int main()
{
	
	int n[10],i;
	
	for(i=0;i<10;i++){
		printf("\nenter number:");
		scanf("%d",&n[i]);
		if(n[i]%2==0)
		{
			printf("\nnumber is even");
		}
		else
		{
			printf("\nnumber is odd");
		}
	}
}
