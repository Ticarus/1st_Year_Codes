#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;

    char grade1 = 'A';

    char grade2 = 'B';

    char grade3 = 'C';

    char grade4 = 'D';

    char grade5 = 'F';

    printf("Student's grade (0-100): ");

    scanf("%d",&grade);

    if ( grade >= 90)
    {
        printf("Student scored %d on exam and his/her grade is %c",grade,grade1);
    }
    else
    {
       if ( grade <= 89 && grade >= 80)
       {
           printf("Student scored %d on exam and his/her grade is %c",grade,grade2);
       }
       else
       {
           if ( grade <= 79 && grade >= 70)
           {
               printf("Student scored %d on exam and his/her grade is %c",grade,grade3);
           }
           else
           {
               if ( grade <= 69 && grade >= 60)
               {
                   printf("Student scored %d on exam and his/her grade is %c",grade,grade4);
               }
               else
               {
                   if ( grade < 60)
                   {
                       printf("Student scored %d on exam and his/her grade is %c",grade,grade5);
                   }
               }

           }
       }
    }






    return 0;
}
