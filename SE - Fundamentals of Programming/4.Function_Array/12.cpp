/*12.WAP to accept 5 students name and store it in array*/

#include<stdio.h>
#include<string.h>
int main(){
	
	int i;
	char name[5];
	
	for(i=0;i<5;i++){
		printf("\nenter student name:");
		scanf("%s",name);
		printf("\n %s",name);
	}
}
