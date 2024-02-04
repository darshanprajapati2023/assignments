#include<stdio.h>
int main(){
	
	char name[10],name2[10];
	
	printf("\n enter name 2:");
	gets(name2);
	printf("\n your second name is");
	puts(name2);
	
	printf("\n enter your name");
	scanf("%s",name);
	printf("\n your name is : %s",name);
}
