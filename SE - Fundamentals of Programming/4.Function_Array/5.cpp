/*5. WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice*/


#include <stdio.h>              
#include<conio.h>
int main()                    
{
	int a[100],n,i,j;
	printf("Array size: ");
        scanf("%d",&n);
        printf("Elements: \n");
        
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)             
		{
			if (a[j] > a[i])                
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}  
		}
	}
	printf("\n\nAscending : ");         
	for (int i = 0; i < n; i++)         
	{
		printf(" %d ", a[i]);
	}
	for (int i = 0; i < n; i++)         
	{
		for (int j = 0; j < n; j++)     
		{
			if (a[j] < a[i])            
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}
		}
	}
	printf("\n\nDescending : ");        
	for (int i = 0; i < n; i++)         
	{
		printf(" %d ", a[i]);           
	}

	return 0;          

}










//#include<stdio.h>
//int main(){
//	
//	int i,j,a[5],b[5],choice,n;
//	
//	printf("enter any 5 value for 1st array:");
//	for(i=0;i<5;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("enter any 5 value for 2nd array:");
//	for(j=0;j<5;j++){
//		scanf("%d",&b[j]);
//	}
//	printf("\nenter choice:");
//	printf("\n1.Ascending\n2.Descinding\n");
//	scanf("%d",&choice);
//	
//	
//	
//	switch(choice)
//	{
//		case 1:
//			for(i=0;i<5;i++){
//				printf("\n5 value of 1st Array in Ascending is %d %d %d %d %d\n",a[i]);
//			}
//	}
//	
//	
//	
//	
//}
	


















































































































