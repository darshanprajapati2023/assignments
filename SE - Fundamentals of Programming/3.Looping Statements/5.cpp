/*5. WAP to print factorial of given number*/

#include<stdio.h>  
int main()    
{    
 int i,fact=1,num;    
 printf("Enter a num: \n");    
  scanf("%d",&num);    
    for(i=1;i<=num;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",num,fact);    
return 0;  
}   
