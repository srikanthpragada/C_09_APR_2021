// Palindrome
#include <stdio.h>
void main()
{
 int num,rnum,d, orgnum;

    printf("Enter a number :");
    scanf("%d",&num);

    orgnum = num;
    rnum = 0;
    while(num > 0)
    {
        d = num % 10;
        rnum = rnum * 10 + d;
        num /= 10;
    }

    if(orgnum == rnum)
       printf("Palindrome");
    else
       printf("Not a Palindrome");
}
