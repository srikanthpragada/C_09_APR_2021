#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

    fp = fopen("names.txt","rt");
    if (fp == NULL)
    {
       printf("Sorry! File could not be opened!");
       exit(1);  // Terminate program
    }

    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        putch(ch);
    }

    fclose(fp);
}
