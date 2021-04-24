// Largest factor

#include <stdio.h>

void main()
{
 int n,i;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i = n/2;  ; i--)
    {
       if (n % i == 0)
          break;
    }

    printf("%d",i);

}
