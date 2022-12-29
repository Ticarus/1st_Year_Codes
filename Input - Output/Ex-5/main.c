#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,minutes,tmins;
    printf("Input hour(s): ");
    scanf("%d",&hours);
    printf("Input minute(s): ");
    scanf("%d",&minutes);
    tmins = (hours * 60) + minutes;
    printf("Total: %d minutes",tmins);
    return 0;
}
