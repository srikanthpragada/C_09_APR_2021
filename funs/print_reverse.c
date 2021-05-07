#include <stdio.h>
#include <conio.h>

// Table
void reverse(int num)
{
    while(num > 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
}

void print_array_reverse(int a[5])
{
    int i;

      for(i = 0; i < 5; i ++)
      {
           reverse(a[i]);
           putch('\n');
      }
}

void main()
{
 int nums [] = {345,2233,22,1244,84833};

     print_array_reverse(nums);

}
