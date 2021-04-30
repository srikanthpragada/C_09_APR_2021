// Fill array with random numbers

#include <stdio.h>
void main()
{
 int a[10],i;

     srand(time(0));
     for(i=0; i < 10; i ++)
     {
         a[i] = rand() % 100;
         printf("%4d", a[i]);
     }
}
