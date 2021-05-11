#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

    fp = fopen("chars.txt","wt");

    for(ch = 65; ch <= 90; ch ++)
        fprintf(fp,"%c %d\n",ch,ch);

    fclose(fp);
}
