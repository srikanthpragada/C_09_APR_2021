#include <stdio.h>

void main()
{
   int grade,salary, hra,da,gross,it,net;

     printf("Enter salary :");
     scanf("%d",&salary);

     printf("Enter Grade [1/2] :");
     scanf("%d",&grade);

     if(grade == 1)
     {
         hra = salary * 30 /100;
         da = salary * 25 / 100;
     }
     else
     {
         hra = salary * 35 /100;
         da = salary * 30 / 100;
     }

     gross = salary + hra + da;
     it = gross * 10 / 100;
     net = gross - it;

     printf("Net Salary = %d", net);
}
