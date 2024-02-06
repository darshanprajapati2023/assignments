#include<stdio.h>
struct student{
	int rollno;
	float per;
	char garde;
}s[5];
int main(){
	
	int i;
	struct student s[5];
//	struct student s1,s2,s3;
//	
//	s1.rollno=1;
//	s1.per=90.0;
//	s1.garde='A';
//	
//	scanf("%d",&s2.rollno);
//	scanf("%f",&s2.per);
//	scanf(" %c",&s2.garde);
//	
//	struct student s4, s5;
	
	for(i=0;i<5;i++){
		printf("\n rollno :");
		scanf("%d",&s[i].rollno);
		printf("\n per :");
		scanf("%f",&s[i].per);
		printf("\n grade :");
		scanf(" %c",&s[i].garde);
	}
	
	for(i=0;i<5;i++){
		printf("\n %d %f %c",s[i].rollno,s[i].per,s[i].garde);
	}
}
