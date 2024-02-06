/*Write a program of structure employee that provides the following
a. information -print and display empno, empname, address 
andage
b. Write a program of structure for five employee that 
provides the following information -print and display 
empno, empname, address and age*/

#include<stdio.h>
struct employee{
	int empno,age;
	char empname[20];
	char address[50];
}emp[5];
int main(){
	
	int i;
	struct employee emp[5];
	
	for(i=0;i<5;i++){
		printf("\n empno :");
		scanf("%d",&emp[i].empno);
		printf("\n empname :");
		scanf("%s",&emp[i].empname);
		printf("\n address :");
		scanf("%s",&emp[i].address);
		printf("\n Age :");
		scanf("%d",&emp[i].age);
	}
	
	for(i=0;i<5;i++){
		printf("\n %d %s %s %d",emp[i].empno,emp[i].empname,emp[i].address,emp[i].age);
	}
}
