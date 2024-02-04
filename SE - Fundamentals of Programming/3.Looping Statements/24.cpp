/*24. 1 + 2 + 3 + 4 + 5 + ... + n*/

#include<stdio.h>
int main()
{
 int i, N;
 printf("Enter N:");
 scanf("%d", &N);

 for(i=1; i<=N; i++)
 {
  printf("%d",i);
   
  if(i!=N)
   printf(" + ");
 }
 return 0; 
}
