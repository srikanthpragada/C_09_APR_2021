// User-defined factors

#include <stdio.h>

void print_factors(int num)
{
   int i;

    for(i = 2; i <= num/2; i ++)
        if(num % i == 0)
            printf("%5d", i);
}


void main()
{
     printf("Factors of 255 : ");
     print_factors(255);
     printf("\nFactors of 128 : ");
     print_factors(128);
}
