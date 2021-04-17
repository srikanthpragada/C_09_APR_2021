#include <stdio.h>

void main()
{
  int m1,m2;

     printf("Enter marks in two subjects :");
     scanf("%d%d",&m1,&m2);

     if(m1 >= 50 && m2 >= 50)
          printf("Passed!");
     else
          printf("Failed!");
}
