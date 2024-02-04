/*26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)*/

#include<stdio.h>

int main()

{

   int i,j,n;

   printf("enter n:\n");
   scanf("%d",&n);

   for(i=1; i<=n; i=i+1)

   {

   printf("(");

      for(j=1;j<=i;j=j+1)

      {

         printf("%d",j);

        if (j<i)

        printf("+");

        else if(j=i)

        printf(")");

      }

        if (i<n)

        printf("+");

        else if(i=n)

        printf(" ");

   }

}
