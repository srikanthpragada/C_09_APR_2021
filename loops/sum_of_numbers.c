
#include <stdio.h>

void main()
{
  int sum = 0, n;

  /*
  do
  {
     printf("Enter a number [0 to stop] :");
     scanf("%d", &n);
     sum += n;
  }
  while ( n!=0); // stop when n is 0
  */

  while(1)
  {
     printf("Enter a number [0 to stop] :");
     scanf("%d", &n);

     if (n == 0)
        break;

     sum += n;
  }

  printf("Sum = %d", sum);

}
