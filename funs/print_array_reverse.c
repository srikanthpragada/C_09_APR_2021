void reverse(int n)
{
   do
   {
       printf("%d",n%10);
       n=n/10;
   }
   while(n>0);
}

void print_array_reverse(int n[10])
{
 int i;

   for(i=0;i<=9;i++)
   {
     reverse(n[i]);
     putchar('\n');
   }
}

int count_positive_number(int n[10])
{
 int i, count = 0;

   for(i=0;i<=9;i++)
   {
     if (n[i]) > 0)
        count ++;
   }
   return count;
}

void main()
{
   int a[10]={0,12,56,43,30,78,21,32,45,9};

   print_array_reverse(a);
}
