/*19. Patterns:
(iii) A
      B C
      D E F
      G H I J
      K L M N O
*/

#include <stdio.h> 
  
int main() 
{ 
    int rows = 4,i,j; 
    char n = 'A'; 
  
    for (i = 0; i <= rows; i++) { 
  
        for (j = 0; j <= i; j++) { 
            printf("%c ", n++); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
