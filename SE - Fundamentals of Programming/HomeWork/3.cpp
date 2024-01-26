#include <stdio.h>
int main() {
  int i,n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  i=1;
  while (i < 10)
  {
	if(i++)
    printf("%d * %d = %d \n", n, i, n * i);
    else printf("invalid value");
}
  return 0;
}
