#include<stdio.h>
int main(){
	
	int i, rollno[5],maths[5],science[5],english[5];
	float per,total;
	
	for(i=0;i<5;i++){
		
		printf("enter student rollno:");
		scanf("%d",&rollno[i]);
		
		printf("enter student maths marks:");
		scanf("%d",&maths[i]);
		
		printf("enter student science marks:");
		scanf("%d",&science[i]);
		
		printf("enter student english marks:");
		scanf("%d",&english[i]);
		
		total=maths[i]+science[i]+english[i];
		per = (total/300) * 100;
		
		printf("Total is %f\n",total);
		printf("Percentage is %f\n",per);
	}
	return 0;
}
