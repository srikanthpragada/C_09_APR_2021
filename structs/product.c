struct product
{
  // Members
  int id;
  char name[30];
  int price;
};

void main()
{
  struct product p1;

    p1.id = 1;
    strcpy(p1.name,"Power Beats Pro");
    p1.price = 21500;

    printf("%d  %s %d",p1.id,p1.name,p1.price);

}
