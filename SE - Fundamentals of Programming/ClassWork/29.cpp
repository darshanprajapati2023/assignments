#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char name[10];
    int i,length=0;
    
    printf (" \n Enter a string to be reversed: ");  
   	gets(name);
   	
   	for(i=0;name[i]!='\0';i++){
		length++;
	}
   	
   	for(i=length;i>=0;i--){
   		printf("%c",name[i]);
	   }
   	
      
//    printf (" \n After the reverse of a string: %s ", strrev(name));  
//    return 0;  
}  
