#include <stdio.h>
#include <string.h>
#define  NAMESIZE 30

struct product
{
  int id;
  char name[NAMESIZE];
  int price;
};

void main()
{
   FILE * fp;
   int count;
   struct product prod;

   // open file
   fp = fopen("products.dat","rb");


       count = fread(&prod,sizeof(struct product),1,fp);
       if (count == 0)  // EOF
         break;
       printf("%3d %-20s  %6d\n", prod.id, prod.name, prod.price);

   fclose(fp);
}

