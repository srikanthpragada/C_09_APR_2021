
int square(int num)
{
    return  num * num;
}

int isprime(int num)
{
  int i;

      for (i = 2; i <= num/2; i ++)
      {
          if (num % i == 0)
             return 0;  // false
      }

      return 1;  // true
}

void main()
{
  int res,n;

     square(10);
     printf("Result = %d\n",square(25));

     for(n = 51; n < 100; n += 2)
     {
         if (isprime(n))
             printf("%d ", n);
     }
}
