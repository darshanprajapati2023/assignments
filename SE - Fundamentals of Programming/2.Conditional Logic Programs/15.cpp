/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
int main(){
	
	int maths,phy,chem,total,mp;
	
	printf("enter maths marks:");
	scanf("%d",&maths);
	printf("enter physics marks:");
	scanf("%d",&phy);
	printf("enter Chemistry marks:");
	scanf("%d",&chem);
	
	total=maths+phy+chem;
	mp=maths+phy;
	
	
	if(maths>=65 && phy>=55 && chem>=50 && total>=190 && mp>=140)
	{
		printf("The candidate is eligible.");
	}
	else
	{
		printf("The candidate is not eligible.");
	}
}
