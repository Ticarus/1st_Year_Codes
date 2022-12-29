#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inpt,hours,minutes,seconds;

    printf("Input seconds--> ");

    scanf("%d",&inpt);

    hours = inpt / 3600;

    minutes = (inpt % 3600) / 60;

    seconds = (inpt % 3600) % 60;

    printf("H:M:S --> %d:%d:%d",hours,minutes,seconds);

    return 0;
}
