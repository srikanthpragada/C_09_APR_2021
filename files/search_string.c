#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[500], word[20];
  int lineno = 1;


    printf("Enter filename : ");
    gets(filename);

    fp = fopen(filename,"rt");
    if (fp == NULL)
    {
       printf("Sorry! File [%s] could not be opened!",filename);
       exit(1);  // Terminate program
    }

    printf("Enter search string : ");
    gets(word);

    while(1)
    {
       if(fgets(line,200,fp) == NULL)  // EOF
          break;

       if (strstr(line,word) != NULL)  // found word
           printf("%03d: %s",lineno, line);

       lineno ++;
    }

    fclose(fp);
}
