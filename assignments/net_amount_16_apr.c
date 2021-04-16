// Net amount calculation with discount and tax
#include <stdio.h>

void main()
{
 float price,amount,discount,net_amount, gross_amount, tax;
 int qty;

    printf("Enter price :");
    scanf("%f",&price);

    printf("Enter qty   :");
    scanf("%d",&qty);

    amount = price * qty;
    discount = amount * 10 / 100;
    gross_amount = amount - discount;
    tax = gross_amount * 12 / 100;
    net_amount = gross_amount + tax;

    // Display details
    printf("Amount           %10.2f\n",amount);
    printf(" - Discount      %10.2f\n",discount);
    printf("After Discount   %10.2f\n",gross_amount);
    printf(" + Tax           %10.2f\n",tax);
    printf("Net Amount       %10.2f\n",net_amount);

}
