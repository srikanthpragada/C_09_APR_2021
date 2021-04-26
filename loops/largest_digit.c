// Print largest digit in a number

#include <stdio.h>

void main()
{
  int num,digit, largest = 0;

      printf("Enter a number :");
      scanf("%d",&num);

      while(num > 0)
      {
         digit = num % 10;  // Take rightmost digit
         if (digit > largest)
            largest = digit;
         num = num / 10;    // Remove rightmost digit
      }

      printf("Largest digit : %d", largest);
}
