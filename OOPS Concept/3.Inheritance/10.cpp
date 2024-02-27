/*10. Write a program to concatenate the two strings using Operator Overloading*/

#include<iostream>
#include<string.h>
using namespace std;
class ConcateString{
	public:
		char s1[25];
		char s2[25];
		
		ConcateString(char str1[],char str2[]){
			strcpy(s1,str1);
			strcpy(s2,str2);
		}
		void operator+(){
			cout<<"\nConcatenation :"<<strcat(s1,s2);
		}
};
int main(){
	
	char str1[] = "Hello";
	char str2[] = "World";
	
	ConcateString a1(str1,str2);
	
	+a1;
}
