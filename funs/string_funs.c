// String functions

#include <stdio.h>

void print_alpha(char st[100])
{
   int i;

     for(i = 0; st[i] != '\0'; i ++)
     {
         if(isalpha(st[i]))
            putch(st[i]);
     }
}

void print_nonspace(char st[100])
{
 int i;

   for(i=0;st[i] !='\0';i++)
   {
      if(st[i] != ' ')
        putch(st[i]);
   }

}

void main()
{
  char name [] = "Abc 123 Xyz";


      print_nonspace(name);
}
