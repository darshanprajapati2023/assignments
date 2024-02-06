/*8. WAP to reverse a string and check that the string is palindrome or not*/

#include <stdio.h>
#include <string.h>

int main(){
	char str[100], tmp, rev[100];
	int begin, end;
	
	printf("Enter string: ");
	scanf("%s", &str);
	
	strcpy(rev,str);
	
	begin = 0;
	end = strlen(str) - 1;	
	while(begin < end){
		tmp = str[begin];
		str[begin] = str[end];
		str[end] = tmp;
		begin++;
		end--;
	}
	
	printf("Reverse string: %s\n", str);
	
	if(strcmp(rev,str) == 0)
		printf("%s is palindrome!\n", str);
	else
		printf("%s is not palindrome!\n", str);
		
	return 0;
}
