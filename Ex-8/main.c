#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day , year , week , reday;

    printf("Enter the day(s)--> ");

    scanf("%d",&day);

    year = day / 365;

    week = (day % 365) / 7;

    reday = ((day % 365) % 7);

    printf("Year: %d\nWeek: %d\nDay: %d",year,week,reday);

    return 0;
}
