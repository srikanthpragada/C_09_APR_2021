int isprime(int num)
{
  int i;

    for(i=2;i <= num/2;i++)
    {
      if(num % i == 0)
      {
         return 0;
      }
    }
    return 1;
}

void print_prime(int start, int end)
{
   int n;

     if(start % 2 == 0)  // If it is even then take next odd
         start ++;

     for(n = start; n <= end; n += 2)
     {
        if (isprime(n))
           printf("%5d", n);
     }
}

void main()
{
   printf("%d ", isprime(23));
   printf("%d ", isprime(25));
   print_prime(500,1000);

}
