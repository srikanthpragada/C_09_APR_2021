#include <stdio.h>

struct product
{
  // Members
  int id;
  char name[30];
  int price;
};

void print_product(struct product p)
{
    printf("%5d %-30s  %10d\n", p.id, p.name, p.price);
}


void main()
{
  struct product p = {1, "Bose Headphones", 25000};

  struct product pl[5];
  int i;

     srand(time(0));
     for(i = 0; i < 5; i ++)
     {
        pl[i].id = i + 1;
        pl[i].price = rand();
        sprintf(pl[i].name,"Product %d",i + 1);

        print_product(pl[i]);

     }

}
