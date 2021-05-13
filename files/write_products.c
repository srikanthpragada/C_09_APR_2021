#include <stdio.h>
#include <string.h>
#define  NAMESIZE 30

struct product
{
  int id;
  char name[NAMESIZE];
  int price;
};

typedef struct product PRODUCT;

void main()
{
    FILE * fp;
    int i;
    PRODUCT products[5] = { {1,"iPhone11", 80000},
                            {2,"iPad Air 2", 45000},
                            {3,"Power Beats Pro",20000},
                            {4,"Bose Headset",27000},
                            {5,"Bose Speakers",15000} };

   // open file
   fp = fopen("products.dat","wb");

   for(i = 0; i < 5; i ++)
   {
       fwrite(&products[i],sizeof(PRODUCT),1,fp);
   }

   fclose(fp);
}

