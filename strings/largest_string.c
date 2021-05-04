// Display largest of strings given until end

#include <stdio.h>
#include <string.h>

int main() {
    char s[20], largest[20];


    strcpy(largest,"");  // largest[0] = '\0';
    while(1)
    {
        printf("Enter name [end to stop] :");
        gets(s);
        if (stricmp(s,"end") == 0)
             break;

        if (strcmp(s,largest) > 0)
             strcpy(largest,s);
    }

    printf("Largest = %s", largest);
}
