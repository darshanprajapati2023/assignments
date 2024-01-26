/*22. Calculate compound interest(Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/

#include <stdio.h> 
#include<math.h>

int main() {
    
    float a,p,r,n,t,r1,CI;
	
	printf("Enter Principle Amount : ");
	scanf("%f",&p);
	
	printf("Enter the Rate of Interest : ");
	scanf("%f",&r);
	
	printf("Enter the number of years : ");
	scanf("%f",&n); 
    
    a = p * ((pow((1 + r / 100),n)));
    
    CI = a - p;
    
    printf("Compound Interest : %f",CI);

    return 0;
}
