#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j;
    printf("Input row count:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
