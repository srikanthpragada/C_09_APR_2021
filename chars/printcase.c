#include <stdio.h>

void main()
{
  char ch;

     printf("Enter an alphabet :");
     ch = getchar();

     if(ch >= 'A' && ch <= 'Z')
         printf("Uppercase");
     else
         printf("Lowercase");
}
