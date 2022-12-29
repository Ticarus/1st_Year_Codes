#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i%2==0)
            {
                printf("O");
            }
            else
            {
                printf("X");
            }
        }
        printf("\n");
    }
    return 0;
}
