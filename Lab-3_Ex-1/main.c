#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number,divisioncheck1,divisioncheck2;

   printf("Check the number: ");

   scanf("%d",&number);

   divisioncheck1 = number % 5;

   divisioncheck2 = number % 12;

   if ( divisioncheck1 > 0)
   {
       printf("%d is not divisible",number);
   }
   else
   {
       if ( divisioncheck2 > 0)
       {
           printf("%d is not divisible",number);
       }
       else
       {
           printf("%d is divisible",number);
       }
   }

    return 0;
}
