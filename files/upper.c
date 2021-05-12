#include <stdio.h>

void main()
{
  FILE * sfp, *tfp;
  char source[50], target[50];
  int ch;

    printf("Enter source filename : ");
    gets(source);

    sfp = fopen(source,"rt");
    if (sfp == NULL)
    {
       printf("Sorry! File [%s] could not be opened!",source);
       exit(1);  // Terminate program
    }
    printf("Opened Source File\n");

    printf("Enter target filename : ");
    gets(target);

    tfp = fopen(target,"wt");
    if (tfp == NULL)
    {
       printf("Sorry! File [%s] could not be created!",target);
       exit(2);  // Terminate program
    }

    printf("Created Target File\n");

    while(1)
    {
       ch = fgetc(sfp);
       if(ch == EOF)
         break;
       fputc(toupper(ch),tfp);
    }

    fclose(sfp);
    fclose(tfp);

    printf("Wrote Source to Target Successfully!\n");
}
