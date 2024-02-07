/*13.WAP to accept 5 numbers from user and check entered number is even or odd 
using of array*/

#include <stdio.h>
int main() 
{
    int i,n,arr[n];
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    printf("Even numbers in the array are: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
 
    printf("\nOdd numbers in the array are: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
            printf("%d ", arr[i]);
    }
}
