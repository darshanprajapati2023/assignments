#include<stdio.h>
int main(){
	
	int i,rollno[5];
	float per[5],maths[5],science[5],english[5],total[5];
	
	printf("\n enter 5 roll no of students\n");
	for(i=0;i<5;i++){
		scanf("%d",&rollno[i]);
	}
	printf("\n enter above 5 student's maths marks\n");
	for(i=0;i<5;i++){
		scanf("%f",&maths[i]);
	}
	printf("\n enter above 5 student's science marks\n");
	for(i=0;i<5;i++){
		scanf("%f",&science[i]);
	}
	printf("\n enter above 5 student's english marks\n");
	for(i=0;i<5;i++){
		scanf("%f",&english[i]);
	}	
	for(i=0;i<5;i++){
		total[i]=maths[i]+science[i]+english[i];
		printf("\nTotal marks of rollno[%d] is %f",rollno[i],total[i]);
		per[i]=(total[i]/300)*100;
		printf("\nPercentage of rollno[%d] is %.2f",rollno[i],per[i]);
	}
}
