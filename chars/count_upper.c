#include <stdio.h>

void main()
{
  int i, count = 0;
  char ch;

    for (i = 1; i <= 10; i ++)
    {
       printf("\nEnter a char : ");
       ch = getche();
       if (isupper(ch))
           count ++;

       // fflush(stdin);  // clear keyboard buffer
    }

    printf("\nUppercase letter count = %d", count);
}
