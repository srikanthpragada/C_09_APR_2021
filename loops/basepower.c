// Raise base to power

#include <stdio.h>

void main()
{
   int base = 10, power = 0, result, i;

       result = 1;
       for(i = 1;  i <= power ;  i ++)
       {
          result = result * base;
       }

       printf("Result = %d", result);

}
