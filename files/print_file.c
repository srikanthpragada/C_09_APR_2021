// Print given file with line numbers

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[500];
  int lineno = 1;


    printf("Enter filename : ");
    gets(filename);

    fp = fopen(filename,"rt");
    if (fp == NULL)
    {
       printf("Sorry! File [%s] could not be opened!",filename);
       exit(1);  // Terminate program
    }

    while(1)
    {
       if(fgets(line,200,fp) == NULL)  // EOF
          break;

       printf("%03d: %s",lineno, line);
       lineno ++;
    }

    fclose(fp);
}
