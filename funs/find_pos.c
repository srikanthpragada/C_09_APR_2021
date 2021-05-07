

// Returns position in first string where any char in second string is found
// Returns -1 if none is found
int findpos(char s1[20], char s2[20])
{
  int i,j;

    for(i = 0; s1[i] != '\0'; i ++)
    {
       // check whether this char is present in second string
       for(j = 0; s2[j] != '\0' ; j ++)
       {
          if (s1[i] == s2[j])
              return i;
       }
    }

    return -1;

}

void main()
{
  char st1[] = "Abcd";
  char st2[] = "BED";

  printf("Position : %d", findpos(st1,st2));


}
