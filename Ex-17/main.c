#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inpt,years,months,days;

    printf("Input the days--> ");

    scanf("%d",&inpt);

    years = inpt / 365;

    months = (inpt % 365) / 30;

    days = (inpt % 365) % 30;

    printf("%d Year(s)\n%d Month(s)\n%d Day(s) ",years,months,days);

    return 0;
}
