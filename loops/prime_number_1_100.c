// Prime number from 1 to 100
#include <stdio.h>

void main()
{
 int n,i, prime;

    printf("%5d%5d",1,2);

    for(n = 3; n <= 100; n += 2)
    {
      prime = 1;
      for(i = 2; i <= n/2 ; i++)
      {
        if (n % i == 0)
        {
          prime = 0;
          break;   // Terminate loop
        }
      } // inner loop

      if(prime == 1)
         printf("%5d",n);
    } // outer loop

}
