/*7. Find area of Rectangle Formula : A=wl*/

#include <stdio.h>
int main(){
	int l, w, area;
	
	printf("Enter the value of Length and Width:");
	scanf("%d %d",&l,&w);
	
	area=l*w;
	printf("Area of Rectangle is: %d", area);
}
