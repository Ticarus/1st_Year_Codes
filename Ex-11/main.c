#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j,k=1;
    printf("Input row count:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
