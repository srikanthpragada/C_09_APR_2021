// Print string in reverse
#include <stdio.h>

int main() {
    char name[30];
    int i;

    printf("Enter a name:");
    gets(name);

    //for(i=0;name[i] != 0;i++)
    //   ;

    for(i = strlen(name) - 1; i >= 0; i --)
        putch(name[i]);
}
