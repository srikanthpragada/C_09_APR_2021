// Take values into array and display them again

#include <stdio.h>
void main()
{
 int a[5],i;

     for(i=0; i < 5; i ++)
     {
         printf("Enter a number :");
         scanf("%d", &a[i]);
     }

     printf("\nValue are : ");
     for(i = 4; i >= 0; i --)
     {
         printf("%5d", a[i]);
     }
}
