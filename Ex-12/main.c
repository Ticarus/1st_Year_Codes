#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j,k=1,spc,t;
    printf("Input row count:");
    scanf("%d",&rows);
    spc = rows+4-1;
    for(i=1;i<=rows;i++)
    {
        for(j=spc;j>=1;j--)
        {
            printf(" ");
        }
        for(t=1;t<=i;t++)
        {
            printf("%d ",k++);
        }
        printf("\n");
        spc--;
    }
    return 0;
}
