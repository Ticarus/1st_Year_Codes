#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;

    int pow3;

    for(i = 0 ; i <= 5 ; i++)
    {
        printf("%d %.0f \n",i,pow(3,i));
    }

    return 0;
}
