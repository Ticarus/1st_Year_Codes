#include <stdio.h>
#include <stdlib.h>


int main()
{
    int score[10],i,j;

    for(i=0;i<=9;i++)
    {
        printf("Enter the next score: ");
        scanf("%d",&score[i]);
    }

    for(j=0;j<=9;j++)
    {
        printf("%d\n",score[j]);
    }


    return 0;
}


