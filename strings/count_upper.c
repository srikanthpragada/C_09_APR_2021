// Count uppercase letters
#include <stdio.h>

int main() {
    char name[30];
    int i,count=0;

    printf("Enter a name:");
    gets(name);

    for(i=0;name[i]!=0;i++)
    {
      if(isupper(name[i]))
          count++;
    }

    printf("Uppercase count = %d",count);
}
