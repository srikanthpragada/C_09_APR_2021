// String functions demo

#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Coding";
    char s2[20];
    int i;

    // s2 = s1;

    strcpy(s2,s1);
    puts(s2);
    strupr(s2);
    puts(s2);

    strcpy(s1, "ABC");
    strcpy(s2, "Abc");

    printf("\n%d ", stricmp(s1,s2));
}
