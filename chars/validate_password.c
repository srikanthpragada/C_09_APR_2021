// Take 6 chars password and check whether it is valid password
#include <stdio.h>

void main()
{
  int i, upper, digit;
  char ch;

    upper = digit = 0;
    printf("Enter password : ");
    for (i = 1; i <= 6; i ++)
    {
       ch = getch();
       putchar('*');
       if (isdigit(ch))
           digit = 1;
       else
         if (isupper(ch))
             upper = 1;
    }

    if(upper && digit)
        printf("\nValid Password");
    else
        printf("\nInvalid Password");
}
