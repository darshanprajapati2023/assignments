/*2. Write a program in C to separate individual characters from a string.*/


#include <stdlib.h>
#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter the string: ");
    gets(str);
   

    printf("Printing the characters:: \n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { 
            printf("%c\n", str[i]);
        }
    }
    return 0;
}
