#include<stdio.h>

void main()
{
  char ch;

   printf("Enter a character :");
   ch = getchar();

   if (ch >= 65 && ch <= 90 || ch >=97 && ch <=122)
         printf("Alphabet");
   else
         printf("Not an Alphabet");
}
