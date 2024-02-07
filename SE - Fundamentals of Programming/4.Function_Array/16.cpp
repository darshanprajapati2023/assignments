/*16.Accept 5 numbers from user and perform sum of array*/

#include<stdio.h>
int main(){
	
	int i,n,arr[n],sum=0;
	
	printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
    	sum = sum + arr[i];
    	
	}
	printf("\n\nSum of the array is : %d",sum); 
    
}
