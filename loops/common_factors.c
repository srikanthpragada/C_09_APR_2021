// Common factors of two numbers excluding 1 and number
#include<stdio.h>

void main()
{
  int i,n1,n2,small;

    printf("Enter two numbers :");
    scanf("%d%d", &n1, &n2);

    small = n1 < n2 ? n1 : n2;

    for(i=2; i <= small / 2;i++)
    {
      if(n1 % i == 0 && n2 % i == 0)
          printf("%d ",i);
    }

 }
