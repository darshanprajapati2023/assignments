/*7. Accept marks from user and check pass or fail*/

#include <stdio.h>

int main() {
	int Per;
	printf("Enter Per : ");
	scanf("%d",&Per);
	if(Per >= 40)
		printf("\nResult is pass");
	else
		printf("\nResult is fail");
	return 0;
}
