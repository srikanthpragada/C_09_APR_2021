// Average of positive numbers

#include <stdio.h>

void main()
{
 int n,i, nsum = 0, psum = 0, pcount = 0, ncount = 0;


    for(i = 1; i <= 5; i ++)
    {
       printf("Enter a number:");
       scanf("%d",&n);

       if(n >= 0)
       {
         psum += n;
         pcount ++;
       }
       else
       {
         nsum += n;
         ncount ++;
       }
    }

    printf("Positive Average = %d, Negative Average : %d",psum/pcount, nsum/ncount);

}
