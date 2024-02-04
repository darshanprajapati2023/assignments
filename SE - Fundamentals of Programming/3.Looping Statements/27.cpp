/*27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6...........n*/

#include<stdio.h>
int main()
{
 int i,j,N;
 printf("Enter N:");
 scanf("%d", &N);

 for(i=1; i<=N; i++){
 	
			if(i!=N)
			printf("(%d / %d)",i,i+1);
   			printf(" - ");
   			i++;
			printf("(%d / %d)",i,i+1);
   			printf(" + ");
	} 
 return 0; 
}
