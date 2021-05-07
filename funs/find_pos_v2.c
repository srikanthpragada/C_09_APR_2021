#include <stdio.h>

// Returns position in first string where any char in second string is found
// Returns -1 if none is found
int findpos(char s1[20], char s2[20])
{
  int i,j;
  char * p;

    for(i = 0; s1[i] != '\0'; i ++)
    {
        p =  strchr(s2,s1[i]);
        if(p != NULL )
            return  p - s1;
    }

    return NULL;
}

void main()
{
  char st1[] = "Abcd";
  char st2[] = "BED";

  printf("Position : %d", findpos(st1,st2));


}
