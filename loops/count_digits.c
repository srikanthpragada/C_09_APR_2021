// Print number in reverse order

#include <stdio.h>

void main()
{
  int num,count = 0;

      printf("Enter a number :");
      scanf("%d",&num);

      while(num > 0)
      {
         num = num / 10;    // Remove rightmost digit
         count ++;
      }

      printf("%d",count);
}
