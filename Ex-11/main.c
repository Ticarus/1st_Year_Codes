#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID , wrkhrs , salaryhr , wrkdys , salarymth;

    printf("Enter worker ID (max 10 characters)--> ");

    scanf("%d",&ID);

    printf("Enter daily working hour--> ");

    scanf("%d",&wrkhrs);

    printf("Enter salary per hour--> ");

    scanf("%d",&salaryhr);

    printf("Enter days of work in a week--> ");

    scanf("%d",&wrkdys);

    salarymth = ((salaryhr * wrkhrs) * wrkdys) * 4;

    printf("Worker's ID--> %d\nSalary(monthly)--> %d",ID,salarymth);

    return 0;
}
