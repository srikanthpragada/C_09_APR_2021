#include <stdio.h>
#include <string.h>
#define  NAMESIZE 30

struct product
{
  // Members
  int id;
  char name[NAMESIZE];
  int price;
};

typedef struct product PROD;

void main()
{
  struct product p1;
  PROD p2;

    p1.id = 1;
    strcpy(p1.name,"Power Beats Pro");
    p1.price = 21500;

    printf("%d  %s %d",p1.id,p1.name,p1.price);

}
