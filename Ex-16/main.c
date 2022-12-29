#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //In order to use advanced mathematical functions

int main()
{
    float a = 4.2;
    int b = floor(a);   //Pushes the non integer value to the lower integer value
    int c = ceil(a);    //Pushes the non integer value to the higher integer value

    printf("Floor function lowers %.1f to %d\n",a,b);
    printf("Ceil function finds nest highest integer of %.1f to %d",a,c);

    return 0;
}
