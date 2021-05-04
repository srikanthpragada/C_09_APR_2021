// Print a word per line in a string
#include <stdio.h>

int main() {
    char st [] = "How do you do";
    int i;


    for(i=0; st[i]!=0;i++)
    {
      if(isspace(st[i]))
          putch('\n');
      else
          putch(st[i]);
    }

}
