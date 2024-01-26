/*37. WAP to show
i. Monday to Sunday using switch case*/

#include<stdio.h> 
int main() 
 { 
   int m; 
   printf("enter the number "); 
   scanf("%d",&m); 
   switch(m) 
   { 
   case 1 : printf("\n Monday"); 
   break; 
   case 2 : printf("\n Tuesday"); 
   break; 
   case 3 : printf("\n Wednesday"); 
   break; 
   case 4 : printf("\n Thursday"); 
   break; 
   case 5 : printf("\n Friday"); 
   break; 
   case 6 : printf("\n Saturday"); 
   break; 
   case 7 : printf("\n Sunday"); 
   break; 
   default : printf("\n enter correct choice"); 
    
    
   } 
   return 0; 
 } 
