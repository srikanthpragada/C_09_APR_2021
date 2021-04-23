// Prime number v2

#include <stdio.h>

void main()
{
 int n,i,count = 0;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i = 2; i <= n/2 && count == 0; i ++)
    {
       printf("Testing with %d\n",i);
       if (n % i == 0)
           count ++;
    }

    if(count == 0)
        printf("Prime Number!");
    else
        printf("Not a prime number!");


}
