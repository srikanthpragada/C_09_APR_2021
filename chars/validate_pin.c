// Take 4 chars and it they are digits, it is valid pin
#include <stdio.h>

void main()
{
  int i, count = 0;
  char ch;

    printf("Enter pin : ");
    for (i = 1; i <= 4; i ++)
    {
       ch = getch();
       putch('*');
       if (isdigit(ch))
           count ++;
    }

    if(count == 4)
        printf("\nValid Pin");
    else
        printf("\nInvalid Pin");
}
