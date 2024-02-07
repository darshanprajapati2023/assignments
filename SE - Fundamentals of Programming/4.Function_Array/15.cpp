/*15.Store 5 numbers in array and sort it in ascending order*/

#include<stdio.h>
int main(){
	
	int i,j,n,arr[n],tmp;
	
	printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)             
		{
			if (arr[j] > arr[i])                
			{
				tmp = arr[i];         
				arr[i] = arr[j];            
				arr[j] = tmp;             
			}  
		}
	}
	printf("\n\nAscending : ");         
	for (int i = 0; i < n; i++)         
	{
		printf(" %d ", arr[i]);
	}
}
