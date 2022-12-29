#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=12;i++)
    {
        printf("X");
        if(i%4==0)
        {
            printf("\n");
        }
    }
    return 0;
}
