// Table
void table(int num, int length)
{
 int i;

     for(i = 1; i <= length ; i ++)
        printf("%3d * %3d = %5d\n", num, i, num * i);
}

void main()
{
   table(15,10);
   table(23,5);

}
