// Function to print array in reverse

#include <stdio.h>

void initalize(int arr[10])
{
   int i;

    srand(time(0));
    for(i = 0; i < 10; i ++)
        arr[i] = rand() % 100;
}

void print(int arr[10])
{
   int i;

    for(i = 0; i < 10; i ++)
        printf("%5d", arr[i]);
}


void reverse(int arr[10])
{
   int i;

    for(i = 9; i >= 0; i --)
       printf("%5d", arr[i]);
}


void main()
{
  int a[10], b[10];

     initalize(a);
     initalize(b);
     // print it
     print(a);
     printf("\nReverse\n");
     reverse(a);
}
