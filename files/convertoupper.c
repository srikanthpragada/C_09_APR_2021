// Take source and target files on command line and writes source to target after converting it to upper

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * sfp, *tfp;
  int ch;

    sfp = fopen(argv[1],"rt");  // source
    if (sfp == NULL)
    {
       printf("Sorry! File [%s] could not be opened!",argv[1]);
       exit(1);  // Terminate program
    }
    printf("Opened Source File\n");

    tfp = fopen(argv[2],"wt");
    if (tfp == NULL)
    {
       printf("Sorry! File [%s] could not be created!",argv[2]);
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
