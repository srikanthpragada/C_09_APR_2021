// Table

#include <stdio.h>

void main()
{
 int n,i;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
      printf("%2d * %2d = %4d\n",n,i,n*i);
    }


}
