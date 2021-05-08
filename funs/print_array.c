
void print_array(int a[], int length)
{
int i;

   for(i=0; i < length; i ++)
      printf("%d\n", a[i]);
}

void main()
{
  int arr[10];
  int arr2[5] = {10,20,30,40,50};

      print_array(arr,10);
      print_array(arr2,5);
}
