#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inmins,hours,outmins;
    printf("Input minute(s): ");
    scanf("%d",&inmins);
    hours = inmins / 60;
    outmins = inmins % 60;20

    printf("%d Hours , %d Minutes",hours,outmins);
    return 0;
}
