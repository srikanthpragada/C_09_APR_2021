// Display grade for marks in 2 subjects

#include <stdio.h>

void main()
{
  int m1,m2,grade;

     printf("Enter marks in two subjects :");
     scanf("%d%d",&m1,&m2);

     if(m1 > 80 && m2 > 80)
         grade = 1;
     else
         if(m1 + m2 > 160)
            grade = 2;
         else
            if (m1 > 90 || m2 > 90)
              grade = 3;
            else
              grade = 4;

     printf("Grade = %d",grade);
}
