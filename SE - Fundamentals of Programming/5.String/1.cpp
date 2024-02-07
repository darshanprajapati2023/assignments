/*1. Write a program in C to find the length of a string without using library 
functions.*/

#include<stdio.h>
int main(){
	
	char name[10];
	int i,length=0;
	
	printf("\n enter your name:");
	gets(name);
	
	for(i=0;name[i]!='\0';i++){
		length++;
	}
	
	printf("\n length of name is : %d", length);
}
