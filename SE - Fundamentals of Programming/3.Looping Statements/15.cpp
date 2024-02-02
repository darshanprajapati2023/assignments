/*15.Calculate sum of 10 numbers using of while loop*/


#include <stdio.h>
int main()
{
    int i=1, sum = 0,n;
   
    while (i <= 10) {
        printf("Number-%d :", i);

        scanf("%d", &n);
        sum += n;
        i++;
    }
    printf("The sum of 10 no is : %d\n", sum);
    return 0;
}
