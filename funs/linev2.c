// User-defined function line v2

#include <stdio.h>

void line(int length, char ch)
{
   int i;

    for(i = 1; i <= length; i ++)
        putch(ch);
}


void main()
{
     starline(25);
     printf("\nSrikanth Technologies\n");
     line(10,'-');
     printf("\nWhere Quality Matters\n");
     line(50,'=');
}


void starline(int length)
{
   int i;

    for(i = 1; i <= length; i ++)
        putch('*');
}
