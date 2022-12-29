#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first[25] = "Katniss";
    char last[25] = " Everdeen";

    strcat(first, last);   //Adds last to the end of first

    printf("I am %s\n",first);

    return 0;
}
