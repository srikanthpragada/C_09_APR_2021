// Search

#include <stdio.h>
void main()
{
 int a[10],i,n, found = 0;

     srand(time(0));
     for(i=0; i < 10; i ++)
     {
         a[i] = rand() % 100;
         printf("%4d", a[i]);
     }

     printf("\nEnter number :");
     scanf("%d",&n);

     // Linear Search
     for(i=0; i < 10; i ++)
     {
         if(a[i] == n)
         {
             printf("Found at %d",i);
             found = 1;
             break;
         }
     }

     if(!found)
        printf("Not found!");
}
