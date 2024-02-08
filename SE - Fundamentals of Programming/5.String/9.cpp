/*9. Write a program in C to find the maximum number of characters in a string.*/

 
#include <stdio.h>
#include <string.h>
 
int main()
{

  	char strg[100], result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any stringing :  ");
  	gets(strg);
  	
  	len = strlen(strg);

  	for(i = 0; i < len; i++)
  	{
  		freq[strg[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[strg[i]])
		{
			max = freq[strg[i]];
			result = strg[i];
		}
	}

	printf("\n The Maximum Occurring Character in a Given stringing = %c ", result);
	
  	return 0;
}

