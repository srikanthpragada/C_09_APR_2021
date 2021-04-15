// Net amount calculation

#include <stdio.h>

void main()
{
 float price,amount,discount,net_amount;
 int qty;

    printf("Enter price :");
    scanf("%f",&price);

    printf("Enter qty   :");
    scanf("%d",&qty);

    amount = price * qty;
    discount = amount * 10 / 100;

    net_amount = amount  - discount;
    printf("Net Amount = %.2f",net_amount);

}
