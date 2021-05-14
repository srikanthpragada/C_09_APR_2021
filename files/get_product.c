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
   int count,id, pos;
   struct product prod;

   // open file
   fp = fopen("products.dat","rb");
   printf("Enter product id : ");
   scanf("%d",&id);
   pos = (id - 1) * sizeof(struct product);
   fseek(fp, pos, SEEK_SET);
   count = fread(&prod,sizeof(struct product),1,fp);
   if (count == 1)  // EOF
       printf("%3d %-20s  %6d\n", prod.id, prod.name, prod.price);
   else
       printf("Not found!");

   fclose(fp);
}

