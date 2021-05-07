#include <stdio.h>

void zeros(int a, int b)
{
   a = b = 0;
}

void main()
{
  int x = 10, y = 20;

     zeros(x,y);
     printf("%d %d",x,y);
}
