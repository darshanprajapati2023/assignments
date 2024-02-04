/*25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)*/

#include<stdio.h>
int main()
{
 int i, N;
 printf("Enter N:");
 scanf("%d", &N);

 for(i=1; i<=N; i++)
 {
  printf("(%d * %d)",i,i);
   
  if(i!=N)
   printf(" + ");
 }
 return 0; 
}
