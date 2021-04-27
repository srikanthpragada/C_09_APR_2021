// Nested Loop Demo
#include <stdio.h>
void main()
{
 int i,j, n = 1;

    for( i = 1; i <= 5; i ++)
    {
        for(j = 1; j <= 5; j ++)
        {
            printf("%2d ",n++);
        }

        printf("\n");
    }
}
