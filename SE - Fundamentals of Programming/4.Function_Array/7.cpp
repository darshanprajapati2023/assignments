/*7. WAP Find out length ofstring without using inbuilt function*/

#include<stdio.h>
int main(){
	
	char name[10];
	int i, length=0;
	
	printf("\nenter your name:");
	gets(name);
	
	for(i=0;name[i]!='\0';i++){
		length++;
	}
	
	printf("length of name is: %d", length);
}
